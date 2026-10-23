#include <globaldefs.h>
#include "Resource/Script.h"
#include "Memory/SafeAllocator.h"

struct Struct_ov016_0218de60_2 {
    short unknown_0_;
    short unknown_2_;
    char* unknown_4_;
    char* unknown_8_;
    char* unknown_c_;
#if !defined(jpn)
    bool unknown_10_;
    bool unknown_11_;
#endif
    short unknown_12_;
    int unknown_14_;
    Struct_ov016_0218de60_2* unknown_18_;
};
struct Struct_ov016_0218de60 {
    Struct_ov016_0218de60_2* unknown_0_;
    unsigned int unknown_4_;
    SafeAllocator* unknown_8_;
};
extern Struct_ov016_0218de60* data_ov016_0219d1bc;
extern "C" void func_ov016_0218e020(Struct_ov016_0218de60*, void*);

// USA: func_ov016_0218de60
extern "C" ARM int func_ov016_0218de60(Script::Parameter* arg0, int arg1) {
    SafeAllocator* var0 = data_ov016_0219d1bc->unknown_8_;
    Struct_ov016_0218de60_2 var1;
    memset(&var1, 0, sizeof(var1));
    var1.unknown_0_ = arg0[0].ToInt();
    var1.unknown_2_ = arg0[1].ToInt();
    const char* var2 = arg0[2].ToString();
    if (var2) {
        var1.unknown_4_ = (char*)var0->Allocate(strlen(var2) + 1);
        if (var1.unknown_4_) strcpy(var1.unknown_4_, var2);
    }
    var2 = arg0[3].ToString();
    if (var2 && strlen(var2)) {
        var1.unknown_8_ = (char*)var0->Allocate(strlen(var2) + 1);
        if (var1.unknown_8_) strcpy(var1.unknown_8_, var2);
    }
    var2 = arg0[4].ToString();
    if (var2 && strlen(var2)) {
        var1.unknown_c_ = (char*)var0->Allocate(strlen(var2) + 1);
        if (var1.unknown_c_) strcpy(var1.unknown_c_, var2);
    }
    var1.unknown_12_ = arg0[5].ToInt();
    arg0 += 6;
    var1.unknown_14_ = (arg0++)->ToInt();
#if !defined(jpn)
    arg1 -= 7;
    if (arg1 > 0) {
        var1.unknown_10_ = (arg0++)->ToInt() != 0;
        --arg1;
    } else {
        var1.unknown_10_ = true;
    }
    if (arg1 > 0) var1.unknown_11_ = arg0->ToInt() != 0;
    else var1.unknown_11_ = false;
#endif
    func_ov016_0218e020(data_ov016_0219d1bc, &var1);
    return 1;
}
