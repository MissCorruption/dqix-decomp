#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201c1c8;

extern "C" void* func_0207f700(unsigned char* arg0, short arg1);

struct Struct_02108ee0 { void* unknown_0_; void* unknown_4_; };
extern struct Struct_02108ee0 data_02108ee0;

struct Struct_0207f12c {
    void* unknown_0_;
    short unknown_4_;
};

struct Struct_0207f4a8 {
    char unknown_0_[0x18];
    short unknown_18_;
    char unknown_1a_[2];
    short unknown_1c_;
    char unknown_1e_[2];
    short unknown_20_;
    char unknown_22_[2];
    short unknown_24_;
};

// USA: func_0207f4a8
extern "C" ARM int func_0207f4a8(struct Struct_0201c1c8* arg0) {
    struct Struct_0207f12c* var0 = (struct Struct_0207f12c*)data_02108ee0.unknown_4_;
    struct Struct_0207f4a8* var1 = (struct Struct_0207f4a8*)func_0207f700((unsigned char*)var0, (short)(var0->unknown_4_ - 1));
    if (var1 != NULL) {
        var1->unknown_18_ = ((Script::Parameter*)arg0)->ToInt();
        var1->unknown_1c_ = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 8)))->ToInt();
        var1->unknown_20_ = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 0x10)))->ToInt();
        var1->unknown_24_ = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 0x18)))->ToInt();
    }
    return 1;
}
