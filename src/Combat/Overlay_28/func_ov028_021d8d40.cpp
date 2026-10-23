#include <globaldefs.h>

class Struct_ov001_02155d54 { public: virtual void inline_ov001_02155d54(); };
typedef void (Struct_ov001_02155d54::*Type_020e6d5c_2)(unsigned short);

struct Struct_020e6d5c_11 { unsigned int unknown_0_; unsigned int unknown_4_; };
struct Struct_ov028_021d9a34 { struct Struct_020e6d5c_11 unknown_0_[4]; };
extern struct Struct_ov028_021d9a34 data_ov028_021d9a34;
extern struct Struct_020e6d5c_11 data_020e6d5c;

union Struct_ov028_021d8d40 { struct Struct_020e6d5c_11* unknown_0_; Type_020e6d5c_2* unknown1_0_; };

// USA: func_ov028_021d8d40
extern "C" ARM int func_ov028_021d8d40(Struct_ov001_02155d54* arg0, unsigned short arg1) {
    struct Struct_ov028_021d9a34 var0 = data_ov028_021d9a34;
    var0.unknown_0_[3].unknown_4_ = data_020e6d5c.unknown_4_;
    var0.unknown_0_[3].unknown_0_ = data_020e6d5c.unknown_0_;
    unsigned char var1 = *(unsigned char*)((char*)arg0 + 0x80);
    if (var0.unknown_0_[var1].unknown_0_ == 0) {
        return 1;
    }
    union Struct_ov028_021d8d40 var2;
    var2.unknown_0_ = &var0.unknown_0_[var1];
    (arg0->*(*var2.unknown1_0_))(arg1);
    return 0;
}
