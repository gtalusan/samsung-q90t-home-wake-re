// @category CleanFrame.Recon
// For given functions, print all data references with resolved strings.
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.symbol.Reference;

public class FunctionStrings extends GhidraScript {

    private static final long[] FUNCS = {
        0x45e9d4b0L, // util_get_appbooting_supported_webapp_byappid
        0x45e9cae8L, // util_get_uiapp_has_metadata_byappid
        0x45ea1a10L, // app-booting candidate update / PIG
        0x45e9a7e4L, // context_set_booting_appid_vconf
        0x45e9dd24L, // context_init_pre
        0x45e9b034L, // context_add_livetv_appid
        0x45e9f8a8L, // app_booting_state_changed
    };

    @Override
    public void run() throws Exception {
        for (long ea : FUNCS) {
            Function f = getFunctionAt(toAddr(ea));
            if (f == null) {
                println("### no function at " + Long.toHexString(ea));
                continue;
            }
            println("######## " + f.getName() + " @ " + f.getEntryPoint());
            AddressSet body = new AddressSet(f.getBody());
            Instruction inst = getFirstInstruction(f);
            while (inst != null && body.contains(inst.getAddress())) {
                for (Reference r : getReferencesFrom(inst.getAddress())) {
                    if (!r.isMemoryReference()) continue;
                    String s = readString(r.getToAddress());
                    if (s != null) {
                        println("  " + inst.getAddress() + " -> " + r.getToAddress() + " : " + s);
                    }
                }
                inst = getInstructionAfter(inst);
            }
        }
    }

    private String readString(ghidra.program.model.address.Address a) {
        try {
            byte[] buf = new byte[200];
            currentProgram.getMemory().getBytes(a, buf);
            StringBuilder sb = new StringBuilder();
            for (byte b : buf) {
                if (b == 0) break;
                if (b < 0x20 || b > 0x7e) return null;
                sb.append((char) b);
            }
            return sb.length() > 2 ? sb.toString() : null;
        } catch (Exception e) {
            return null;
        }
    }
}
