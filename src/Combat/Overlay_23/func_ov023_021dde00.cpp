#include <globaldefs.h>

extern "C" void func_0204c684(void* arg0);
extern "C" int func_ov023_021ddc34(void* arg0, short arg1, short arg2, short arg3, short arg4);
extern "C" int func_ov023_021ddc98(void* arg0, int arg1, unsigned short arg2, int arg3);
extern int data_ov023_021ff9e0[];
extern "C" void __clear(void* arg0, int arg1);
extern "C" int func_020421a0(void);
extern "C" void func_0206819c(const char* arg0, char* arg1, int arg2);
extern "C" int func_02046608(int arg0, int arg1, void* arg2, void* arg3, int arg4, int arg5, int arg6);
extern "C" int func_020420e8(void* arg0, int arg1);
extern "C" int func_0204f41c(void* arg0, int arg1, int arg2, void* arg3, int arg4, int arg5, void* arg6, void* arg7, int arg8);
extern "C" void func_ov023_021dd344(void* arg0);

#if defined(jpn)
extern "C" void func_02041f50(const char*, char*);
extern "C" int func_020d2ff0(const char*);
extern "C" int func_02050678(void*, int, int, const char*, int, int, void*, void*);
#define LOG_OFFSET 0x6d8
#define FLAGS_OFFSET 0x6f0
#define DATA_FLAG 5
#else
#define LOG_OFFSET 0x75c
#define FLAGS_OFFSET 0x774
#define DATA_FLAG 1
#endif

// USA: func_ov023_021dde00
extern "C" ARM void func_ov023_021dde00(void* arg0) {
    char* var0 = (char*)arg0;
    void* var1 = *(void**)(var0 + 0x50);
    if (var1) {
        char var2[0xe0];
        func_0204c684(var2);
        #if defined(jpn)
        if (func_ov023_021ddc34(var2, 5, 1, 0xe, 2)) {
#else
        if (func_ov023_021ddc34(var2, 4, 1, 0xf, 2)) {
#endif
            var1 = *(void**)(var0 + 0x50);
            if (data_ov023_021ff9e0[DATA_FLAG] && var1) {
#if defined(jpn)
                char var3[0x40];
                __clear(var3, 0x40);
                func_02041f50(*(const char**)((char*)var1 + 4), var3);
                short var4 = func_020d2ff0(var3);
                short var5 = var4 >> 1;
                short var6 = var5 * 10;
                int var7 = ((0x70 - var6) << 15) >> 16;
                short var8, var9;
                func_02050678(var2, var7, 3, *(const char**)((char*)var1 + 4), 0xa, 0xf, &var9, &var8);
#else
                int var10 = func_020421a0();
                char var11[0x80];
                char var12[0x80];
                __clear(var12, 0x80);
                __clear(var11, 0x80);
                func_0206819c(*(const char**)((char*)var1 + 4), var12, 0);
                func_02046608(var10, 0xa, var12, var11, 0x100, 0, 0);
                int var13 = func_020420e8(var11, 0);
                int var14 = ((0x70 - (short)var13) << 15) >> 16;
                short var15, var16;
                func_0204f41c(var2, var14, 3, var11, 0xa, 0xf, &var16, &var15, 0);
#endif
            }
            *(int*)(var0 + LOG_OFFSET) = *(int*)(var0 + LOG_OFFSET) + func_ov023_021ddc98(var2, *(int*)(var0 + LOG_OFFSET), (unsigned short)data_ov023_021ff9e0[3], 0);
        }
    }
    if (*(unsigned short*)(var0 + FLAGS_OFFSET) & 0x800) {
        func_ov023_021dd344(var0);
    }
}
