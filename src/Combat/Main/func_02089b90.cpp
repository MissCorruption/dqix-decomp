#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"
#include "Resource/Script.h"

struct Struct_02089b90_2 {
    unsigned short unknown_0_[10];
};

struct Struct_02089b90_3 {
    unsigned char unknown_0_[13];
};

struct Struct_02089b90_4 {
    signed char unknown_0_;
    int unknown_4_;
    unsigned char unknown_8_;
    short unknown_a_;
    int unknown_c_;
    unsigned char unknown_10_;
    unsigned char unknown_11_;
    unsigned char unknown_12_;
    float unknown_14_;
    float unknown_18_;
    struct Struct_02089b90_2 unknown_1c_;
    struct Struct_02089b90_3 unknown_30_;
    unsigned char unknown_3d_;
    unsigned char unknown_3e_;
    unsigned char unknown_3f_;
};

struct Struct_02089b90_5 {
    struct Struct_02089b90_4* unknown_0_;
    short unknown_4_;
    short unknown_6_;
    short unknown_8_;
};

extern "C" void func_02089edc(struct Struct_02089b90_5* arg0, struct Struct_02089b90_4* arg1);

struct Struct_02108efc_4 {
    struct Struct_02089b90_5* unknown_0_;
    int unknown_4_;
    int unknown_8_;
    SafeAllocator* unknown_c_;
};
extern struct Struct_02108efc_4 data_02108efc;

extern int data_020e8c58[5][5][2];
extern int data_020e8c5c[5][5][2];

struct Struct_02089b90 {
    int unknown_0_;
    void* unknown_4_;
};

extern "C" int func_020d2ff0(const char* arg0);
extern "C" float _fflt(int v);
extern "C" float _fdiv(float arg0, float arg1);

// USA: func_02089b90
extern "C" ARM int func_02089b90(struct Struct_02089b90* arg0) {
    struct Struct_02089b90_4 var0;
    char* var1;
    int var2;
    int var3;
    struct Struct_02089b90* var4;
    var0.unknown_0_ = -1;
    var0.unknown_4_ = 0;
    var0.unknown_8_ = 0;
    var0.unknown_a_ = 0;
    var0.unknown_c_ = 0;
    var0.unknown_10_ = 0;
    var0.unknown_11_ = 0;
    var0.unknown_12_ = 0;
    var0.unknown_14_ = 1.0f;
    var0.unknown_18_ = 1.0f;
    memset(&var0.unknown_1c_, -1, sizeof(var0.unknown_1c_));
    memset(&var0.unknown_30_, -1, sizeof(var0.unknown_30_));
    var0.unknown_3d_ = 0;
    var0.unknown_3e_ = 0;
    var0.unknown_3f_ = 0;
    if (data_02108efc.unknown_0_->unknown_8_ == 1) {
        var0.unknown_0_ = (signed char)((Script::Parameter*)&arg0[0])->ToInt();
        var1 = (char*)(void*)((Script::Parameter*)&arg0[1])->ToString();
        if (var1 != 0) {
            int var5 = func_020d2ff0(var1);
            var0.unknown_4_ = (int)data_02108efc.unknown_c_->Allocate(var5 + 1);
            memset((void*)var0.unknown_4_, 0, var5 + 1);
            memcpy((void*)var0.unknown_4_, var1, var5);
        }
        var0.unknown_8_ = (unsigned char)((Script::Parameter*)&arg0[2])->ToInt();
        var0.unknown_a_ = (short)((Script::Parameter*)&arg0[3])->ToInt();
        var0.unknown_c_ = ((Script::Parameter*)&arg0[4])->ToInt();
        var0.unknown_10_ = (unsigned char)((Script::Parameter*)&arg0[5])->ToInt();
        var0.unknown_11_ = (unsigned char)((Script::Parameter*)&arg0[6])->ToInt();
        var0.unknown_12_ = (unsigned char)((Script::Parameter*)&arg0[7])->ToInt();
        var4 = arg0;
        arg0 += 9;
        var3 = ((Script::Parameter*)&var4[8])->ToInt();
        if (var3 >= 0 && var3 <= 5) {
            var0.unknown_14_ = _fdiv(_fflt(data_020e8c58[var0.unknown_8_][var3][0]), 4096.0f);
            var0.unknown_18_ = _fdiv(_fflt(data_020e8c5c[var0.unknown_8_][var3][0]), 4096.0f);
        }
        for (var2 = 0; var2 < 10; var2++) {
            var0.unknown_1c_.unknown_0_[var2] = (short)((Script::Parameter*)arg0)->ToInt();
            arg0++;
        }
        for (var2 = 0; var2 < 13; var2++) {
            var0.unknown_30_.unknown_0_[var2] = (unsigned char)((Script::Parameter*)arg0)->ToInt();
            arg0++;
        }
        var0.unknown_3d_ = (unsigned char)((Script::Parameter*)&arg0[0])->ToInt();
        var0.unknown_3e_ = (unsigned char)((Script::Parameter*)&arg0[1])->ToInt();
        var0.unknown_3f_ = (unsigned char)((Script::Parameter*)&arg0[2])->ToInt();
    }
    func_02089edc(data_02108efc.unknown_0_, &var0);
    return 1;
}
