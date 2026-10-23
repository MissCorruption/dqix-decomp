#include <globaldefs.h>

extern "C" int func_ov024_021fe698(void* arg0, int arg1);
extern "C" void func_ov024_021fd954(void* arg0, int arg1);

// USA: func_ov024_021fc6dc
extern "C" ARM void func_ov024_021fc6dc(void* arg0) {
    if (!func_ov024_021fe698(arg0, 2)) return;
    if (!func_ov024_021fe698(arg0, 5)) return;
    short var0 = *(short*)((char*)(*(int**)((char*)arg0 + 0x64c)) + 0x30);
    if (var0 <= 0) return;
    if (var0 > 5) return;
    int* var1 = (int*)((char*)arg0 + var0 * 4);
    int var2 = *(int*)((char*)var1 + 0x154);
    if (var2 < 0x5a) return;
    int var3 = *(int*)((char*)var1 + 0x13c);
    if (var3 < 0x7d) return;
    *(int*)((char*)arg0 + 0x16c) = var3;
    func_ov024_021fd954(arg0, 13);
}
