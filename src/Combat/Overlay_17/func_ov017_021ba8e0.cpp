#include <globaldefs.h>

#if defined(jpn)
#define REGION_FIELD_0 0x51c
#define REGION_FIELD_1 0x4ec
#else
#define REGION_FIELD_0 0x72c
#define REGION_FIELD_1 0x6fc
#endif


extern "C" int func_020421a0();

struct Struct_0201bdac { unsigned char unknown_0_[2]; unsigned char unknown_2_; unsigned char unknown_3_; void* unknown_4_; };
struct Struct_0201bdac_2 { void* unknown_0_; void* unknown_4_; };
extern "C" void func_020469b4(Struct_0201bdac_2* arg0, Struct_0201bdac* arg1);

struct Struct_ov017_0219bfb4;
extern "C" void func_ov017_021ba90c(Struct_ov017_0219bfb4* arg0);

// USA: func_ov017_021ba8e0
extern "C" ARM void func_ov017_021ba8e0(unsigned char* arg0) {
    func_020421a0();
    func_ov017_021ba90c(*(Struct_ov017_0219bfb4**)(arg0 + 0x3000 + REGION_FIELD_0));
    Struct_0201bdac_2* var0 = *(Struct_0201bdac_2**)(arg0 + 0x3000 + REGION_FIELD_1);
    Struct_0201bdac* var1 = *(Struct_0201bdac**)(arg0 + 0x3000 + REGION_FIELD_0);
    func_020469b4(var0, var1);
}
