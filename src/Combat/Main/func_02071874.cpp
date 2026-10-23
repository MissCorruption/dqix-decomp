#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201c1c8 {
    int unknown_0_;
    int unknown_4_;
};

struct Struct_02071cc8;
struct Struct_02071874;
extern "C" void func_02071cc8(struct Struct_02071cc8*, struct Struct_02071874*);

struct Struct_02071874_2 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 8;
    unsigned int unknown_3_4_ : 4;
};

struct Struct_02071874_3 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 1;
    unsigned int unknown_2_5_ : 1;
    unsigned int unknown_2_6_ : 1;
    unsigned int unknown_2_7_ : 8;
    unsigned int unknown_3_7_ : 1;
};

struct Struct_02071874_4 {
    unsigned short unknown_0_0_ : 4;
    unsigned short unknown_0_4_ : 4;
    unsigned short unknown_1_0_ : 4;
    unsigned short unknown_1_4_ : 4;
};

struct Struct_02071874_5 {
    short unknown_0_;
    short unknown_2_;
    short unknown_4_;
    short unknown_6_;
    short unknown_8_;
    Struct_02071874_4 unknown_a_;
    Struct_02071874_2 unknown_c_;
    Struct_02071874_3 unknown_10_;
    short unknown_14_;
    short unknown_16_;
    short unknown_18_;
    short unknown_1a_;
    int unknown_1c_;
};
extern "C" void func_02071b38(struct Struct_02071874_5* arg0);

struct Struct_02108d98 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    short* unknown_4_;
    int unknown_8_;
    struct Struct_02071cc8* unknown_c_;
};
extern struct Struct_02108d98 data_02108d98;

// USA: func_02071874
extern "C" ARM int func_02071874(struct Struct_0201c1c8* arg0) {
    struct Struct_02071874_5 var0;
    short var1 = (short)((Script::Parameter*)(arg0++))->ToInt();

    if (data_02108d98.unknown_4_ != 0) {
        int var2 = 0;
        unsigned short var3;
        for (var3 = 0; var3 < data_02108d98.unknown_0_; var3++) {
            if (data_02108d98.unknown_4_[var3] == var1) {
                var2 = 1;
                break;
            }
        }
        if (!var2) {
            return 1;
        }
    }

    func_02071b38(&var0);
    var0.unknown_0_ = var1;
    var0.unknown_2_ = (short)((Script::Parameter*)(arg0++))->ToInt();
    if (arg0->unknown_0_ != 0) {
        var0.unknown_4_ = (short)((Script::Parameter*)(arg0++))->ToInt();
    } else {
        var0.unknown_4_ = 0;
        arg0++;
    }
    var0.unknown_a_.unknown_0_0_ = (unsigned short)((Script::Parameter*)(arg0++))->ToInt();
    if (arg0->unknown_0_ != 0) {
        var0.unknown_6_ = (short)((Script::Parameter*)(arg0++))->ToInt();
    } else {
        var0.unknown_6_ = 0;
        arg0++;
    }
    var0.unknown_a_.unknown_0_4_ = (unsigned short)((Script::Parameter*)(arg0++))->ToInt();
    if (arg0->unknown_0_ != 0) {
        var0.unknown_8_ = (short)((Script::Parameter*)(arg0++))->ToInt();
    } else {
        var0.unknown_8_ = 0;
        arg0++;
    }
    var0.unknown_a_.unknown_1_0_ = (unsigned short)((Script::Parameter*)(arg0++))->ToInt();
    var0.unknown_a_.unknown_1_4_ = (unsigned short)((Script::Parameter*)(arg0++))->ToInt();
    var0.unknown_c_.unknown_0_0_ = ((Script::Parameter*)(arg0++))->ToInt();
    var0.unknown_c_.unknown_1_2_ = ((Script::Parameter*)(arg0++))->ToInt();
    var0.unknown_10_.unknown_0_0_ = ((Script::Parameter*)(arg0++))->ToInt();
    var0.unknown_10_.unknown_1_2_ = ((Script::Parameter*)(arg0++))->ToInt();
    var0.unknown_10_.unknown_2_4_ = ((Script::Parameter*)(arg0++))->ToInt();
    var0.unknown_c_.unknown_2_4_ = ((Script::Parameter*)(arg0++))->ToInt();
    var0.unknown_10_.unknown_2_7_ = ((Script::Parameter*)(arg0++))->ToInt();
    var0.unknown_14_ = (short)((Script::Parameter*)(arg0++))->ToInt();
    var0.unknown_16_ = (short)((Script::Parameter*)(arg0++))->ToInt();
    var0.unknown_18_ = (short)((Script::Parameter*)(arg0++))->ToInt();
    var0.unknown_1a_ = (short)((Script::Parameter*)(arg0++))->ToInt();

    func_02071cc8(data_02108d98.unknown_c_, (struct Struct_02071874*)&var0);
    return 1;
}
