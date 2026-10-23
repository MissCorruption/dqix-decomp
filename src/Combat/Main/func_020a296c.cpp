#include <globaldefs.h>

struct Struct020a2928;
extern "C" ARM struct Struct020a2928* func_020a2928(struct Struct020a2928* dst, struct Struct020a2928* src);

// USA: func_020a296c
extern "C" ARM void func_020a296c(unsigned char* obj, struct Struct020a2928* src) {
    func_020a2928((struct Struct020a2928*)(obj + 0x298), src);
    obj[0x245] |= 4;
}
