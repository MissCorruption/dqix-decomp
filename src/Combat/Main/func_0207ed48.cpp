#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"
struct Struct_0207ed48 {
    void* unknown_0_;
    void* unknown_4_;
    short unknown_8_;
    short unknown_a_;
    short unknown_c_;
    short unknown_e_;
    short unknown_10_;
    unsigned char unknown_12_0_:4;
    unsigned char unknown_12_4_:4;
    unsigned char unknown_13_, unknown_14_, unknown_15_;
};
struct Struct_0207f018;
struct Struct_02108ed8 { SafeAllocator* unknown_0_; Struct_0207f018* unknown_4_; };
extern Struct_02108ed8 data_02108ed8;
extern "C" void func_0207f018(Struct_0207f018*, Struct_0207ed48*);
// USA: func_0207ed48
extern "C" ARM int func_0207ed48(Script::Parameter* arg0) {
    Struct_0207ed48 var0;
    var0.unknown_0_ = 0;
    var0.unknown_4_ = 0;
    var0.unknown_8_ = -1;
    var0.unknown_c_ = 0;
    var0.unknown_a_ = 0;
    var0.unknown_10_ = 0;
    var0.unknown_e_ = 0;
    var0.unknown_12_0_ = 0;
    var0.unknown_12_4_ = 0;
    var0.unknown_13_ = 0;
    var0.unknown_14_ = 0;
    var0.unknown_15_ = 0;
    var0.unknown_8_ = arg0[0].ToInt();
    var0.unknown_a_ = arg0[1].ToInt();
    var0.unknown_c_ = arg0[2].ToInt();
    var0.unknown_e_ = arg0[3].ToInt();
    var0.unknown_10_ = arg0[4].ToInt();
    var0.unknown_12_0_ = arg0[5].ToInt();
    var0.unknown_12_4_ = (unsigned char)arg0[6].ToInt() == 0;
    var0.unknown_13_ = arg0[7].ToInt();
    var0.unknown_14_ = arg0[8].ToInt();
    if (var0.unknown_13_) var0.unknown_0_ = data_02108ed8.unknown_0_->Allocate(var0.unknown_13_ * 4);
    if (var0.unknown_14_) var0.unknown_4_ = data_02108ed8.unknown_0_->Allocate(var0.unknown_14_ * 4);
    func_0207f018(data_02108ed8.unknown_4_, &var0);
    return 1;
}
