// @category CleanFrame.Recon
// Decompile a function by symbol name (requires non-stripped binary).
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolTable;
import java.util.Iterator;

public class DecompileByName extends GhidraScript {

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) {
            println("usage: DecompileByName <symbol-name>");
            return;
        }
        SymbolTable st = currentProgram.getSymbolTable();
        Iterator<Symbol> it = st.getSymbols(args[0].trim());
        DecompInterface di = new DecompInterface();
        di.openProgram(currentProgram);
        int count = 0;
        while (it.hasNext()) {
            Symbol s = it.next();
            Function f = getFunctionContaining(s.getAddress());
            if (f == null) continue;
            println("######## " + f.getName() + " @ " + f.getEntryPoint());
            DecompileResults res = di.decompileFunction(f, 120, monitor);
            if (res != null && res.decompileCompleted()) {
                println(res.getDecompiledFunction().getC());
            } else {
                println("decompile failed");
            }
            count++;
        }
        if (count == 0) println("no function found for symbol: " + args[0]);
    }
}
