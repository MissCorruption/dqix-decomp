#include <globaldefs.h>

extern "C" void* func_ov031_022133f8(int arg0);
extern "C" int func_ov031_022191e0(void);
extern "C" unsigned int func_ov031_022135ac(unsigned int arg0);
extern "C" int func_ov031_02219220(void);
extern "C" void func_ov031_02219080(void);

// USA: func_ov031_02215478
extern "C" ARM int func_ov031_02215478(char* arg0) {
    char* var0 = (char*)func_ov031_022133f8(1);
    int var1 = func_ov031_022191e0();
    if (var1 != 0) {
        unsigned int var2 = func_ov031_022135ac(*(unsigned char*)(arg0 + 0xd0d));
        if (*(unsigned char*)(var0 + 0x15) == var2) {
            *(int*)(var0 + 0x10) = func_ov031_02219220();
        }
        func_ov031_02219080();
        if (var1 == 0xb) {
            return 0xf;
        }
        unsigned char var3 = *(unsigned char*)(arg0 + 0xd13);
        *(unsigned char*)(arg0 + var3 * 4 + 0x444) = 1;
        return 0xb;
    }
    return 0xe;
}
