#include <globaldefs.h>

struct Struct_02080fa8;
extern "C" int func_02080b40(void* arg0, int arg1);
extern "C" void func_02080fa8(struct Struct_02080fa8* arg0, int arg1, int arg2);

// USA: func_ov003_0215f5e8
extern "C" ARM void func_ov003_0215f5e8(void* arg0, int arg1, int arg2) {
    if (arg2 <= 4) {
        return;
    }
    int var0 = arg2 + 3;
    var0 = var0 & ~3u;
    func_02080b40(arg0, 0xd3);
    func_02080b40(arg0, 0xd4);
    func_02080b40(arg0, 0xd5);
    func_02080fa8((struct Struct_02080fa8*)arg0, 0xd4, arg1 + 1);
    func_02080fa8((struct Struct_02080fa8*)arg0, 0xd5, var0 / 4);
}
