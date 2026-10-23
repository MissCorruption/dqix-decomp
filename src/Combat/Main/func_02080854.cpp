#include <globaldefs.h>

struct Struct_0207f6ac;
struct Struct_0207f524;
extern "C" struct Struct_0207f6ac* func_0207f6ac(struct Struct_0207f524*, int);

// USA: func_02080854
extern "C" ARM void func_02080854(void* arg0, int arg1, int arg2, int arg3) {
    struct Struct_0207f6ac* var0 = func_0207f6ac((struct Struct_0207f524*)((char*)arg0 + 0x4), arg1);
    if (var0 != NULL) {
        *(short*)((char*)var0 + 0x6) = arg2;
        *(short*)((char*)var0 + 0x8) = arg3;
    }
}
