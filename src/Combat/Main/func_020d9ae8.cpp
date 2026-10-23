#include <globaldefs.h>
#if defined(jpn)
enum { kClearBytes = 0xb, kResetOffset = 0x1c, kAllocatorOffset = 0x24 };
#else
enum { kClearBytes = 0x30, kResetOffset = 0x40, kAllocatorOffset = 0x58 };
#endif
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

struct ByteHeader0204693c;
extern "C" void func_0204693c(ByteHeader0204693c* p);

struct List020727d8;
extern "C" void func_020727d8(List020727d8* p);

struct Struct020dfc40;
extern "C" void func_020dfc40(Struct020dfc40* p);

struct Struct020d9ae8 {
    unsigned char byte0;
    unsigned char pad1[7];
    unsigned char byte8;
    unsigned char byte9;
    unsigned char pad2[2];
    int field_c;
};

// USA: func_020d9ae8
extern "C" ARM void func_020d9ae8(Struct020d9ae8* p, int arg1) {
    func_0204693c((ByteHeader0204693c*)p);
    p->byte0 = 0x4a;
    p->byte8 = arg1;
    p->byte9 = 0;
    p->field_c = -1;
    memset((char*)p + 0x10, 0, kClearBytes);
#if defined(jpn)
    func_020727d8((List020727d8*)((char*)p + kResetOffset));
#else
    func_020dfc40((Struct020dfc40*)((char*)p + kResetOffset));
#endif
    ((SafeAllocator*)((char*)p + kAllocatorOffset))->ResetAllocatorPointer();
}
