#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov000_02174d08_7538 = 0x1faa };
#else
enum { Enum_ov000_02174d08_7538 = 0x1d72 };
#endif

struct Struct_ov000_021735d0_2 {
    char unknown_0_[0x4c];
    int unknown_4c_;
    char unknown_50_[0x448 - 0x50];
};

struct Struct_ov000_021735d0_3 {
    char unknown_0_[0x6c];
    signed char unknown_6c_[4];
    char unknown_70_[0x17c - 0x70];
    int unknown_17c_;
};

extern "C" struct Struct_ov000_021735d0_2* func_ov000_0217f8c0(struct Struct_ov000_021735d0_3* arg0);

struct Struct_ov000_02184288 { int unknown_0_; int unknown_4_; int unknown_8_; };
extern int data_ov000_02183ff0;
extern struct Struct_ov000_02184288 data_ov000_02184288;

extern "C" void func_ov000_02177184(void* arg0, void* arg1, int arg2, int arg3);
extern "C" void func_ov000_0217f518(void* arg0);
extern "C" void func_ov000_0217636c(void* arg0, int arg1);

struct Struct_ov000_02174d08 {
    char unknown_0_[0x118];
    int unknown_118_;
};

// USA: func_ov000_02174d08
extern "C" ARM void func_ov000_02174d08(void* arg0) {
    unsigned short var0 = *(unsigned short*)((char*)arg0 + Enum_ov000_02174d08_7538);
    if (var0 & 2) {
        struct Struct_ov000_021735d0_2* var1 = func_ov000_0217f8c0((struct Struct_ov000_021735d0_3*)arg0);
        func_ov000_02177184(arg0, var1, data_ov000_02183ff0, data_ov000_02184288.unknown_4_);
        return;
    }
    if (!(var0 & 4)) {
        return;
    }
    struct Struct_ov000_021735d0_2* var2 = func_ov000_0217f8c0((struct Struct_ov000_021735d0_3*)arg0);
    if (var2 == 0) {
        return;
    }
    int var3 = (((struct Struct_ov000_02174d08*)arg0)->unknown_118_ == 2) ? 1 : 0;
    func_ov000_0217f518(var2);
    if (*(int*)((char*)var2 + 0x38) != 0) {
        func_ov000_0217636c(var2, var3);
    }
    unsigned short var4 = *(unsigned short*)((char*)arg0 + Enum_ov000_02174d08_7538);
    var4 &= ~4;
    *(unsigned short*)((char*)arg0 + Enum_ov000_02174d08_7538) = var4;
}
