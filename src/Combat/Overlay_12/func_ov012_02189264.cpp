#if defined(jpn)
enum { Enum_ov012_02189264_4976 = 0x1340, Enum_ov012_02189264_4892 = 0x1300, Enum_ov012_02189264_4900 = 0x1308, Enum_ov012_02189264_3368 = 0xd0c, Enum_ov012_02189264_5020 = 0x1364 };
#else
enum { Enum_ov012_02189264_4976 = 0x1370, Enum_ov012_02189264_4892 = 0x131c, Enum_ov012_02189264_4900 = 0x1324, Enum_ov012_02189264_3368 = 0xd28, Enum_ov012_02189264_5020 = 0x139c };
#endif

#include <globaldefs.h>
#include "Resource/Brightness.h"

struct GameResources;
void SetSubBrightness(GameResources*, int, int);
int IsSubBrightnessTransitionActive(GameResources*);
extern "C" void func_ov023_021e7340(void* arg0);
extern "C" void func_ov023_021e6594(void* arg0);
extern "C" void* func_020d6c00(void);
struct Struct_02038598_4;
extern "C" void func_020466f4(struct Struct_02038598_4* arg0, unsigned int arg1);

// USA: func_ov012_02189264
extern "C" ARM void func_ov012_02189264(char* arg0) {
    GameResources* var0 = GetGameResources();
    unsigned char var1 = *(unsigned char*)(arg0 + Enum_ov012_02189264_4976);
    if (var1 == 0) {
        SetSubBrightness(var0, ~0xf, 0xf);
        (*(unsigned char*)(arg0 + Enum_ov012_02189264_4976))++;
        return;
    }
    if (var1 != 1) return;
    if (IsSubBrightnessTransitionActive(var0) != 0) return;

    *(int*)(arg0 + Enum_ov012_02189264_4892) = 0;
    *(int*)(arg0 + Enum_ov012_02189264_4900) = 0;
    func_ov023_021e7340(arg0 + Enum_ov012_02189264_3368);
    func_ov023_021e6594(arg0);
    func_020466f4((struct Struct_02038598_4*)func_020d6c00(), 0xf);
    ClearFlags00(var0, 0x10);
    *(int*)(arg0 + Enum_ov012_02189264_5020) = 1;
    *(unsigned char*)(arg0 + Enum_ov012_02189264_4976) = 0;
}
