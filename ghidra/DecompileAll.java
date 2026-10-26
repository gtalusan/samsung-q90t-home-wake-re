// @category CleanFrame.Recon
// Export decompiled C for every function to <outdir>/<progname>/<name>@<addr>.c
import java.io.File;
import java.io.FileWriter;
import java.util.Iterator;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;

public class DecompileAll extends GhidraScript {

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) {
            println("usage: DecompileAll <outdir>");
            return;
        }
        File out = new File(args[0], currentProgram.getName());
        if (!out.exists() && !out.mkdirs()) {
            println("cannot create " + out);
            return;
        }
        DecompInterface di = new DecompInterface();
        di.openProgram(currentProgram);
        int ok = 0, fail = 0;
        Iterator<Function> it = currentProgram.getFunctionManager().getFunctions(true);
        while (it.hasNext() && !monitor.isCancelled()) {
            Function f = it.next();
            DecompileResults res = di.decompileFunction(f, 90, monitor);
            String name = f.getName() + "@" + f.getEntryPoint();
            File c = new File(out, name.replace('/', '_') + ".c");
            if (res != null && res.decompileCompleted()) {
                try (FileWriter w = new FileWriter(c)) {
                    w.write("/* " + currentProgram.getName() + " : " + name + " */\n");
                    w.write(res.getDecompiledFunction().getC());
                }
                ok++;
            } else {
                try (FileWriter w = new FileWriter(c)) {
                    w.write("/* " + currentProgram.getName() + " : " + name + " : DECOMP FAILED */\n");
                }
                fail++;
            }
        }
        println("EXPORTED ok=" + ok + " failed=" + fail + " into " + out);
    }
}
