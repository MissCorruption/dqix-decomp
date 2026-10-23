#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"
#include "Resource/Script.h"

struct Struct_ov000_02184264_2 {
    unsigned char unknown_0_[8];
    SafeAllocator* unknown_8_;
};
extern struct Struct_ov000_02184264_2 data_ov000_02184264;

extern "C" void __clear(void* arg0, int arg1);
extern "C" void func_ov000_02169b78(void*);

struct Struct_0201c1c8 { int unknown_0_; int unknown_4_; };

struct Struct_0201c3a4;

struct Struct_020341e0 { signed short unknown_0_, unknown_2_, unknown_4_; };
struct Vector3s;
void Vector3fix16Copy(Vector3s*, Vector3s const*);

struct Struct_ov000_0216b478 {
    int unknown_0_;
    int unknown_4_;
    void* unknown_8_;
    unsigned char unknown_c_;
    unsigned char unknown_d_;
    unsigned short unknown_e_;
    unsigned char unknown_10_;
    unsigned char unknown_11_;
    struct Struct_020341e0 unknown_12_;
    unsigned short unknown_18_;
    unsigned char unknown_1a_;
};

// USA: func_ov000_0216b478
extern "C" ARM int func_ov000_0216b478(struct Struct_0201c1c8* arg0, int arg1) {
    struct Struct_ov000_0216b478* var0 = (struct Struct_ov000_0216b478*)data_ov000_02184264.unknown_8_->Allocate(sizeof(struct Struct_ov000_0216b478));

    struct Struct_020341e0 var1;
    int var2;
    char* var3 = 0;
    int var4 = 1;
    __clear(&var1, 6);

    int var5 = ((Script::Parameter*)arg0)->ToInt();
    var2 = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 8)))->ToInt() - 0x1a;

    char* var6 = (char*)(void*)((Script::Parameter*)((struct Struct_0201c3a4*)((char*)arg0 + 0x10)))->ToString();
    if (var6 != 0) {
        var3 = (char*)data_ov000_02184264.unknown_8_->Allocate(strlen(var6) + 1);
        strcpy(var3, var6);
    }

    if (arg1 >= 4) {
        var4 = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 0x18)))->ToInt();
    }

    var0->unknown_0_ = 0;
    var0->unknown_4_ = 0;
    var0->unknown_0_ = 0x15;
    var0->unknown_e_ = (unsigned short)var5;
    var0->unknown_d_ = (unsigned char)var2;
    var0->unknown_8_ = var3;
    var0->unknown_c_ = (unsigned char)var4;
    var0->unknown_18_ = 0;
    var0->unknown_10_ = 0;
    Vector3fix16Copy((Vector3s*)&var0->unknown_12_, (Vector3s const*)&var1);
    var0->unknown_1a_ = 1;
    func_ov000_02169b78(var0);
    return 1;
}
