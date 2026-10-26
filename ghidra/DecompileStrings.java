// @category CleanFrame.Recon
// Decompile functions that reference boot-selection strings.
import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;

public class DecompileStrings extends GhidraScript {

    private static final String[] KEYWORDS = {
        "appbootingsupport", "appbooting", "app booting", "app_booting",
        "booting_appid", "firstscreen", "first_screen", "autorun", "livetv",
        "featureconf", "last_app", "last:app", "smarthub_key", "bizapp",
        "metadata key", "background standby", "cold boot", "power_suspend", "standby_reboot", "set_cold_poweroff"
    };
    private static final int MAX_FUNCS = 80;

    private boolean interesting(String val) {
        String low = val.toLowerCase();
        for (String k : KEYWORDS) {
            if (low.contains(k.toLowerCase())) {
                return true;
            }
        }
        return false;
    }

    @Override
    public void run() throws Exception {
        Listing listing = currentProgram.getListing();
        FunctionManager fm = currentProgram.getFunctionManager();
        DecompInterface di = new DecompInterface();
        di.openProgram(currentProgram);
        Set<String> done = new HashSet<String>();
        int count = 0;

        for (Data d : listing.getDefinedData(true)) {
            String rep = d.getDefaultValueRepresentation();
            if (rep == null || rep.isEmpty()) {
                continue;
            }
            String val = rep.replace("\"", "");
            if (!interesting(val)) {
                continue;
            }
            List<Reference> refs = new ArrayList<Reference>();
            ReferenceIterator rit = currentProgram.getReferenceManager().getReferencesTo(d.getAddress());
            for (Reference r : rit) {
                refs.add(r);
            }
            if (refs.isEmpty()) {
                continue;
            }
            println("===== STRING @ " + d.getAddress() + " : " + val + "  (" + refs.size() + " xrefs)");
            for (Reference r : refs) {
                Function f = fm.getFunctionContaining(r.getFromAddress());
                if (f == null) {
                    println("  xref from " + r.getFromAddress() + " : (no function)");
                    continue;
                }
                String key = f.getEntryPoint().toString() + "/" + f.getName();
                if (done.contains(key)) {
                    continue;
                }
                done.add(key);
                DecompileResults res = di.decompileFunction(f, 90, monitor);
                if (res != null && res.decompileCompleted()) {
                    println("----- FUNCTION " + f.getName() + " @ " + f.getEntryPoint()
                            + " (ref from " + r.getFromAddress() + ")");
                    println(res.getDecompiledFunction().getC());
                } else {
                    println("----- FUNCTION " + f.getName() + " @ " + f.getEntryPoint() + " : DECOMP FAILED");
                }
                count++;
                if (count >= MAX_FUNCS) {
                    println("HIT MAX_FUNCS");
                    break;
                }
            }
            if (count >= MAX_FUNCS) {
                break;
            }
        }
        println("TOTAL FUNCS DECOMPILED: " + count);
    }
}
