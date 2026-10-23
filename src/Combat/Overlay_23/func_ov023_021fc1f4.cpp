#include <globaldefs.h>

extern "C" void func_ov023_021f6ed8(void*);
struct Struct_ov002_0215505c_2;
extern "C" void func_ov023_021e1318(Struct_ov002_0215505c_2* arg0);

// USA: func_ov023_021fc1f4
extern "C" ARM int func_ov023_021fc1f4(void* arg0, void* arg1, short arg2, short arg3) {
    func_ov023_021f6ed8(arg0);
    *(unsigned short*)((char*)arg0 + 0x4) = 0x12;
    *(unsigned short*)((char*)arg0 + 0x6) = arg2;
    *(unsigned short*)((char*)arg0 + 0x8) = arg3;
    func_ov023_021e1318((Struct_ov002_0215505c_2*)((char*)arg0 + 0x20));
    return 1;
}
