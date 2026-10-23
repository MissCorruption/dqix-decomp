#include <globaldefs.h>

struct Struct_0205d81c;
extern "C" void func_0205deb4(struct Struct_0205d81c* arg0, int arg1, int arg2);

// USA: func_ov023_021e6378
extern "C" ARM void func_ov023_021e6378(void* arg0, int arg1, int arg2, int arg3, unsigned char arg4) {
    *((unsigned char*)arg0 + 0x1371) = (unsigned char)arg1;
    func_0205deb4((struct Struct_0205d81c*)((char*)arg0 + 0xac), 7, arg2);
    func_0205deb4((struct Struct_0205d81c*)((char*)arg0 + 0xac), 8, arg3);
    func_0205deb4((struct Struct_0205d81c*)((char*)arg0 + 0xac), 9, arg4);
}
