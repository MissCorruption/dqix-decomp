#include <globaldefs.h>
#if defined(jpn)
extern "C" int func_020d2ff0(const char*);
#endif

struct Struct_02080f8c;
struct Struct_02080fa8;
struct Struct_02080cc0;

extern "C" int func_020e51cc(int arg0);
extern "C" void func_02080f8c(struct Struct_02080f8c* arg0, int arg1, int arg2);
extern "C" void func_02080798(void* arg0, int arg1, int arg2);
extern "C" void func_0208103c(void* arg0, int arg1, int arg2);
extern "C" void func_02080fa8(struct Struct_02080fa8* arg0, int arg1, int arg2);
extern "C" char* func_02081010(void* arg0, int arg1);
extern "C" int func_020420e8(const char* arg0, int arg1);
extern "C" void func_02080828(void* arg0, int arg1, short* arg2, short* arg3);
extern "C" void func_02080854(void* arg0, int arg1, int arg2, int arg3);
extern "C" int func_02080b2c(void* arg0, int arg1);
extern "C" int func_02080b40(void* arg0, int arg1);
extern "C" void func_02080cc0(struct Struct_02080cc0* arg0, int arg1, int arg2);

struct Struct_ov003_02167e28 {
    char unknown_0_[0x10];
    void* unknown_10_;
};

// USA: func_ov003_02167e28
extern "C" ARM void func_ov003_02167e28(struct Struct_ov003_02167e28* arg0, char* arg1, int arg2, unsigned char arg3,
                                        unsigned char arg4, int arg5, int arg6) {
    void* var0 = arg0->unknown_10_;
#if !defined(jpn)
    func_02080f8c((struct Struct_02080f8c*)var0, 3, func_020e51cc(0x3f3));
    func_02080798(var0, 3, 1);
#endif
    func_02080f8c((struct Struct_02080f8c*)var0, 0, (int)arg1);
#if !defined(jpn)
    func_02080798(var0, 0, 1);
#endif
    func_0208103c(var0, 1, (short)arg2);
    func_02080fa8((struct Struct_02080fa8*)var0, 5, arg5);
    func_02080fa8((struct Struct_02080fa8*)var0, 6, arg6);
    func_0208103c(var0, 2, (short)(arg3 + 2));
#if defined(jpn)
    int var1 = (func_020d2ff0(func_02081010(var0, 2)) >> 1) * 10;
#else
    int var1 = func_020420e8(func_02081010(var0, 2), 0);
#endif
    short var2;
    short var3;
    func_02080828(var0, 2, &var2, &var3);
    var2 = 0x40;
    var2 -= var1 >> 1;
    func_02080854(var0, 2, var2, var3);
    func_02080b2c(var0, 0x2c);
    if (arg4 == 0) {
        return;
    }
    func_02080b40(var0, 0x2c);
#if defined(jpn)
    func_02080854(var0, 0x2c, (short)(var2 + var1 + 1), (short)(var3 + 2));
#else
    func_02080854(var0, 0x2c, (short)(var2 + var1 + 1), var3);
#endif
    func_0208103c(var0, 0x2c, (short)(arg4 + 0x1c));
    int var4 = 5;
    if (arg4 == 10) {
        var4 = 0xd;
    }
    func_02080cc0((struct Struct_02080cc0*)var0, 0x2c, var4);
}
