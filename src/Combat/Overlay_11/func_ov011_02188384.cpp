#include <globaldefs.h>

struct Struct_ov011_02184c30 {
    int unknown_0_;
    union { int unknown_0_; float unknown1_0_; } unknown_4_;
};

extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);
extern "C" int func_ov023_021f6eb8(void* arg0, int arg1);
extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" void* func_ov017_021b2164(void);

// USA: func_ov011_02188384
extern "C" ARM int func_ov011_02188384(struct Struct_ov011_02184c30* arg0, int arg1) {
    int var0 = func_ov011_02184c30(&arg0[0]);
    func_ov023_021f6eb8(func_ov011_021849c8(func_ov017_021b2164()), var0);
    return 1;
}
