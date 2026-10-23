#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov003_021672e4_96 = 0x30 };
#else
enum { Enum_ov003_021672e4_96 = 0x60 };
#endif


extern "C" unsigned short GetSubBGVRAMBanks(void);
extern "C" unsigned short GetSubObjVRAMBanks(void);

struct Struct_02074b64;
extern "C" void func_02074b64(struct Struct_02074b64* arg0);

struct Struct_ov003_021672e4 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
    int unknown_18_;
    char unknown_1c_[Enum_ov003_021672e4_96 - 0x1c];
    int unknown_60_;
    int unknown_64_;
    int unknown_68_;
    int unknown_6c_;
    int unknown_70_;
    unsigned char unknown_74_;
    unsigned char unknown_75_;
    unsigned char unknown_76_;
};

// USA: func_ov003_021672e4
extern "C" ARM void func_ov003_021672e4(struct Struct_ov003_021672e4* arg0, int arg1, int arg2) {
    arg0->unknown_0_ = 0;
    arg0->unknown_4_ = 0;
    arg0->unknown_8_ = 0;
    arg0->unknown_c_ = 0;
    arg0->unknown_10_ = 0;
    arg0->unknown_14_ = GetSubBGVRAMBanks();
    arg0->unknown_18_ = GetSubObjVRAMBanks();
    *((unsigned char*)arg0 + 0x2c) = 0;
    *((unsigned char*)arg0 + 0x2d) = 0;
    func_02074b64((struct Struct_02074b64*)((char*)arg0 + 0x1c));
    arg0->unknown_60_ = (*(volatile unsigned int*)0x4001000 & 0x1f00) >> 8;
    arg0->unknown_64_ = -1;
    arg0->unknown_68_ = arg0->unknown_6c_ = 0;
    arg0->unknown_70_ = arg1;
    arg0->unknown_74_ = 0;
    arg0->unknown_75_ = 0;
    arg0->unknown_76_ = (unsigned char)arg2;
}
