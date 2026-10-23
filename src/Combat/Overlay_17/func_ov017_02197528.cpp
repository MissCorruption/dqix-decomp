#include <globaldefs.h>
#if defined(jpn)
#define REGION_FIELD_0 0x4ec
#define REGION_FIELD_1 0x524
#else
#define REGION_FIELD_0 0x6fc
#define REGION_FIELD_1 0x734
#endif

#include "Resource/GameResources.h"

struct Struct_02038598_5;
extern "C" void func_02046a8c(struct Struct_02038598_5* arg0, int arg1);

// USA: func_ov017_02197528
extern "C" ARM void func_ov017_02197528(void) {
    char *var0 = (char*)GetGameResources() + 0x3000;
    struct Struct_02038598_5* var1 = *(struct Struct_02038598_5**)(var0 + REGION_FIELD_0);
    unsigned char* var2 = *(unsigned char**)(var0 + REGION_FIELD_1);
    if (var2[2] == 0) return;
    if (var2[3] != 0) return;
    func_02046a8c(var1, (int)var2);
}
