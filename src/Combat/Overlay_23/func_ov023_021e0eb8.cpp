#include <globaldefs.h>

extern "C" void func_0204c684(void* arg0);
extern "C" int func_ov023_021ddc34(void* arg0, short arg1, short arg2, short arg3, short arg4);
extern "C" void func_ov023_021db634(void* arg0, void* arg1);
extern "C" int func_ov023_021ddc98(void* arg0, int arg1, unsigned short arg2, int arg3);
extern int data_ov023_021ff9e0[];

#if defined(jpn)
#define TEXT_FLAGS 0x6f0
#define TEXT_POSITION 0x6d8
#else
#define TEXT_FLAGS 0x774
#define TEXT_POSITION 0x75c
#endif

// USA: func_ov023_021e0eb8
extern "C" ARM void func_ov023_021e0eb8(void* arg0) {
    char var0[0xe0];
    func_0204c684(var0);

    if (func_ov023_021ddc34(var0, 0, 0, 0x1c, 6)) {
        if (!(*(unsigned short*)((char*)arg0 + TEXT_FLAGS) & 0x400)) {
            func_ov023_021db634((char*)arg0 + 0xcc, var0);
        }

        int var1 = func_ov023_021ddc98(var0, *(int*)((char*)arg0 + TEXT_POSITION), (unsigned short)data_ov023_021ff9e0[3], 0);
        *(int*)((char*)arg0 + TEXT_POSITION) = *(int*)((char*)arg0 + TEXT_POSITION) + var1;
    }
}
