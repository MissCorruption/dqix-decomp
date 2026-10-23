#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct Variant02030b0c;
struct Array020286fc;

extern "C" void func_020286fc(struct Array020286fc* obj, SafeAllocator* alloc, int count);

struct GlobalObjs020fdd30 {
    struct Array020286fc* obj;
    SafeAllocator* alloc;
};
extern struct GlobalObjs020fdd30 data_020fdd30;

// USA: func_02027f90
extern "C" ARM int func_02027f90(struct Variant02030b0c* p) {
    func_020286fc(data_020fdd30.obj, data_020fdd30.alloc, ((Script::Parameter*)p)->ToInt());
    return 1;
}
