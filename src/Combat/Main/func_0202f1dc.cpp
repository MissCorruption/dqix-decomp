#include <globaldefs.h>
#include "World/ZoneLootableRecord.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

struct Foo02048004;
extern "C" void func_02047230(struct Foo02048004* obj);
extern "C" void func_0202f1a4(char* obj);
extern "C" void func_02012da4(AllocatorUnion* alloc, void* data);

extern AllocatorUnion data_02114e20;

// USA: func_0202f1dc
extern "C" ARM void func_0202f1dc(char* obj) {
    char* p;
    int i;
    p = obj;
    for (i = 0; i < 8; i++) {
        func_02047230((struct Foo02048004*)p);
        p += 0x88;
    }

    if (*(SafeAllocator**)(obj + 0x444) != NULL) {
        SignedAllocatorHeader* header = (*(SafeAllocator**)(obj + 0x444))->GetSignedAllocator();
        (*(SafeAllocator**)(obj + 0x444))->Destroy();
        func_02012da4(&data_02114e20, header);
        func_02012da4(&data_02114e20, *(SafeAllocator**)(obj + 0x444));
    }

    func_0202f1a4(obj);
}
