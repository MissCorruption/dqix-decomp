#include <globaldefs.h>
#include "Graphics/Model3D.h"
#include "Memory/SafeAllocator.h"

struct Struct_020966a0;
struct Struct_0203d028;

struct Struct_ov017_0219b938 {
#if defined(jpn)
    char unknown_0_[0x4b8];
#else
    char unknown1_0_[0x498];
#endif
    Model3D unknown_498_[2];

    Model3D* inline_ov017_0219b938(int arg0) { return &unknown_498_[arg0]; }
};

extern "C" struct Struct_ov017_0219b938* func_02012fe4(void);
extern "C" void func_020966a0(struct Struct_020966a0* arg0);
extern "C" void func_0204719c(void* arg0);
extern "C" void* func_0208e9e8(void);
extern "C" void func_0208f36c(void* arg0, int arg1);
extern "C" void func_0207df50(struct Struct_0203d028* arg0);

struct Struct_ov017_021d64b0 {
    int unknown_0_[17];
};

extern struct Struct_ov017_021d64b0 data_ov017_021d64b0;

struct Struct_02000c9c_55 {
    char unknown_0_[0x88];
};

struct Struct_ov017_0219b938_2 {
    char unknown_0_[0x9c];
    SafeAllocator unknown_9c_;
#if defined(jpn)
    char unknown1_b0_[0x4ac - 0x9c - sizeof(SafeAllocator)];
    char unknown_4fc_[0x2980 - 0x4ac];
#else
    char unknown_b0_[0x4fc - 0x9c - sizeof(SafeAllocator)];
    char unknown_4fc_[0x2b90 - 0x4fc];
#endif
    struct Struct_02000c9c_55 unknown_2b90_[0x14];
#if defined(jpn)
    char unknown_3420_[0x4108 - 0x2980 - 0x14 * 0x88];
#else
    char unknown_3630_[0x4328 - 0x2b90 - 0x14 * 0x88];
#endif
    struct Struct_020966a0* unknown_4328_;
};

// USA: func_ov017_0219b938
extern "C" ARM void func_ov017_0219b938(struct Struct_ov017_0219b938_2* arg0) {
    struct Struct_ov017_0219b938* var0 = func_02012fe4();
    var0->inline_ov017_0219b938(0)->Func0207e2e0();
    var0->inline_ov017_0219b938(1)->Func0207e2e0();
    func_020966a0(arg0->unknown_4328_);
    struct Struct_ov017_021d64b0 var1 = data_ov017_021d64b0;
    int var2;
    for (var2 = 0; var1.unknown_0_[var2] >= 0; var2++) {
        func_0204719c(&arg0->unknown_2b90_[var1.unknown_0_[var2]]);
    }
    func_0204719c(&arg0->unknown_2b90_[0x12]);
    func_0204719c(&arg0->unknown_2b90_[0x13]);
    func_0208f36c(func_0208e9e8(), 0);
    arg0->unknown_9c_.Reset();
    func_0207df50((struct Struct_0203d028*)arg0->unknown_4fc_);
}
