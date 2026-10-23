#include <globaldefs.h>

struct Struct_0207f6ac;
struct Struct_0207f524;
extern "C" struct Struct_0207f6ac* func_0207f6ac(struct Struct_0207f524*, int);

// USA: func_02080828
extern "C" ARM void func_02080828(void* arg0, int arg1, short* arg2, short* arg3) {
    struct Struct_0207f6ac* var0 = func_0207f6ac((struct Struct_0207f524*)((char*)arg0 + 0x4), arg1);
    if (var0 != NULL) {
        *arg2 = *(short*)((char*)var0 + 0x6);
        *arg3 = *(short*)((char*)var0 + 0x8);
    }
}
