#include <globaldefs.h>
#if defined(jpn)
#define REGION_FIELD_0 0x4c0
#else
#define REGION_FIELD_0 0x6d0
#endif

extern "C" void func_02020028(unsigned char* arg0, int arg1, int arg2);

struct Struct_ov017_021d82e0_4 { int unknown_0_; int unknown_4_; };
extern Struct_ov017_021d82e0_4 data_ov017_021d82e0;

// USA: func_ov017_0218b5c0
extern "C" ARM void func_ov017_0218b5c0(int arg0, int arg1) {
    int var0 = data_ov017_021d82e0.unknown_4_;
    if (var0 == 0) return;
    int var1 = *(int*)((char*)var0 + 0x3000 + REGION_FIELD_0);
    if (var1 == 0) return;
    func_02020028((unsigned char*)var1, arg0, arg1);
}
