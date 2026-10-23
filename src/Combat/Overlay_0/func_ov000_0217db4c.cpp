#include <globaldefs.h>

#if defined(jpn)
extern unsigned int data_ov000_02184704[4];
#endif

struct Struct_0205d81c;
struct Struct_0205c570;
struct Struct_0205d6a0;
struct Struct_02108760;
struct Struct_ov000_021735d0_2;
struct Struct_ov000_021735d0_3;
extern "C" void func_0205deb4(struct Struct_0205d81c* arg0, int arg1, int arg2);
extern "C" int func_0205d794(struct Struct_0205c570* arg0);
extern "C" int func_ov000_0217c594(void* arg0, int arg1);
extern "C" void func_0205eaa0(struct Struct_02108760* arg0, int arg1, int arg2);
extern "C" void* func_ov000_021815e4(char* arg0);
extern "C" int func_ov000_021815c8(void* arg0);
extern "C" int func_020dd4c4(int arg0, void* arg1);
extern "C" struct Struct_ov000_021735d0_2* func_ov000_0217f8c0(struct Struct_ov000_021735d0_3* arg0);
extern "C" void func_ov000_02176634(void* arg0, struct Struct_ov000_021735d0_2* arg1, int arg2, int arg3, int arg4);
extern "C" int func_ov000_0217c5f4(void* arg0);
extern "C" void func_0205d6a0(struct Struct_0205d6a0* arg0, int arg1);
extern "C" void func_ov000_0217c638(void* arg0, int arg1, int arg2);
extern "C" void func_ov000_02176e3c(void* arg0, struct Struct_ov000_021735d0_2* arg1, int arg2, int arg3, int arg4, int arg5);

extern struct Struct_02108760 data_02108760;

struct Struct_ov000_0217db4c {
    char unknown_0_[0x188];
    char unknown_188_[0x240 - 0x188];
    unsigned char unknown_240_;
    char unknown_241_[0x956 - 0x241];
    unsigned char unknown_956_;
#if defined(jpn)
    char unknown_957_[0x1f98 - 0x957];
#else
    char unknown1_957_[0x1d60 - 0x957];
#endif
    signed char unknown_1d60_[8];
    signed char unknown_1d68_;
    char unknown_1d69_[0x1d6f - 0x1d69];
    signed char unknown_1d6f_;
    char unknown_1d70_[2];
    unsigned short unknown_1d72_;
};

// USA: func_ov000_0217db4c
extern "C" ARM void func_ov000_0217db4c(struct Struct_ov000_0217db4c* arg0, int arg1, int arg2) {
    arg0->unknown_1d72_ |= 0x100;
    func_0205deb4((struct Struct_0205d81c*)arg0->unknown_188_, 0x21, 0);
    signed char var0 = arg0->unknown_1d6f_;
    int var1 = func_0205d794((struct Struct_0205c570*)arg0->unknown_188_);
    arg0->unknown_1d6f_ = var1;
    if (var0 != var1) {
        return;
    }
    if (func_ov000_0217c594(arg0, 5)) {
        arg0->unknown_956_ = 0;
        func_0205eaa0(&data_02108760, 1, 0);
        arg0->unknown_240_ = 7;
        void* var2 = func_ov000_021815e4((char*)arg0);
#if defined(jpn)
        int var3 = func_020dd4c4(func_ov000_021815c8(arg0), var2);
        if (var3 != 0) {
            for (unsigned char var4 = 0; data_ov000_02184704[var4] != 0; var4++) {
                if (var3 & data_ov000_02184704[var4]) {
                    arg0->unknown_1d68_++;
                    arg0->unknown_1d60_[arg0->unknown_1d68_] = 0x1f;
                    func_ov000_02176634(arg0, func_ov000_0217f8c0((struct Struct_ov000_021735d0_3*)arg0), 0x1f, arg1, arg2);
                    return;
                }
            }
            return;
        }
#else
        func_020dd4c4(func_ov000_021815c8(arg0), var2);
#endif
        arg0->unknown_1d68_++;
        arg0->unknown_1d60_[arg0->unknown_1d68_] = 0x20;
        func_ov000_02176634(arg0, func_ov000_0217f8c0((struct Struct_ov000_021735d0_3*)arg0), arg0->unknown_1d60_[arg0->unknown_1d68_], arg1, arg2);
    } else if (func_ov000_0217c5f4(arg0)) {
        arg0->unknown_956_ = 0;
        func_0205d6a0((struct Struct_0205d6a0*)arg0->unknown_188_, 0);
        func_0205d6a0((struct Struct_0205d6a0*)arg0->unknown_188_, 0);
        arg0->unknown_1d60_[arg0->unknown_1d68_] = 0;
        arg0->unknown_1d68_--;
        func_ov000_0217c638(arg0, arg1, arg2);
        func_ov000_02176e3c(arg0, func_ov000_0217f8c0((struct Struct_ov000_021735d0_3*)arg0), arg0->unknown_1d60_[arg0->unknown_1d68_], arg1, arg2, 0);
    }
}
