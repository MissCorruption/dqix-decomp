#include <globaldefs.h>
#include "Resource/Script.h"

class SafeAllocator;
struct Struct_0201c1c8;
struct Struct_020e5728;
extern "C" void func_020e5850(struct Struct_020e5728* arg0, SafeAllocator* arg1, int arg2);

extern void* data_021536c4[2];

// USA: func_020e5728
extern "C" ARM int func_020e5728(struct Struct_0201c1c8* arg0) {
    int var0 = ((Script::Parameter*)arg0)->ToInt();
    func_020e5850((struct Struct_020e5728*)data_021536c4[1],
                                 (SafeAllocator*)data_021536c4[0], var0);
    return 1;
}
