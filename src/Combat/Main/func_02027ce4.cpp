#include <globaldefs.h>
#include "Resource/Script.h"
#include "World/GrottoTileGraph.h"

struct Struct_0201c1c8 { int unknown_0_; int unknown_4_; };

struct Struct_0201d530 { int unknown_0_; union { int unknown_0_; float unknown1_0_; } unknown_4_; };

struct Struct_02027d94;
extern "C" void func_02027d94(struct Struct_02027d94* arg0);

struct Struct_0201a300_10;
extern "C" void func_02028170(struct Struct_0201a300_10* arg0, struct Struct_0201a300_3* arg1);

struct Struct_02027ce4 {
    struct Struct_0201c1c8 unknown_0_;
    struct Struct_0201c1c8 unknown_8_;
    struct Struct_0201d530 unknown_10_;
    struct Struct_0201d530 unknown_18_;
    struct Struct_0201d530 unknown_20_;
};

extern struct Struct_0201a300_10* data_020fdd30;

// USA: func_02027ce4
extern "C" ARM int func_02027ce4(struct Struct_02027ce4* arg0) {
    struct Struct_0201a300_3 var0;
    func_02027d94((struct Struct_02027d94*)&var0);
    var0.unknown_0_ = (unsigned char)((Script::Parameter*)&arg0->unknown_0_)->ToInt();
    var0.unknown_1_ = (unsigned char)((Script::Parameter*)&arg0->unknown_8_)->ToInt();
    var0.unknown_4_ = (short)((int)(4096.0f * ((Script::Parameter*)&arg0->unknown_10_)->ToFloat()) >> 12);
    var0.unknown_6_ = (short)((int)(4096.0f * ((Script::Parameter*)&arg0->unknown_18_)->ToFloat()) >> 12);
    var0.unknown_8_ = (short)((int)(4096.0f * ((Script::Parameter*)&arg0->unknown_20_)->ToFloat()) >> 12);
    func_02028170(data_020fdd30, &var0);
    return 1;
}
