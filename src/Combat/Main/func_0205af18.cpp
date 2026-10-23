#include <globaldefs.h>

struct B190Outer;
extern "C" int func_0205b190(int unused, struct B190Outer* obj);

// USA: func_0205af18
extern "C" ARM unsigned short func_0205af18(int unused, struct B190Outer* obj) {
    if (obj == 0) {
        return 0;
    }
    return func_0205b190(unused, obj);
}
