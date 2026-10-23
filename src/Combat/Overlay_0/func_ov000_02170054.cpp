#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x88
#else
#define REGION_OFFSET_0 0x68
#endif


struct Struct_0203c0cc;
extern "C" void func_0203c0f0(struct Struct_0203c0cc* arg0);
extern "C" void func_ov000_0216fe9c(void* arg0);

// USA: func_ov000_02170054
extern "C" ARM void func_ov000_02170054(void* arg0) {
    func_0203c0f0((struct Struct_0203c0cc*)((char*)arg0 + 0x50));
    func_0203c0f0((struct Struct_0203c0cc*)((char*)arg0 + REGION_OFFSET_0));
    func_ov000_0216fe9c((char*)arg0 + 0x8);
}
