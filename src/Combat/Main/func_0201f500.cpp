#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct Struct_0201c1c8;
struct Struct_0201f500;
extern "C" void func_020277c4(Struct_0201f500* arg0, int arg1, SafeAllocator* arg2);
extern int data_020fdc4c;

// USA: func_0201f500
extern "C" ARM int func_0201f500(Struct_0201c1c8* arg0) {
#if defined(jpn)
    enum { Enum_0201f500_16 = 0xc, Enum_0201f500_8 = 0x4 };
#else
    enum { Enum_0201f500_16 = 0x10, Enum_0201f500_8 = 0x8 };
#endif
    int var0 = ((Script::Parameter*)arg0)->ToInt();
    func_020277c4(
        (Struct_0201f500*)*(char**)((char*)&data_020fdc4c + Enum_0201f500_16),
        var0,
        (SafeAllocator*)*(char**)((char*)&data_020fdc4c + Enum_0201f500_8));
    return 1;
}
