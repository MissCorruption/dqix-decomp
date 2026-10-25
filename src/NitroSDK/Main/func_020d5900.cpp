#include <globaldefs.h>


#if defined(jpn)
#define func_020ca408 func_020cbed4
#endif

extern "C" void* func_020d41d8(void);
extern "C" int func_020d41e8(void);
extern "C" void func_020d404c(int arg0, int arg1);
extern "C" int func_020d4168(void* arg0, unsigned int arg1);
extern "C" void func_020ca3ec(int arg0, void* arg1, int arg2);
extern "C" void func_020ca408(void* arg0, void* arg1, int arg2);

struct Struct_020d5900 {
    unsigned short unknown_0_;
    unsigned char unknown_2_[2];
    unsigned char unknown_4_[0x1c];
};

// USA: func_020d5900
extern "C" ARM int func_020d5900(int arg0, void* arg1) {
    func_020d41d8();
    int var0 = func_020d41e8();
    if (var0 != 0) return var0;
    func_020d404c(0x23, arg0);
    struct Struct_020d5900 var1;
    func_020ca3ec(0, &var1, 0x20);
    var1.unknown_0_ = 0x23;
    func_020ca408(arg1, var1.unknown_4_, 0x1c);
    int var2 = func_020d4168(&var1, 0x20);
    return (var2 == 0) ? 2 : var2;
}
