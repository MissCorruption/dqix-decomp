#include <globaldefs.h>

struct PointerField32c_ffc0 {
    char unk[0x32c];
    void* field;
};

// USA: func_0200ffc0
extern "C" ARM void* func_0200ffc0(struct PointerField32c_ffc0* obj) {
    return obj->field ? obj->field : 0;
}
