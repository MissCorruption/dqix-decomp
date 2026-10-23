#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x79de
#define REGION_OFFSET_1 0x79c6
#else
#define REGION_OFFSET_0 0x77ee
#define REGION_OFFSET_1 0x77d6
#endif

#include "Filesystem/BackgroundLoader.h"

struct Struct_ov000_02168284 { short unknown_0_; short unknown_2_; short unknown_4_; };

// USA: func_ov000_02168284
extern "C" ARM void func_ov000_02168284(void* arg0) {
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    int var1 = 0;
    while (var1 < ((unsigned char*)arg0)[REGION_OFFSET_0]) {
        struct Struct_ov000_02168284* var2 = (struct Struct_ov000_02168284*)((unsigned char*)arg0 + REGION_OFFSET_1);
        struct Struct_ov000_02168284* var3 = &var2[var1];
        if (var3->unknown_2_ >= 0) var0->RemoveTask(var3->unknown_2_);
        if (var3->unknown_4_ >= 0) var0->RemoveTask(var3->unknown_4_);
        var1++;
    }
}
