#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x79de
#define REGION_OFFSET_1 0x79c6
#else
#define REGION_OFFSET_0 0x77ee
#define REGION_OFFSET_1 0x77d6
#endif


struct Struct_ov000_02168230 { signed char unknown_0_; unsigned char unknown_1_; short unknown_2_; short unknown_4_; };
extern "C" void func_ov000_02168268(struct Struct_ov000_02168230* arg0);

// USA: func_ov000_02168230
extern "C" ARM void func_ov000_02168230(char* arg0) {
    int var0;
    arg0[REGION_OFFSET_0] = 0;
    for (var0 = 0; var0 < 4; var0++) {
        func_ov000_02168268((struct Struct_ov000_02168230*)(arg0 + REGION_OFFSET_1 + var0 * 6));
    }
}
