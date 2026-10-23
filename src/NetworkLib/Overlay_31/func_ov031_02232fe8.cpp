#include <globaldefs.h>

struct Struct_ov031_02223268_2;
struct Struct_ov031_022269d8;
struct Struct_ov031_02222ce4;
union Struct_ov031_02232fe8 {
    void* unknown_0_;
    Struct_ov031_022269d8* unknown1_0_;
    Struct_ov031_02222ce4* unknown2_0_;
};
struct Struct_ov031_02232fe8_2 {
    int unknown_0_;
    Struct_ov031_02232fe8 unknown_4_[3];
    Struct_ov031_02232fe8 unknown_10_[3];
};
struct Struct_ov031_02290cc0_9 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    Struct_ov031_02232fe8_2* unknown_4_;
};
extern Struct_ov031_02290cc0_9 data_ov031_02290cc0;
struct Struct_ov031_02249082_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
};
extern Struct_ov031_02249082_2 data_ov031_02249082[];
extern Struct_ov031_02249082_2 data_ov031_02249084[];
extern "C" signed char func_ov031_02237e9c();
extern "C" void func_ov031_02236878(int);
extern "C" void func_ov031_02236484(int);
extern "C" Struct_ov031_02223268_2* func_ov031_0223baa0(Struct_ov031_022269d8*, int);
extern "C" int func_ov031_0223bdb0(int, int, int);
extern "C" void func_ov031_0223bbd8(void*, int, int, int);
extern "C" void func_ov031_0223bcc8(Struct_ov031_02222ce4*, int, int);
extern "C" void func_ov031_0223ba20(void*);
extern "C" void func_ov031_02237e58();
extern "C" void func_ov031_022274c0(int);
extern "C" void func_ov031_02233154();

// USA: func_ov031_02232fe8
extern "C" ARM void func_ov031_02232fe8() {
    int var0 = data_ov031_02290cc0.unknown_0_ - 4;
    switch (func_ov031_02237e9c()) {
    case 1:
        func_ov031_02236878(14);
        func_ov031_02236484(var0);
        func_ov031_0223bdb0(0, 86, (int)func_ov031_0223baa0(data_ov031_02290cc0.unknown_4_->unknown_4_[var0].unknown1_0_, 0));
        func_ov031_0223bbd8(data_ov031_02290cc0.unknown_4_->unknown_4_[var0].unknown_0_, -1,
            data_ov031_02249082[var0].unknown_0_, data_ov031_02249084[var0].unknown_0_);
        func_ov031_0223bcc8(data_ov031_02290cc0.unknown_4_->unknown_4_[var0].unknown2_0_, -1, 3);
        func_ov031_0223ba20(data_ov031_02290cc0.unknown_4_->unknown_10_[var0].unknown_0_);
        data_ov031_02290cc0.unknown_4_->unknown_10_[var0].unknown_0_ = 0;
        break;
    case 0:
        func_ov031_02236878(7);
        func_ov031_0223bdb0(0, 17, (int)func_ov031_0223baa0(data_ov031_02290cc0.unknown_4_->unknown_10_[var0].unknown1_0_, 0));
        func_ov031_0223bbd8(data_ov031_02290cc0.unknown_4_->unknown_10_[var0].unknown_0_, -1,
            data_ov031_02249082[var0 + 3].unknown_0_, data_ov031_02249084[var0 + 3].unknown_0_);
        func_ov031_0223bcc8(data_ov031_02290cc0.unknown_4_->unknown_10_[var0].unknown2_0_, -1, 3);
        break;
    default:
        return;
    }
    func_ov031_02237e58();
    func_ov031_022274c0((int)func_ov031_02233154);
}
