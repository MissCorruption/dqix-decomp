#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

extern "C" unsigned short* func_02012fe4(void);
extern "C" int func_020981e4(int arg0, int arg1);
struct Struct_0203d028;
extern "C" void func_0207df50(struct Struct_0203d028* arg0);
extern "C" void func_020dbebc(void* arg0);
struct Struct_020dbd9c;
extern "C" void func_020dbd9c(struct Struct_020dbd9c* arg0);
struct Struct_020dbf18;
extern "C" int func_020dbf18(struct Struct_020dbf18* arg0, int arg1, int arg2, int arg3, int arg4);

extern const char data_ov017_021d7383[];

struct Struct_ov017_0218d510 {
#if defined(jpn)
    unsigned char unknown_0_[0x27c];
#else
    unsigned char unknown1_0_[0x2cc];
#endif
#if defined(jpn)
    unsigned char unknown_2cc_[0x41e8 - 0x27c];
#else
    unsigned char unknown_2cc_[0x4498 - 0x2cc];
#endif
    struct Struct_020dbf18* unknown_4498_;
};

static inline struct Struct_0203d028* inline_ov017_0218d510(unsigned char* arg0, int arg1) {
    return (struct Struct_0203d028*)(arg1 ? arg0 + 0x930 : arg0 + 0xc40);
}

// USA: func_ov017_0218d510
extern "C" ARM int func_ov017_0218d510(struct Struct_ov017_0218d510* arg0, SafeAllocator* arg1) {
#if defined(jpn)
 enum {Enum_ov017_0218d510_1056=0x430};
#else
 enum {Enum_ov017_0218d510_1056=0x420};
#endif
    if (arg1 == NULL) {
        return -1;
    }
    unsigned short* var0 = func_02012fe4();
    int var1 = func_020981e4((int)(var0 + Enum_ov017_0218d510_1056), *var0);
    struct Struct_0203d028* var2 = inline_ov017_0218d510(arg0->unknown_2cc_, var1);
    func_0207df50(var2);
    if (arg0->unknown_4498_ != NULL) {
        func_020dbebc(arg0->unknown_4498_);
    }
    struct Struct_020dbf18* var3 = arg0->unknown_4498_ = (struct Struct_020dbf18*)arg1->Allocate(0x18);
    func_020dbd9c((struct Struct_020dbd9c*)var3);
    func_020dbf18(var3, (int)data_ov017_021d7383, (int)arg1, (int)var2, 0x17);
    return 0;
}
