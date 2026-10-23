#include <globaldefs.h>
#if defined(jpn)
extern "C" int func_02069430(void*, unsigned short);
extern "C" int func_02069444(void*, unsigned short);
extern "C" int func_020694a0(void*, unsigned short);
extern "C" void func_0206cb14(void*, int, unsigned short);
#endif

extern "C" int func_02067ad8(int arg0, void* arg1);
extern "C" bool func_02044494(void* arg0, void* arg1);
extern "C" int func_02044420(void* arg0, void* arg1);

struct Struct_0204500c_4;
extern "C" void func_0206b198(struct Struct_0204500c_4* arg0, unsigned short arg1);

struct Struct_02065990 {
    #if defined(jpn)
    unsigned char unknown_0_[0x18];
#else
    unsigned char unknown1_0_[0x4c];
#endif
    unsigned short* unknown_4c_;
    unsigned char unknown_50_[0x74 - 0x50];
    int unknown_74_;
    int unknown_78_;
};

// USA: func_0206b61c
extern "C" ARM void func_0206b61c(struct Struct_02065990* arg0) {
    int var0 = 1;
    int var1 = 0;
    int var2 = var1;
    unsigned short* var3 = arg0->unknown_4c_ + arg0->unknown_74_;
    while (var0) {
        int var4;
        #if defined(jpn)
        if (func_020694a0(arg0, *var3)) {
#else
        if (func_02067ad8((int)arg0, var3)) {
#endif
            var0 = var2;
        }
        #if defined(jpn)
        if (func_02069430(arg0, *var3)) {
#else
        if (func_02044494(arg0, var3)) {
#endif
            #if defined(jpn)
            var4 = func_02069444(arg0, *var3);
#else
            var4 = func_02044420(arg0, var3);
#endif
            var3 += var4;
            var1 += var4;
        } else {
#if defined(jpn)
            func_0206cb14(arg0, *((unsigned char*)arg0 + 0x1788), *var3);
            func_0206cb14(arg0, 12, *var3);
            func_0206cb14(arg0, 6, *var3);
#else
            func_0206b198((struct Struct_0204500c_4*)arg0, *var3);
#endif
        }
        var3 += 1;
        var1 += 1;
    }
    arg0->unknown_74_ += var1;
    arg0->unknown_78_ += 1;
}
