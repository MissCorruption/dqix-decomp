#include <globaldefs.h>
#include "Grotto/Main/ActiveGrottoClass.h"

#if defined(jpn)
enum { Enum_0209d7ac_9196 = 0x240c };
#else
enum { Enum_0209d7ac_9196 = 0x23ec };
#endif

extern "C" void* func_02012fe4();
extern "C" void func_ov017_021d6134(void*, int);

// USA: func_0209d7ac
extern "C" ARM int func_0209d7ac(void* arg0) {
    ActiveGrottoClass* var0 = (ActiveGrottoClass*)((char*)func_02012fe4() + Enum_0209d7ac_9196);
    if (var0 == NULL) return 0;
    DetailedTreasureMapData* var1 = var0->GetDetailedData();
    if (var1 == NULL) return 0;
    func_ov017_021d6134(arg0, var1->mapType_);
    return 1;
}
