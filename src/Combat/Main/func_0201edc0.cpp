#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct List0201f1f0;
struct Variant02030b0c;

extern "C" void func_0201f1f0(List0201f1f0*, int, SafeAllocator*);

struct Container0201edc0 {
    int f0;
    SafeAllocator* alloc;
    List0201f1f0* list;
};
extern Container0201edc0 data_020fdc40;

// USA: func_0201edc0
extern "C" ARM int func_0201edc0(Variant02030b0c* p) {
    func_0201f1f0(data_020fdc40.list, ((Script::Parameter*)p)->ToInt(), data_020fdc40.alloc);
    return 1;
}
