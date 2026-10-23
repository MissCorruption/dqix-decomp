#include <globaldefs.h>

struct Struct_0205d81c;

struct Struct_0205d0e0 {
    char unknown_0_[0xc5];
    unsigned char unknown_c5_;
};

struct Struct_ov000_02176e3c {
    char unknown_0_[0x118];
    int unknown_118_;
    char unknown_11c_[0x188 - 0x11c];
    char unknown_188_[1];
};

extern "C" Struct_0205d0e0* func_0205d81c(Struct_0205d81c* arg0, int arg1);
extern "C" void func_ov000_02177330(void*);
extern "C" void func_ov000_02177558(void*);
extern "C" void func_ov000_02177798(void*);
extern "C" void func_ov000_02177a7c(void*);
extern "C" void func_ov000_02177cb8(void*);
extern "C" void func_ov000_02177f28(void*);
extern "C" void func_ov000_0217819c(void*);
extern "C" void func_ov000_021785fc(void*);
extern "C" int func_ov000_0217542c(void*);
extern "C" void func_ov000_02176498(void* arg0, int arg1);
extern "C" void func_ov000_021788d8(void*, int, int);
extern "C" void func_ov000_02178cbc(void* arg0, int arg1, int arg2);
extern "C" void func_ov000_02179128(void* arg0, int arg1, int arg2);
extern "C" void func_ov000_021795e0(void* arg0, int arg1, int arg2);
extern "C" void func_ov000_02179a14(void*, int, int);
extern "C" void func_ov000_02179c6c(void*, int);
extern "C" void func_ov000_0217a0a4(Struct_ov000_02176e3c* arg0, int arg1);
extern "C" void func_ov000_0217a628(void*, int, int);

// USA: func_ov000_02176e3c
extern "C" ARM void func_ov000_02176e3c(Struct_ov000_02176e3c* arg0, int arg1, int arg2, int arg3, int arg4, unsigned char arg5) {
    Struct_0205d0e0* var0 = func_0205d81c(
        (Struct_0205d81c*)arg0->unknown_188_, (unsigned char)arg2);
    if (var0 == 0) {
        return;
    }
    int var1 = arg0->unknown_118_;
    int var2 = (var0->unknown_c5_ & 2) ? 1 : 0;
    arg0->unknown_118_ = 1;
    if (var2) {
        arg0->unknown_118_ = 2;
    }
    if (arg5) {
        var0->unknown_c5_ |= 0x40;
    } else {
        var0->unknown_c5_ &= ~0x40;
    }
    switch (arg2) {
    case 1:
        func_ov000_02177330(arg0);
        break;
    case 2:
        func_ov000_02177558(arg0);
        break;
    case 3:
        func_ov000_02177798(arg0);
        break;
    case 4:
        func_ov000_02177a7c(arg0);
        break;
    case 5:
        func_ov000_02177cb8(arg0);
        break;
    case 6:
        func_ov000_02177f28(arg0);
        break;
    case 7:
        func_ov000_0217819c(arg0);
        break;
    case 8:
        func_ov000_021785fc(arg0);
        break;
    case 13:
        if (arg1 != 0) {
            func_ov000_02176498((void*)arg1, func_ov000_0217542c(arg0));
        }
        break;
    case 14:
        func_ov000_021788d8(arg0, arg1, arg4);
        break;
    case 15:
        func_ov000_02178cbc(arg0, arg3, arg4);
        break;
    case 16:
        func_ov000_02179128(arg0, arg3, arg4);
        break;
    case 17:
        func_ov000_021795e0(arg0, arg3, arg4);
        break;
    case 18:
    case 19:
    case 20:
        func_ov000_02179a14(arg0, arg1, arg3);
        break;
    case 21:
        func_ov000_02179c6c(arg0, arg1);
        break;
    case 23:
        func_ov000_0217a0a4(arg0, arg1);
        break;
    case 25:
        func_ov000_0217a628(arg0, arg1, arg4);
        break;
    }
    arg0->unknown_118_ = var1;
}
