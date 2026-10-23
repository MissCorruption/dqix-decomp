#if defined(jpn)
enum { Enum_0201f3b4_16 = 0xc };
#else
enum { Enum_0201f3b4_16 = 0x10 };
#endif

#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201c1c8 {
    int unknown_0_;
    union { int unknown_0_; float unknown1_0_; } unknown_4_;
};

struct Struct_0201d530 {
    int unknown_0_;
    union { int unknown_0_; float unknown1_0_; } unknown_4_;
};

struct Struct_0201f3b4;
extern "C" void func_02027b5c(struct Struct_0201f3b4* arg0, unsigned short arg1, unsigned char arg2, int arg3, int arg4);

extern "C" void func_02012fe4(void);

struct Struct_020fdc4c_2 {
    char unknown_0_[Enum_0201f3b4_16];
    void* unknown_10_;
};
extern struct Struct_020fdc4c_2 data_020fdc4c;

struct Struct_0201f3b4_2 {
    struct Struct_0201c1c8 unknown_0_;
    struct Struct_0201c1c8 unknown_8_;
    struct Struct_0201d530 unknown_10_;
    struct Struct_0201d530 unknown_18_;
};

// USA: func_0201f3b4
extern "C" ARM int func_0201f3b4(struct Struct_0201f3b4_2* arg0) {
    float var0;
    int var1 = ((Script::Parameter*)&arg0->unknown_0_)->ToInt();
    int var2 = ((Script::Parameter*)&arg0->unknown_8_)->ToInt();
    var0 = ((Script::Parameter*)&arg0->unknown_10_)->ToFloat();
    float var3 = ((Script::Parameter*)&arg0->unknown_18_)->ToFloat();
    func_02012fe4();
    if (var2 == 0) return 1;
    float var4;
    if (var3 > 0.0f) {
        var4 = 4096.0f * var3 + 0.5f;
    } else {
        var4 = 4096.0f * var3 - 0.5f;
    }
    float var5;
    if (var0 > 0.0f) {
        var5 = 4096.0f * var0 + 0.5f;
    } else {
        var5 = 4096.0f * var0 - 0.5f;
    }
    func_02027b5c((struct Struct_0201f3b4*)data_020fdc4c.unknown_10_, (unsigned short)(var1 / 100), (unsigned char)var2, (int)var5, (int)var4);
    return 1;
}
