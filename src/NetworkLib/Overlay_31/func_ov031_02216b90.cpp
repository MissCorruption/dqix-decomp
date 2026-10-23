#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_ov031_02216b90 {
    char unknown_0_[0x1004];
    int unknown_1004_;
    char unknown_1008_[0x1c4];
    char unknown_11cc_[0x34];
    char unknown_1200_[0xc];
    int unknown_120c_;
    int unknown_1210_;
    char unknown_1214_[0x100];
    void* unknown_1314_;
};

struct Struct_ov031_0224e5e8_8 {
    char unknown_0_[8];
    Struct_ov031_02216b90* unknown_8_;
};

struct Struct_ov031_02249b54 {
    const char* unknown_0_;
    char unknown_4_[8];
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
};

struct Struct_02111304_6 {
    char unknown_0_[4];
    void* unknown_4_;
};

struct ProcessorContext;
int GetContextPriority(ProcessorContext*);
extern "C" int func_ov031_02217c00(void* arg0, Struct_ov031_02249b54* arg1);
extern "C" void func_ov031_0221ae00(void* arg0);
extern "C" int func_ov031_022173f4(void* arg0, void* arg1, void* arg2);
extern "C" int func_ov031_02217d1c(void* arg0);
extern "C" void func_ov031_02217db4(void* arg0, int arg1);

extern Struct_ov031_02249b54 data_ov031_02249b54;
extern Struct_ov031_02249b54 data_ov031_02249b54;
extern const char data_ov031_02249bb8[];
extern Struct_ov031_0224e5e8_8 data_ov031_0224e5e8;
extern int data_ov031_0224e5f4;
extern Struct_02111304_6 data_02111304;

// USA: func_ov031_02216b90
extern "C" ARM int func_ov031_02216b90(int arg0) {
    if (strcmp(data_ov031_02249b54.unknown_0_, data_ov031_02249bb8) != 0) {
        data_ov031_02249b54.unknown_14_ = 1;
    }
    data_ov031_02249b54.unknown_c_ = data_ov031_0224e5e8.unknown_8_->unknown_120c_;
    data_ov031_02249b54.unknown_10_ = data_ov031_0224e5e8.unknown_8_->unknown_1210_;
#if defined(jpn)
    if (func_ov031_02217c00(data_ov031_0224e5e8.unknown_8_->unknown_1314_, ((__typeof__(&data_ov031_02249b54))0x0224A754)) != 0) {
#else
    if (func_ov031_02217c00(data_ov031_0224e5e8.unknown_8_->unknown_1314_, ((__typeof__(&data_ov031_02249b54))0x02249B54)) != 0) {
#endif
        return 4;
    }
    if (arg0 == 1) {
        func_ov031_0221ae00(&data_ov031_0224e5f4);
    }
    data_ov031_0224e5e8.unknown_8_->unknown_1004_ = func_ov031_022173f4(data_ov031_0224e5e8.unknown_8_->unknown_1314_,
                                                          data_ov031_0224e5e8.unknown_8_->unknown_1200_,
                                                          data_ov031_0224e5e8.unknown_8_->unknown_11cc_);
    if (data_ov031_0224e5e8.unknown_8_->unknown_1004_ != 0) {
        return 4;
    }
    if (func_ov031_02217d1c(data_ov031_0224e5e8.unknown_8_->unknown_1314_) != 0) {
        return 4;
    }
    func_ov031_02217db4(data_ov031_0224e5e8.unknown_8_->unknown_1314_,
                        GetContextPriority((ProcessorContext*)data_02111304.unknown_4_) - 1);
    return 0;
}
