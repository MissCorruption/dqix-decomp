#if defined(jpn)
enum { Enum_02078050_1058 = 0x442 };
#else
enum { Enum_02078050_1058 = 0x422 };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov009_0218aa28 { int unknown_0_; int unknown_4_; int unknown_8_; };

extern "C" void* func_0202ae18(void* arg0);

struct Struct_02033f44;
extern "C" int* func_02033f44(struct Struct_02033f44* arg0);

extern "C" void func_02076ccc(void* arg0, int arg1);

extern "C" int func_0202b7d8(int*);

extern "C" void func_020794f8(void* arg0, int arg1, int arg2);

struct Struct_02033b68;
extern "C" void func_02033b68(struct Struct_02033b68* arg0, int arg1);

struct Struct_02033834_2;
extern "C" void func_02033834(struct Struct_02033834_2* arg0, int arg1);

extern "C" int func_0202c540(void* arg0);

extern "C" void* func_02012fe4(void);

struct Struct_02039df4;

extern "C" int func_02018fbc(int arg0, void* arg1);

struct Vector3i;

struct Struct_0202c1a4;
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4* arg0);

struct Struct_02078050_2 {
    unsigned short unknown_0_;
    unsigned char unknown_2_[Enum_02078050_1058];
    int unknown_424_;
};

struct Struct_02078050 {
    char unknown_0_[0x44];
    struct Struct_ov009_0218aa28 unknown_44_;
    char unknown_50_[0x62];
    unsigned short unknown_b2_;
    unsigned short unknown_b4_;
    char unknown_b6_[0x9e];
    int unknown_154_;
    struct Struct_ov009_0218aa28 unknown_158_;
};

// USA: func_02078050
extern "C" ARM void func_02078050(struct Struct_02078050* arg0) {
    void* var0 = func_0202ae18(arg0);

    if (func_02033f44((struct Struct_02033f44*)arg0) != 0) {
        func_02076ccc(arg0, 1);
        arg0->unknown_154_ = 0;
        if (func_0202b7d8((int*)var0) == 0) {
            return;
        }
        func_020794f8(arg0, 0, 0);
        return;
    }

    arg0->unknown_b4_ = 0x1c2;
    arg0->unknown_b2_ = 0x1c2;
    func_02033b68((struct Struct_02033b68*)arg0, 1);

    struct Struct_ov009_0218aa28 var1 = arg0->unknown_44_;
    var1.unknown_4_ = 0;
    struct Struct_ov009_0218aa28 var2 = arg0->unknown_158_;
    var2.unknown_4_ = 0;
    struct Struct_ov009_0218aa28 var3;
    int var4;

    var4 = Vector3fix_Distance((const Vector3fix*)&var1, (const Vector3fix*)&var2);
    Vector3fix_Subtract((const Vector3fix*)&var2, (const Vector3fix*)&var1, (Vector3fix*)&var3);
    Vector3fix_Normalize((const Vector3fix*)&var3, (Vector3fix*)&var3);
    func_02033834((struct Struct_02033834_2*)arg0, fix32_Atan2(var3.unknown_0_, var3.unknown_8_));

    if (func_0202c540(var0) != 0) {
        return;
    }

    if (var4 >= 0x1800) {
        return;
    }

    struct Struct_02078050_2* var5 = (struct Struct_02078050_2*)func_02012fe4();
    struct Struct_ov009_0218aa28 var6 = arg0->unknown_44_;
    unsigned short var7 = var5->unknown_0_;

    if (var7 == ((Object3D*)((struct Struct_02039df4*)arg0))->GetField06() && var5->unknown_424_ == 0) {
        var6.unknown_4_ = func_02018fbc((int)var5, &var6);
        *(Vector3i*)((int*)&arg0->unknown_44_) = *(Vector3i const*)((int*)&var6);
    }

    func_02076ccc(arg0, 1);
    arg0->unknown_154_ = 0;
    if (func_0202b7d8((int*)var0) == 0) {
        return;
    }
    if (func_0202c1a4((struct Struct_0202c1a4*)var0) != 0) {
        return;
    }
    func_020794f8(arg0, 0, 0);
}
