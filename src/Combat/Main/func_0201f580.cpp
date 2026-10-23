#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct Variant02030b0c;
struct Array020278e4;
extern "C" void func_020278e4(Array020278e4* obj, int capacity, SafeAllocator* alloc);
extern int data_020fdc4c;

// USA: func_0201f580
extern "C" ARM int func_0201f580(Variant02030b0c* arg) {
#if defined(jpn)
    enum { regionalOffset0 = 0xc, regionalOffset1 = 0x4 };
#else
    enum { regionalOffset0 = 0x10, regionalOffset1 = 0x8 };
#endif
    int capacity = ((Script::Parameter*)arg)->ToInt();
    func_020278e4(
        (Array020278e4*)*(char**)((char*)&data_020fdc4c + regionalOffset0),
        capacity,
        (SafeAllocator*)*(char**)((char*)&data_020fdc4c + regionalOffset1));
    return 1;
}
