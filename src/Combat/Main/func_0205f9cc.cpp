#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct Struct_0201c1c8 {
    int unknown_0_;
    union {
        int unknown_0_;
        float unknown1_0_;
    } unknown_4_;
};

struct Struct_0205ec40 {
    unsigned short unknown_0_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    unsigned char unknown_6_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
};

extern "C" void func_0205ec40(struct Struct_0205ec40* arg0);
extern "C" void func_0205ec70(SafeAllocator* arg0, int arg1, struct Struct_0201c1c8* arg2, void* arg3, void* arg4);
struct Struct_0205f9cc;
extern "C" void func_020643fc(void* arg0, struct Struct_0205f9cc* arg1);

extern char data_02108844;

// USA: func_0205f9cc
extern "C" ARM int func_0205f9cc(struct Struct_0201c1c8* arg0, int arg1) {
    int var0 = ((Script::Parameter*)&arg0[0])->ToInt();
    if (var0 != *(int*)(&data_02108844 + 0x484)) {
        return 0;
    }

    int var1 = ((Script::Parameter*)&arg0[1])->ToInt();
    int var2 = ((Script::Parameter*)&arg0[2])->ToInt();
    int var3 = ((Script::Parameter*)&arg0[3])->ToInt();
    int var4 = ((Script::Parameter*)&arg0[4])->ToInt();

    int var5 = *(int*)(&data_02108844 + 0x488);
    int var6 = var1 * 1000 + var2;
    int var7 = var3 * 1000 + var4;
    var5 = var5 * 1000 + *(int*)(&data_02108844 + 0x48c);
    if (var5 < var6 || var7 < var5) {
        return 0;
    }

    SafeAllocator* var8 = *(SafeAllocator**)(&data_02108844 + 0x480);
    struct Struct_0205ec40* var9 = (struct Struct_0205ec40*)var8->Allocate(0x18);
    if (var9 == NULL) {
        return 1;
    }

    func_0205ec40(var9);
    var9->unknown_0_ = var0;
    var9->unknown_2_ = var1;
    var9->unknown_3_ = var3;
    var9->unknown_4_ = var2;
    var9->unknown_5_ = var4;
    var9->unknown_6_ = ((Script::Parameter*)&arg0[5])->ToInt();

    func_0205ec70(var8, arg1 - 6, &arg0[6], &var9->unknown_8_, &var9->unknown_c_);

    func_020643fc(&data_02108844, (struct Struct_0205f9cc*)var9);
    return 1;
}
