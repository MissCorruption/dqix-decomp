#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_0216d53c_4800 = 0x1150 };
enum { Enum_ov003_0216d53c_1040 = 0x428 };
enum { Enum_ov003_0216d53c_3868 = 0xda0 };
#else
enum { Enum_ov003_0216d53c_4800 = 0x12c0 };
enum { Enum_ov003_0216d53c_1040 = 0x410 };
enum { Enum_ov003_0216d53c_3868 = 0xf1c };
#endif


extern "C" int func_020421a0();
extern "C" void func_0204359c(void* arg0, int arg1);
extern "C" void func_020439b0(void* arg0, int arg1);

struct Struct_0205d2bc;
extern "C" void func_0205d2bc(Struct_0205d2bc* arg0);

extern "C" void func_ov003_02170280(void* arg0);
extern "C" void func_ov003_0215ca68(void* arg0);
extern "C" void func_ov003_02173f04(void* arg0);

struct Struct_ov003_0216d53c {
    char unknown_0_[4];
    short unknown_4_;
    short unknown_6_;
    char unknown_8_[Enum_ov003_0216d53c_4800 - 0x8];
    void* unknown_12c0_;
};

// USA: func_ov003_0216d53c
extern "C" ARM void func_ov003_0216d53c(Struct_ov003_0216d53c* arg0) {
    int var0 = func_020421a0();
    func_0204359c((void*)var0, 2);
    func_020439b0((void*)var0, 0);

    void* var1 = arg0->unknown_12c0_;
    if (var1) {
        if (arg0->unknown_6_ == 0 || arg0->unknown_6_ == 1 || arg0->unknown_4_ == 2) {
            func_0205d2bc((Struct_0205d2bc*)var1);
        }
    }

    if (arg0->unknown_4_ == 4) {
        if (arg0->unknown_6_ > 0) {
            func_ov003_02170280((char*)arg0 + Enum_ov003_0216d53c_1040);
            return;
        }
    }
    if (arg0->unknown_4_ == 3) {
        if (arg0->unknown_6_ == 1) {
            func_ov003_0215ca68((char*)arg0 + 0x14);
        }
        return;
    }
    if (arg0->unknown_4_ == 5 && arg0->unknown_6_ == 6) {
        func_ov003_02173f04((char*)arg0 + Enum_ov003_0216d53c_3868);
    }
    return;
}
