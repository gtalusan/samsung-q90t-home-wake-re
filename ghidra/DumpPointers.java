// @category CleanFrame.Recon
// Dump 4-byte words in given ranges that point into .rodata, resolving strings.
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;

public class DumpPointers extends GhidraScript {

    @Override
    public void run() throws Exception {
        Memory mem = currentProgram.getMemory();
        long[] starts = { 0x45e9d600L, 0x45e9f000L, 0x45ea1c00L, 0x45ea2700L, 0x45ea2900L };
        long[] ends   = { 0x45e9d900L, 0x45e9f700L, 0x45ea2100L, 0x45ea2800L, 0x45ea2a00L };
        for (int i = 0; i < starts.length; i++) {
            println("######## range " + Long.toHexString(starts[i]) + " - " + Long.toHexString(ends[i]));
            long off = starts[i];
            while (off < ends[i]) {
                Address a = toAddr(off);
                if (mem.contains(a)) {
                    int w = mem.getInt(a);
                    Address t = toAddr(w & 0xffffffffL);
                    if (mem.contains(t)) {
                        String s = readString(t);
                        println("  " + Long.toHexString(off) + " -> " + Long.toHexString(w)
                                + " : " + (s == null ? "(non-string)" : s));
                    }
                }
                off += 4;
            }
        }
    }

    private String readString(Address a) {
        try {
            byte[] buf = new byte[160];
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
