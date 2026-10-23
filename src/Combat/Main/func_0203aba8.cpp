#include <globaldefs.h>

extern "C" void* func_020bd42c(void* value);
extern "C" int func_020be760(void* a, void* key);

struct Obj0203aba8 {
    void* field0;
};

// USA: func_0203aba8
extern "C" ARM int func_0203aba8(struct Obj0203aba8* obj, void* key, void* target) {
    int found;
    if (obj->field0 == 0) {
        return 0;
    }
    func_020bd42c((char*)obj + 4);
    found = 1;
    if (target != 0) {
        if (func_020be760(target, key) == 0) {
            found = 0;
        }
    } else {
        if (func_020be760((char*)obj + 0x98, key) == 0) {
            found = 0;
        }
    }
    return found != 0;
}
