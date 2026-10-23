#include <globaldefs.h>
struct Struct_0203e624 { unsigned short* unknown_0_; unsigned short unknown_4_, unknown_6_, unknown_8_, unknown_a_; };
struct Struct_0203e6c8 { unsigned short* unknown_0_; unsigned short unknown_4_, unknown_6_, unknown_8_, unknown_a_; };
struct Struct_0203e63c { unsigned short* unknown_0_; unsigned short unknown_4_, unknown_6_, unknown_8_, unknown_a_; };
extern "C" void func_0203e624(Struct_0203e624*);
extern "C" int func_0203e6c8(Struct_0203e6c8*, unsigned int);
extern "C" unsigned char func_0203e63c(Struct_0203e63c*, unsigned int);
void CleanInvalidateCacheRange(const void*, unsigned int);
// USA: func_0203e7b4
extern "C" ARM int func_0203e7b4(Struct_0203e624* arg0, unsigned short* arg1, unsigned char* arg2, unsigned short* arg3, int arg4, int arg5, int arg6, int arg7) {
    func_0203e624(arg0);
    if (!arg1 || !arg2 || !arg3) return 0;
    arg0->unknown_0_ = arg1;
    arg0->unknown_4_ = arg4;
    arg0->unknown_a_ = 0xfbde;
    arg0->unknown_0_[0] = 0x3e0;
    arg0->unknown_6_++;
    arg0->unknown_8_ = 1;
    unsigned short* var0;
    int var1;
    int var2;
    int var3;
    var3 = arg6;
    var0 = arg3;
    for (var1 = var3; var1 != 0; ) {
        unsigned short* var4 = var0;
        for (var2 = arg5; var2 != 0; --var2) {
            func_0203e6c8((Struct_0203e6c8*)arg0, *var4);
            var4++;
        }
        --var1;
        var0 += arg7;
    }
    CleanInvalidateCacheRange(arg0->unknown_0_, arg0->unknown_6_ * 2);
    unsigned char* var5 = arg2;
    for (; var3 != 0; ) {
        unsigned char* var6 = var5;
        unsigned short* var7 = arg3;
        for (var2 = arg5; var2 != 0; --var2) {
            *var6 = func_0203e63c((Struct_0203e63c*)arg0, *var7++);
            var6++;
        }
        --var3;
        var5 += arg5;
        arg3 += arg7;
    }
    CleanInvalidateCacheRange(arg2, arg5 * arg6);
    func_0203e624(arg0);
    return 1;
}
