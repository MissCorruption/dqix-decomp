#include <globaldefs.h>

struct Struct_0203ce00;
struct Struct_020415c4;
struct Struct_02041654;

extern "C" int func_0203ce00(struct Struct_0203ce00* arg0);
extern "C" int func_020415c4(struct Struct_020415c4* arg0);
extern "C" int func_02041654(struct Struct_02041654* arg0);

struct Struct_02040a90 {
    char unknown_0_[0x14];
    struct Struct_0203ce00* unknown_14_;
    struct Struct_020415c4* unknown_18_;
    struct Struct_02041654* unknown_1c_;
};

// USA: func_02040a90
extern "C" ARM int func_02040a90(struct Struct_02040a90* arg0) {
    if (arg0->unknown_14_ != NULL) return func_0203ce00(arg0->unknown_14_);
    if (arg0->unknown_18_ != NULL) return func_020415c4(arg0->unknown_18_);
    if (arg0->unknown_1c_ != NULL) return func_02041654(arg0->unknown_1c_);
    return 0;
}
