#include <globaldefs.h>

extern unsigned short data_ov031_0224f448;
extern unsigned char data_ov031_0224f44a[];
extern "C" THUMB unsigned char func_ov031_0221e2bc(void*, int);
extern "C" THUMB void* func_ov031_0221c49c(int);
extern "C" THUMB void func_ov031_0221d060(int);
extern "C" THUMB void func_ov031_0221e51c(void*, const void*, unsigned int);
extern "C" THUMB void func_ov031_0221e1ec(void*, void*, int, int);
extern "C" THUMB void func_ov031_0221e250(void*, unsigned char*, unsigned char*, unsigned int);
extern "C" THUMB void func_ov031_0221c4ac(int);
struct Struct_ov031_0221e164 {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    void* unknown_8_;
    unsigned int unknown_c_;
};

// USA: func_ov031_0221e164
extern "C" THUMB int func_ov031_0221e164(void* arg0, void* arg1, int arg2, unsigned char arg3, unsigned short* arg4, void* arg5, int arg6) {
    Struct_ov031_0221e164 var0;
    var0.unknown_8_ = func_ov031_0221c49c(arg2);
    if (!var0.unknown_8_) {
        func_ov031_0221d060(2);
        return -1;
    }
    func_ov031_0221e51c(&data_ov031_0224f448, arg4, 2);
    func_ov031_0221e51c(data_ov031_0224f44a, arg5, arg6);
    func_ov031_0221e1ec(&var0, &data_ov031_0224f448, arg6 + 2, arg2);
    func_ov031_0221e250(&var0, static_cast<unsigned char*>(arg1), static_cast<unsigned char*>(arg0), arg2);
    unsigned char var1 = func_ov031_0221e2bc(arg1, arg2);
    if (var1 != arg3) {
        func_ov031_0221d060(0x12);
        func_ov031_0221c4ac((int)var0.unknown_8_);
        return -1;
    }
    func_ov031_0221c4ac((int)var0.unknown_8_);
    return 0;
}
