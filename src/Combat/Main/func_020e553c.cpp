#include <globaldefs.h>

extern "C" int func_020e55c0(char* arg0, const char* arg1);
typedef int (*Type_020e0574)(char*, const char*, int);
void* LoadFileIntoMemory(const char*, void*, unsigned int*);
extern "C" void* ExtractFileFromGP2(const char* arg0, const char* arg1, unsigned int* arg2);

extern char data_0211e33c[];

// USA: func_020e553c
extern "C" ARM int func_020e553c(void* arg0, int* arg1, int arg2, int arg3) {
    char var0[0x40];
    if (arg0 == 0) {
        return 0;
    }
    *arg1 = 0;
    ((Type_020e0574)func_020e55c0)(var0, (char*)arg0, arg2);
    if (arg3 == 0) {
        LoadFileIntoMemory(var0, data_0211e33c, (unsigned int*)arg1);
        if (*arg1 != 0) {
            return (int)data_0211e33c;
        }
    } else {
        void* var1 = ExtractFileFromGP2((const char*)arg3, var0, (unsigned int*)arg1);
        if (var1 != 0) {
            return (int)var1;
        }
    }
    return 0;
}
