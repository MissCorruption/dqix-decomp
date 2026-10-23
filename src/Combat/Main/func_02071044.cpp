#include <globaldefs.h>
#include "std_library_functions.h"
#include "Resource/Script.h"

struct Struct_0201c1c8 {
    int unknown_0_;
    union { int unknown_0_; float unknown1_0_; } unknown_4_;
};

struct Struct_0201c3a4 {
    int unknown_0_;
    void* unknown_4_;
};

extern "C" int func_020d2ff0(const char* arg0);

struct Struct_02071044 {
    struct Struct_0201c1c8 unknown_0_;
    struct Struct_0201c1c8 unknown_8_;
    struct Struct_0201c1c8 unknown_10_;
    struct Struct_0201c1c8 unknown_18_;
    struct Struct_0201c1c8 unknown_20_;
    struct Struct_0201c1c8 unknown_28_;
    struct Struct_0201c1c8 unknown_30_;
    struct Struct_0201c3a4 unknown_38_;
};

struct Struct_02071044_2 {
    int unknown_0_;
    char unknown_4_[0x1e];
    char unknown_22_;
    char unknown_23_;
};

struct Struct_02108d70_2 {
    unsigned char unknown_0_;
    char unknown_1_[7];
    struct Struct_02071044_2* unknown_8_;
    char unknown_c_[4];
    int unknown_10_;
    char unknown_14_[8];
    int unknown_1c_;
    char unknown_20_[4];
    int unknown_24_;
};
extern struct Struct_02108d70_2 data_02108d70;

// USA: func_02071044
extern "C" ARM int func_02071044(struct Struct_02071044* arg0) {
    int var0;
    int var1;
    int var2;
    void* var3;
    int var4;

    if (data_02108d70.unknown_10_ <= data_02108d70.unknown_24_) {
        return 0;
    }

    var0 = ((Script::Parameter*)&arg0->unknown_0_)->ToInt();
    ((Script::Parameter*)&arg0->unknown_8_)->ToInt();

    if (var0 == data_02108d70.unknown_1c_ || data_02108d70.unknown_0_ != 0) {
        ((Script::Parameter*)&arg0->unknown_10_)->ToInt();
        ((Script::Parameter*)&arg0->unknown_18_)->ToInt();
        ((Script::Parameter*)&arg0->unknown_20_)->ToInt();
        var1 = ((Script::Parameter*)&arg0->unknown_28_)->ToInt();

        for (var2 = 0; var2 < data_02108d70.unknown_24_; var2++) {
            if (data_02108d70.unknown_8_[var2].unknown_0_ == var1) {
                if (var1 < 0x5208 || var1 >= 0x9c40) {
                    return 0;
                }
            }
        }

        data_02108d70.unknown_8_[data_02108d70.unknown_24_].unknown_0_ = var1;

        ((Script::Parameter*)&arg0->unknown_30_)->ToInt();
        var3 = (void*)((Script::Parameter*)&arg0->unknown_38_)->ToString();
        if (!var3) {
            return 0;
        }

        memset(data_02108d70.unknown_8_[data_02108d70.unknown_24_].unknown_4_, 0, 0x20);

        var4 = func_020d2ff0((const char*)var3);
        if (var4 < 0x1f) {
            memcpy(data_02108d70.unknown_8_[data_02108d70.unknown_24_].unknown_4_, var3, var4);
        } else {
            memcpy(data_02108d70.unknown_8_[data_02108d70.unknown_24_].unknown_4_, var3, 0x1e);
            data_02108d70.unknown_8_[data_02108d70.unknown_24_].unknown_22_ = 0;
        }

        data_02108d70.unknown_8_[data_02108d70.unknown_24_].unknown_23_ = 0;
        data_02108d70.unknown_24_++;
    }

    return 1;
}
