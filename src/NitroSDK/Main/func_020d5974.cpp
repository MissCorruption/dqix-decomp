#include <globaldefs.h>

extern "C" int func_020d5900(int, void*);

extern "C" void func_020ca3ec(int arg0, void* arg1, int arg2);

struct Struct_020d5974 {
    unsigned int unknown_0_;
    unsigned char unknown_4_[0xe];
    unsigned short unknown_12_;
    unsigned short unknown_14_;
    unsigned char unknown_16_[0x6];
};

// USA: func_020d5974
extern "C" ARM int func_020d5974(void* arg0, int arg1, int arg2) {
    Struct_020d5974 var0;
    func_020ca3ec(0, &var0, 0x1c);
    var0.unknown_0_ = 0x180;
    var0.unknown_12_ = arg1;
    var0.unknown_14_ = arg2;
    return func_020d5900((int)(arg0), (void*)(&var0));
}
