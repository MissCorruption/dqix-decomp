#include <globaldefs.h>
#if defined(jpn)
enum { Enum_0209fd00_9196 = 0x240c };
#else
enum { Enum_0209fd00_9196 = 0x23ec };
#endif

#include "Grotto/Main/ActiveGrottoClass.h"

extern "C" void* func_02012fe4(void);
extern "C" int func_0201b5d8(int arg0);

struct Struct_0209fd00 {
    char unknown_0_[4];
    char* unknown_4_;
};

struct Struct_0209fd00_2 {
    unsigned short unknown_0_;
};

// USA: func_0209fd00
extern "C" ARM int func_0209fd00(struct Struct_0209fd00* arg0) {
    struct Struct_0209fd00_2* var0 = *(struct Struct_0209fd00_2**)(arg0->unknown_4_ + 0x8e18);
    if (var0 == 0) return -1;
    int var1 = var0->unknown_0_ % 20;
    ActiveGrottoClass* var2 = (ActiveGrottoClass*)((char*)func_02012fe4() + Enum_0209fd00_9196);
    if (var2 == 0) {
        var1 = 0;
    } else if (func_0201b5d8(var0->unknown_0_)) {
        var1 = var2->GetFloorCount() + 1;
    }
    return var1;
}
