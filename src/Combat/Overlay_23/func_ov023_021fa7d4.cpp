#include <globaldefs.h>

struct Struct_0205af18;
extern "C" int func_0205af18(int arg0, struct Struct_0205af18* arg1);
extern "C" void* func_ov023_021fa854(char* arg0, unsigned int arg1);
extern "C" void func_ov023_021f6e34(void* arg0, int arg1, unsigned int arg2);
extern "C" void func_0205a494(void* arg0);
extern "C" int func_020421a0();
extern "C" void func_ov023_021f6d9c(void* arg0, void* arg1);

#if defined(jpn)
#define RG(usa, jpn) (jpn)
#else
#define RG(usa, jpn) (usa)
#endif

// USA: func_ov023_021fa7d4
extern "C" ARM void func_ov023_021fa7d4(void* arg0, void* arg1) {
    func_ov023_021f6d9c(arg1, (char*)arg0 + RG(0x78, 0x74));
    for (unsigned int var0 = 0; var0 < *(unsigned short*)((char*)arg0 + RG(0x72, 0x6e)); var0++) {
        void* var1 = func_ov023_021fa854((char*)arg0 + RG(0x24, 0x20), (unsigned short)var0);
        if (var1 != 0) {
            int var2 = func_0205af18((int)((char*)arg0 + RG(0x24, 0x20)), (struct Struct_0205af18*)var1);
            unsigned char var3 = *(unsigned char*)((char*)arg0 + RG(0x74, 0x70));
            func_ov023_021f6e34(arg1, var3, var2);
        }
    }
    func_0205a494((char*)arg0 + RG(0x24, 0x20));
    char* var4 = (char*)func_020421a0();
    *(int*)(var4 + RG(0x2d8, 0x228)) = 0;
    *(unsigned char*)(var4 + RG(0x2e6, 0x236)) = 1;
}
