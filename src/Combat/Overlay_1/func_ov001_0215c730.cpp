#include <globaldefs.h>

extern "C" int func_ov017_021d60f4(void*);

struct Struct_ov001_02165880_11 { void* unknown_0_; char* unknown_4_; };
extern Struct_ov001_02165880_11 data_ov001_02165880;

struct Struct_02040668;
struct Struct_020406b0;
extern "C" void func_02040668(struct Struct_02040668*);
extern "C" void func_020406b0(struct Struct_020406b0*);

struct Struct_ov001_0215c730 { int unknown_0_; char unknown_4_[8]; void* unknown_c_; };

// USA: func_ov001_0215c730
extern "C" ARM int func_ov001_0215c730(void* arg0) {
    int var0 = func_ov017_021d60f4(arg0);
    int var1 = func_ov017_021d60f4((char*)arg0 + 0x8);
    Struct_ov001_0215c730* var2 = (Struct_ov001_0215c730*)data_ov001_02165880.unknown_4_;
    if (var2[var0].unknown_0_ != 2) return 1;
    if (var1 != 0) {
        func_02040668((struct Struct_02040668*)var2[var0].unknown_c_);
    } else {
        func_020406b0((struct Struct_020406b0*)var2[var0].unknown_c_);
    }
    return 1;
}
