#include <globaldefs.h>


extern "C" int func_ov031_0221e650(const char* arg0);
extern "C" void func_ov031_0221e51c(void* arg0, const void* arg1, unsigned int arg2);
extern char data_ov031_0224b0d0;
extern char data_ov031_0224b0dc;

// USA: func_ov031_0221d310
extern "C" THUMB int func_ov031_0221d310(void* arg0) {
    *(int*)arg0 = func_ov031_0221e650(&data_ov031_0224b0d0);
    func_ov031_0221e51c((char*)arg0 + 0x4, &data_ov031_0224b0d0, *(int*)arg0);
    *(int*)((char*)arg0 + 0x24) = 1;
    *(unsigned int*)((char*)arg0 + 0x28) = func_ov031_0221e650(&data_ov031_0224b0dc);
    unsigned int var0 = *(unsigned int*)((char*)arg0 + 0x28);
    if (var0 > 0xd) {
        return -1;
    }
    func_ov031_0221e51c((char*)arg0 + 0x2c, &data_ov031_0224b0dc, var0);
    return 0;
}
