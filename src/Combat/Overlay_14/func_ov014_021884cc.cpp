#include <globaldefs.h>

struct Struct_02081164;

extern "C" void func_0208103c(void* arg0, int arg1, int arg2);
extern "C" void func_0208108c(void* arg0, int arg1);
extern "C" void func_02081164(struct Struct_02081164* arg0, int arg1, int arg2);
extern "C" void func_02080c68(void* arg0, int arg1, int arg2);
extern "C" void func_020813ec(void* arg0, int arg1);

// USA: func_ov014_021884cc
extern "C" ARM void func_ov014_021884cc(void* arg0) {
    short var0 = *(short*)((char*)arg0 + 0x172);
    short var1 = var0 + 0x10;
    if (var0 == 9) {
        short var2 = *(short*)((char*)arg0 + 0x174);
        if (var2 >= 0) {
            var1 = var2 - 4;
        }
    }
    func_0208103c(*(void**)((char*)arg0 + 0xc0), 0x19, var1);
    func_0208108c(*(void**)((char*)arg0 + 0xc0), 0x19);
    func_02081164(*(struct Struct_02081164**)((char*)arg0 + 0xc0), 3, 1);
    func_02080c68(*(void**)((char*)arg0 + 0xc0), 3, 1);
    func_020813ec(*(void**)((char*)arg0 + 0xc0), 3);
}
