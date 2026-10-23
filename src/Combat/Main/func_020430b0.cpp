#include <globaldefs.h>
#include "Resource/MessageSystem.h"
#include "Resource/MessageUpdate.h"

#if defined(jpn)
#define func_02043110 func_02043884
#endif

#if defined(jpn)
enum { Enum_020430b0_6624 = 0x1804, Enum_020430b0_7712 = 0x1c44,
       Enum_020430b0_2352 = 0x800, Enum_020430b0_2324 = 0x7e4 };
#else
enum { Enum_020430b0_6624 = 0x19e0, Enum_020430b0_7712 = 0x1e20,
       Enum_020430b0_2352 = 0x930, Enum_020430b0_2324 = 0x914 };
#endif

struct Struct_020430b0;
extern "C" void func_02043110(Struct_020430b0* arg0);

// USA: func_020430b0
extern "C" ARM void func_020430b0(Struct_02021b84* arg0) {
    char* var0 = (char*)arg0;
    func_02043110((Struct_020430b0*)(var0 + Enum_020430b0_6624));
    *(void**)(var0 + Enum_020430b0_7712) = var0 + Enum_020430b0_2352;
    func_02043110((Struct_020430b0*)(var0 + Enum_020430b0_6624));
    *(void**)(var0 + Enum_020430b0_7712) = var0 + Enum_020430b0_2324;
    arg0->unknown_19b1_ = 0;
    arg0->unknown_19ae_ = 0;
    arg0->unknown_19af_ = 0;
    arg0->unknown_19bd_ = 0;
    arg0->unknown_1838_ = -1;
    arg0->unknown_183c_ = 0;
}
