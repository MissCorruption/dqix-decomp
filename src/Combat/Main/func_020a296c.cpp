#include <globaldefs.h>

struct Struct_020a2908;
extern "C" ARM struct Struct_020a2908* func_020a2928(struct Struct_020a2908* arg0, struct Struct_020a2908* arg1);

// USA: func_020a296c
extern "C" ARM void func_020a296c(unsigned char* arg0, struct Struct_020a2908* arg1) {
    func_020a2928((struct Struct_020a2908*)(arg0 + 0x298), arg1);
    arg0[0x245] |= 4;
}
