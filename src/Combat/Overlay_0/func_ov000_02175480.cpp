#include <globaldefs.h>

struct Struct_0204b8d0;
extern "C" void func_0204b8d0(struct Struct_0204b8d0*, unsigned int, int, int, short, short, short, short, unsigned short);

struct Struct_02020cb8_2;
extern "C" void func_0204b0e8(struct Struct_02020cb8_2*, void*);

// USA: func_ov000_02175480
extern "C" ARM void func_ov000_02175480(void* arg0) {
    func_0204b8d0((struct Struct_0204b8d0*)((char*)arg0 + 0x8c4), 0, 0, 0, 0, 0, 0x20, 0x19, 0xffff);
    func_0204b0e8((struct Struct_02020cb8_2*)((char*)arg0 + 0x8c4), 0);
}
