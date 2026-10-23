#include <globaldefs.h>

struct Struct_020db3a8;
extern "C" int func_020db3a8(Struct_020db3a8* arg0);
extern "C" int func_020de13c(unsigned char* arg0);
extern "C" int func_020de148(unsigned char* arg0);
extern "C" void func_020ddea0(void* arg0, unsigned short arg1, unsigned char arg2, void* arg3, unsigned char arg4, int arg5);

struct Struct_020db5ec {
    unsigned char unknown_0_[0x3c];
    unsigned char unknown_3c_;
    unsigned char unknown_3d_[0x6e - 0x3c - 1];
    unsigned short unknown_6e_;
    unsigned char unknown_70_[3][0x28];
};

// USA: func_020db768
extern "C" ARM void func_020db768(Struct_020db5ec* arg0, void* arg1) {
    arg0->unknown_6e_ = (arg0->unknown_6e_ + 1) % 0xbe;
    for (int var0 = 0; var0 < 3; var0++) {
        unsigned char* var1 = arg0->unknown_70_[var0];
        void* var2 = arg1;
        if (func_020de13c(var1)) {
            var2 = (char*)arg1 + 4;
        } else if (func_020de148(var1)) {
            var2 = (char*)arg1 + 8;
        }
        int var3 = 0xf;
        if (func_020db3a8((Struct_020db3a8*)arg0)) var3 = 0xe;
        func_020ddea0(var1, arg0->unknown_6e_, (unsigned char)(var0 * 4 + 4), var2, arg0->unknown_3c_, var3);
    }
}
