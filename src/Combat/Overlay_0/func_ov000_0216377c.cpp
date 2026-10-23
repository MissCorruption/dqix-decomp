#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x21c
#define REGION_OFFSET_1 0x57e4
#else
#define REGION_OFFSET_0 0x2a0
#define REGION_OFFSET_1 0x55f4
#endif

struct Struct_020a36a8;
extern "C" int func_020a36a8(struct Struct_020a36a8*);
extern "C" int func_020a1fa8(void);
extern "C" void func_ov026_021dbf04(void*);

struct Struct_ov000_0216377c { char unknown_0_[REGION_OFFSET_0]; unsigned char* unknown_2a0_; };

// USA: func_ov000_0216377c
extern "C" ARM void func_ov000_0216377c(struct Struct_ov000_0216377c* arg0, unsigned char arg1) {
    unsigned char* var0 = arg0->unknown_2a0_;
    if (!var0) return;
    var0[0x2a] = arg1;
    if (func_020a36a8((struct Struct_020a36a8*)arg0->unknown_2a0_)) {
        *(int*)((char*)arg0 + REGION_OFFSET_1) |= 0x40000000;
    }
    if (func_020a1fa8() == 3) {
        func_ov026_021dbf04(arg0);
    }
}
