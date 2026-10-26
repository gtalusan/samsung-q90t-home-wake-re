// @category CleanFrame.Recon
// Decompile a single function by entry address.
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;

public class DecompileOne extends GhidraScript {

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) {
            println("usage: DecompileOne <hex entry>");
            return;
        }
        Function f = getFunctionAt(toAddr(Long.parseLong(args[0].trim(), 16)));
        if (f == null) {
            println("no function at " + args[0]);
            return;
        }
        DecompInterface di = new DecompInterface();
        di.openProgram(currentProgram);
        DecompileResults res = di.decompileFunction(f, 120, monitor);
        if (res != null && res.decompileCompleted()) {
            println("######## " + f.getName() + " @ " + f.getEntryPoint());
            println(res.getDecompiledFunction().getC());
        } else {
            println("decompile failed");
        }
    }
}
