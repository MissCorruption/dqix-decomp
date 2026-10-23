#include <globaldefs.h>

struct StructF0x64_0203cdf8 {
    char pad[0x64];
    int field64;
};

// USA: func_0203cdf8
extern "C" ARM int func_0203cdf8(struct StructF0x64_0203cdf8* obj) {
    return obj->field64;
}
