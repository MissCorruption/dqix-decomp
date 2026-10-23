#include <globaldefs.h>

#if defined(jpn)
namespace {
struct Struct_020200c0_3;
struct Struct_020200c0_4 {
    void* unknown_0_;
    Struct_020200c0_3* unknown_4_;
    unsigned char unknown_8_;
};
}
extern "C" void __clear(void*, int);
extern "C" void func_0205b234(Struct_020200c0_4*, int, int, void*, int, int);

// JPN: func_0205c9ac
extern "C" ARM void func_0205c9ac(Struct_020200c0_4* arg0, short arg1, short arg2, int arg3,
                                  int arg4, int arg5, unsigned char arg6, unsigned char arg7) {
    if (arg0->unknown_0_ != NULL && arg0->unknown_4_ != NULL) {
        int var0 = arg3;
        while ((var0 = var0 / 10) != 0) {}
        if (arg7 == 1) {
            arg1 = (short)(arg1 + (short)((arg6 - 1) * arg4));
        }
        char var1[2];
        do {
            __clear(var1, 2);
            var1[0] = '0';
            var1[0] += (char)(arg3 % 10);
            func_0205b234(arg0, arg1, arg2, var1, arg4, arg5);
            arg1 = (short)(arg1 - arg4);
        } while ((arg3 = arg3 / 10) != 0);
    }
}
#else

struct Struct_020200c0_2 { int unknown_0_; int unknown_4_; };

extern "C" int func_02042658(void* arg0, int arg1);
extern "C" void __clear(void* arg0, int arg1);
extern "C" int sprintf(void* arg0, void* arg1, int arg2);
extern "C" void func_0205b234(struct Struct_020200c0_2* arg0, int arg1, int arg2, void* arg3, int arg4, int arg5);
extern char data_020f0518;

// USA: func_0205b674
extern "C" ARM void func_0205b674(struct Struct_020200c0_2* arg0, short arg1, int arg2, int arg3,
                                              unsigned char arg4, unsigned char arg5, unsigned char arg6, unsigned char arg7) {
    if (arg0->unknown_0_ != 0 && arg0->unknown_4_ != 0) {
        int var0 = arg3;
        while ((var0 = var0 / 10) != 0) {}
        int var1 = func_02042658((void*)arg7, arg3);
        if (arg6 == 1) {
            arg1 = (short)(arg1 + (short)((arg5 << 3) - var1));
        }
        char var2[0xa];
        __clear(var2, 0xa);
        sprintf(var2, &data_020f0518, arg3);
        func_0205b234(arg0, arg1, arg2, var2, arg4, arg7);
    }
}

#endif
