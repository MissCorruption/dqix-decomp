#include <globaldefs.h>

struct Obj020a8f60 {
    unsigned int count : 12;
};

// USA: func_020a8f60
extern "C" ARM int func_020a8f60(struct Obj020a8f60* obj) {
    return obj->count * 64;
}
