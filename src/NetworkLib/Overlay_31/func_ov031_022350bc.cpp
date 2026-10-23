#include <globaldefs.h>

extern "C" void* func_ov031_0223cf4c(int arg0, int arg1);

struct Struct_ov031_022350bc_2 { unsigned short unknown_0_; unsigned short unknown_2_; };
extern "C" void func_ov031_0223cb10(unsigned short arg0, unsigned short arg1, Struct_ov031_022350bc_2* arg2);

extern "C" int func_ov031_0223be70(int, int, int);
extern unsigned char data_ov031_022491f0[];

extern "C" void func_ov031_0223bbd8(void*, int, int, int);

struct Struct_ov031_02222ce4;
extern "C" ARM void func_ov031_0223bcc8(Struct_ov031_02222ce4*, int, int);

extern "C" ARM void* func_ov031_0223e218(void* arg0, void* arg1, void* arg2, int arg3);
extern "C" void func_ov031_02235234(void);

struct Struct_ov031_022350bc {
    int unknown_0_;
    unsigned char unknown_4_[0xc - 0x4];
    int unknown_c_;
    unsigned char unknown_10_[0x19 - 0x10];
    unsigned char unknown_19_;
    unsigned char unknown_1a_;
    unsigned char unknown_1b_;
};
extern Struct_ov031_022350bc* data_ov031_02290cf4;

// USA: func_ov031_022350bc
extern "C" ARM void func_ov031_022350bc(int arg0, int arg1, unsigned short arg2, unsigned short arg3, int arg4) {
    data_ov031_02290cf4 = (Struct_ov031_022350bc*)func_ov031_0223cf4c(0x20, 4);
    data_ov031_02290cf4->unknown_1b_ = (unsigned char)arg0;
    data_ov031_02290cf4->unknown_19_ = (unsigned char)arg1;
    data_ov031_02290cf4->unknown_1a_ = (unsigned char)arg4;
    func_ov031_0223cb10((unsigned short)arg2, (unsigned short)arg3, (Struct_ov031_022350bc_2*)((char*)data_ov031_02290cf4 + 0x10));
    data_ov031_02290cf4->unknown_0_ = func_ov031_0223be70(0, data_ov031_022491f0[arg0], 1);
    func_ov031_0223bbd8((void*)data_ov031_02290cf4->unknown_0_, -1, arg2, arg3 + arg4);
    func_ov031_0223bcc8((Struct_ov031_02222ce4*)data_ov031_02290cf4->unknown_0_, -1, 1);
    data_ov031_02290cf4->unknown_c_ = (int)func_ov031_0223e218(0, (void*)func_ov031_02235234, 0, 0x80);
}
