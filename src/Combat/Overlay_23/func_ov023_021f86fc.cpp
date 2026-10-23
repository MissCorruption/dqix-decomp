#include <globaldefs.h>

extern "C" void* func_ov011_021849c8(int arg0);
extern "C" void* func_ov023_021f6880(void** arg0, int arg1);
extern "C" void* func_ov023_021f79e4(void* arg0);
extern "C" int func_0204c7e0(unsigned char* arg0);
extern "C" int func_0204fd00(void* arg0, int arg1);
extern "C" void func_0204bc74(void* arg0, int arg1, short arg2, short arg3, short arg4, short arg5, int arg6);

// USA: func_ov023_021f86fc
extern "C" ARM void func_ov023_021f86fc(unsigned char* arg0, int arg1) {
    void* var0 = func_ov011_021849c8(arg1);
    void* var1 = func_ov023_021f6880((void**)var0, arg0[0x108]);
    if (!var1) return;
    void* var2 = func_ov023_021f79e4(var1);
    if (!func_0204c7e0(arg0 + 0x20)) return;
    if (arg0[0xe5] & 0x20) return;
    if (arg0[0xe5] & 0x80) return;
    short var3 = *(short*)(arg0 + 0xcc);
    short var4 = *(short*)(arg0 + 0xce);
    short var5 = *(short*)(arg0 + 0xc8);
    short var6 = *(short*)(arg0 + 0xe0);
    func_0204bc74(var2, 1, var3, var4, var5, var6, 0);
    if (var6 == 0) return;
    if (!func_0204fd00(arg0 + 0x20, 1))
        func_0204bc74(var2, 2, var3, var4, 1, 1, 0);
    if (!func_0204fd00(arg0 + 0x20, 2))
        func_0204bc74(var2, 0x402, (short)(var3 + var5 - 1), var4, 1, 1, 0);
    if (!func_0204fd00(arg0 + 0x20, 4))
        func_0204bc74(var2, 0x802, var3, (short)(var4 + var6 - 1), 1, 1, 0);
    if (!func_0204fd00(arg0 + 0x20, 8))
        func_0204bc74(var2, 0xc02, (short)(var3 + var5 - 1), (short)(var4 + var6 - 1), 1, 1, 0);
}
