#include <globaldefs.h>
#include <Resource/Script.h>
#include <Memory/SafeAllocator.h>
struct Struct_0201ecd4 {
    unsigned short unknown_0_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    char* unknown_4_;
    Struct_0201ecd4* unknown_8_;
};
struct Struct_020fdc40_3 { Struct_0201ecd4* unknown_0_; SafeAllocator* unknown_4_; int unknown_8_; };
extern Struct_020fdc40_3 data_020fdc40;
// USA: func_0201ecd4
extern "C" ARM int func_0201ecd4(Script::Parameter* arg0, int arg1) {
    if (!data_020fdc40.unknown_0_) return 0;
    Struct_0201ecd4* var0 = (Struct_0201ecd4*)data_020fdc40.unknown_4_->Allocate(12);
    var0->unknown_0_ = arg0->ToInt();
    arg0++;
    const char* var1 = (arg0++)->ToString();
    if (!var1) return 0;
    var0->unknown_4_ = (char*)data_020fdc40.unknown_4_->Allocate(strlen(var1) + 1);
    strcpy(var0->unknown_4_, var1);
    var0->unknown_2_ = 0;
    if (arg1 >= 3) {
        var0->unknown_2_ = arg0->ToInt();
        var0->unknown_2_ &= 31;
        arg0++;
    }
    var0->unknown_3_ = 0;
    if (arg1 >= 4) var0->unknown_3_ = arg0->ToInt();
    var0->unknown_8_ = 0;
    Struct_0201ecd4* var2 = data_020fdc40.unknown_0_;
    while (var2->unknown_8_) var2 = var2->unknown_8_;
    var2->unknown_8_ = var0;
    return 1;
}
