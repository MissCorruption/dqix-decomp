#include <globaldefs.h>
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif

extern "C" void func_0203be8c(char* arg0);

// USA: func_0203c304
extern "C" ARM void func_0203c304(char* arg0) {
    int var0;
    for (var0 = 0; var0 < (IS_JPN ? 0x60 : 0x20); var0++) {
        func_0203be8c(arg0 + 4 + var0 * (IS_JPN ? 0x10 : 0x28));
    }
    *(int*)arg0 = 0;
    *(short*)(arg0 + (IS_JPN ? 0x612 : 0x512)) = 0;
    *(int*)(arg0 + (IS_JPN ? 0x604 : 0x504)) = 1;
    *(int*)(arg0 + (IS_JPN ? 0x60c : 0x50c)) = 0;
    *(int*)(arg0 + (IS_JPN ? 0x608 : 0x508)) = 0;
    *(short*)(arg0 + (IS_JPN ? 0x610 : 0x510)) = (IS_JPN ? 0 : 4);
}
