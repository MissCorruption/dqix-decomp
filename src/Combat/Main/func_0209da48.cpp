#include <globaldefs.h>

#if defined(jpn)
enum { Enum_0209da48_186 = 0xda, Enum_0209da48_9196 = 0x240c };
#else
enum { Enum_0209da48_186 = 0xba, Enum_0209da48_9196 = 0x23ec };
#endif
#include "Grotto/Main/ActiveGrottoClass.h"

extern "C" void* func_02012fe4(void);
extern "C" int func_0201b5d8(int arg0);
extern "C" int func_ov017_021d6134(void*, int);

// USA: func_0209da48
extern "C" ARM int func_0209da48(void* arg0) {
    int var0 = *(signed char*)((char*)func_02012fe4() + 0x2300 + Enum_0209da48_186);
    ActiveGrottoClass* var1 = (ActiveGrottoClass*)((char*)func_02012fe4() + Enum_0209da48_9196);
    if (var1 == NULL) {
        var0 = 0;
        goto end;
    }
    if (func_0201b5d8(*(unsigned short*)func_02012fe4()) == 0) {
        goto end;
    }
    var0 = var1->GetFloorCount() + 1;
end:
    func_ov017_021d6134(arg0, var0);
    return 1;
}
