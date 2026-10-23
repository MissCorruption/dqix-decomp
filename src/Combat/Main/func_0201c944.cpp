#include <globaldefs.h>
#include "World/ZoneFeatures.h"
#include "Resource/Script.h"

class SafeAllocator;
struct Variant02030b0c;
struct Foo0201e480;

struct GlobalList020fdc20_c944 {
    int pad0;
    SafeAllocator* alloc;
    struct Foo0201e480* array;
};
extern struct GlobalList020fdc20_c944 data_020fdc20;

// USA: func_0201c944
extern "C" ARM int func_0201c944(Script::Parameter* arg0, int) {
    struct Variant02030b0c* v = (struct Variant02030b0c*)arg0;
    int n = ((Script::Parameter*)v)->ToInt();
    ((ZoneFeatures*)data_020fdc20.array)->func_0201e480(n, data_020fdc20.alloc);
    return 1;
}
