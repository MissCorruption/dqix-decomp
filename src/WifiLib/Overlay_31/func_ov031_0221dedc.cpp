#include <globaldefs.h>

struct Struct_ov031_0221dedc { unsigned int unknown_0_; unsigned int unknown_4_; };
extern unsigned char data_ov031_0224e6e0[];
extern char data_ov031_0224b0dc[];
extern "C" void func_ov031_0221e52c(void*, int, unsigned int);
extern "C" void func_ov031_0221e51c(void*, const void*, unsigned int);
extern "C" int func_ov031_0221e650(const char*);
extern "C" void func_ov031_0221e354(Struct_ov031_0221dedc*, int, const char*, int);
extern "C" void func_ov031_0221e028(void*, int, int, int, signed char, signed char, const void*);
extern "C" int func_ov031_0221e080(const void*, int, int, int);

// USA: func_ov031_0221dedc
extern "C" THUMB int func_ov031_0221dedc(int arg0, const void* arg1, int arg2) {
    void* var0 = *(void**)(data_ov031_0224e6e0 + 0x14);
    func_ov031_0221e52c(var0, 0, 1500);
    Struct_ov031_0221dedc var1;
    func_ov031_0221e51c(&var1, (const char*)arg1 + 0x10, 8);
    func_ov031_0221e354(&var1, 8, data_ov031_0224b0dc, func_ov031_0221e650(data_ov031_0224b0dc));
    func_ov031_0221e028(var0, 0x3000, 0, 0, 0, 0x11, &var1);
    func_ov031_0221e080(var0, 0x18, 0, arg2);
    return 0;
}
