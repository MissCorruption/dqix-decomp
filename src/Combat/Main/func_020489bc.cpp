#include <globaldefs.h>

struct Struct_02048120;
extern "C" void func_02048120(struct Struct_02048120*);

// USA: func_020489bc
extern "C" ARM void func_020489bc(void* arg0) {
    func_02048120((struct Struct_02048120*)arg0);
    *(unsigned short*)arg0 |= 0x80;
    *(int*)((char*)arg0 + 0x13c) = 0;
    *(int*)((char*)arg0 + 0x138) = 0;
    *(char*)((char*)arg0 + 0x140) = 0;
}
