#include <globaldefs.h>



class Struct_ov003_021537d4 { public: virtual void inline_ov003_021537d4(); };
typedef void (Struct_ov003_021537d4::*Type_020e6d5c)();

struct Struct_020e6d5c_12 { unsigned int unknown_0_; unsigned int unknown_4_; };

extern int data_ov003_02180ca0;
extern struct Struct_020e6d5c_12 data_020e6d5c;
extern struct Struct_020e6d5c_12 data_ov003_0217fc80[];
extern struct Struct_020e6d5c_12 data_ov003_0217fc80_tbl[];

union Struct_ov003_021537d4_2 { struct Struct_020e6d5c_12* unknown_0_; Type_020e6d5c* unknown1_0_; };

// USA: func_ov003_021537d4
extern "C" ARM int func_ov003_021537d4(Struct_ov003_021537d4* arg0) {
    if (!(data_ov003_02180ca0 & 1)) {
        *(unsigned long long*)((char*)data_ov003_0217fc80 + 0x18) = *(const unsigned long long*)&data_020e6d5c;
        data_ov003_02180ca0 |= 1;
    }
    unsigned char var0 = *((unsigned char*)arg0 + 0x5a);
    struct Struct_020e6d5c_12* var1 = data_ov003_0217fc80_tbl;
    if (var1[var0].unknown_0_ == 0) {
        return 1;
    }
    union Struct_ov003_021537d4_2 var2;
    var2.unknown_0_ = &var1[var0];
    (arg0->*(*var2.unknown1_0_))();
    return 0;
}
