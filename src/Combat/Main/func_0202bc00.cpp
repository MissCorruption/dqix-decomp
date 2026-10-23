#include <globaldefs.h>

extern "C" int func_020d1ae4(unsigned int);
extern "C" unsigned short func_0202d698(void);
extern "C" void func_0202aebc(void);
extern "C" int func_020d69cc(int, int, int, int, unsigned short, unsigned char);

#pragma optimize_for_size off
// USA: func_0202bc00
extern "C" ARM int func_0202bc00(void* arg0, int arg1) {
    unsigned short* var0 = (unsigned short*)((char*)arg0 + 0x102a);
    *var0 = *var0 + 1;
    unsigned char* var1 = (unsigned char*)((char*)arg0 + 0x1029);
    int var2 = (func_020d1ae4(func_0202d698()) - 1) & 0xff;
    int var3 = arg1 != 0;
    *var1 = (*var1 & ~7) | (var2 & 7);
    unsigned short var4 = *(unsigned short*)((char*)arg0 + 4);
    return func_020d69cc((int)(void*)func_0202aebc, (int)((char*)arg0 + 0x1014), 0x24, 0x785, var4, (unsigned char)(var3 & 0xff));
}
