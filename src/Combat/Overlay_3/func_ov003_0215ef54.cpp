#include <globaldefs.h>

typedef void* (*Type_ov003_0215ef54)(void*);

struct Struct_ov003_0217f3c8 {
    Type_ov003_0215ef54 unknown_0_[9];
};

extern struct Struct_ov003_0217f3c8 data_ov003_0217f3c8;

// USA: func_ov003_0215ef54
extern "C" ARM void* func_ov003_0215ef54(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    unsigned char* var1 = *(unsigned char**)var0;
    struct Struct_ov003_0217f3c8 var2;
    if (var1 != 0) {
        var2 = data_ov003_0217f3c8;
        return var2.unknown_0_[var1[0xd]](arg0);
    }
    return 0;
}
