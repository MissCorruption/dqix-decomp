#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201c1c8 { int unknown_0_; union { int unknown_0_; float unknown1_0_; } unknown_4_; };

struct Struct_0201d530 { int unknown_0_; union { int unknown_0_; float unknown1_0_; } unknown_4_; };

struct Struct_02073ec4_2;
struct Struct_0209ba70 { unsigned short unknown_0_; short unknown_2_; };
extern "C" void func_0209be44(struct Struct_02073ec4_2* arg0, int arg1, struct Struct_0209ba70* arg2);

struct Struct_0209ba2c {
    struct Struct_02073ec4_2* unknown_0_;
    unsigned char unknown_4_[0x10];
    int unknown_14_;
    int unknown_18_;
};
extern struct Struct_0209ba2c* data_02109bb0;

struct Struct_0209ba70_2 {
    struct Struct_0201c1c8 unknown_0_;
    struct Struct_0201c1c8 unknown_8_;
};

// USA: func_0209ba70
extern "C" ARM int func_0209ba70(struct Struct_0209ba70_2* arg0) {
    struct Struct_0209ba70 var0;
    if (data_02109bb0->unknown_14_ == 0) {
        return 1;
    }
    *(int*)&var0 = ((Script::Parameter*)&arg0->unknown_0_)->ToInt();
    if (arg0->unknown_8_.unknown_0_ == 2) {
        var0.unknown_2_ = (short)(int)(((Script::Parameter*)((struct Struct_0201d530*)&arg0->unknown_8_))->ToFloat() * 4096.0f);
    } else if (arg0->unknown_8_.unknown_0_ == 1) {
        var0.unknown_2_ = (short)(((Script::Parameter*)&arg0->unknown_8_)->ToInt() << 12);
    }
    if (var0.unknown_2_ == 0) {
        var0.unknown_2_ = 0x1000;
    }
    func_0209be44(data_02109bb0->unknown_0_, data_02109bb0->unknown_18_, &var0);
    return 1;
}
