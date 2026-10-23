#include <globaldefs.h>
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif

extern "C" void func_0203be8c(char* obj);

// USA: func_0203c304
extern "C" ARM void func_0203c304(char* obj) {
    int i;
    for (i = 0; i < (IS_JPN ? 0x60 : 0x20); i++) {
        func_0203be8c(obj + 4 + i * (IS_JPN ? 0x10 : 0x28));
    }
    *(int*)obj = 0;
    *(short*)(obj + (IS_JPN ? 0x612 : 0x512)) = 0;
    *(int*)(obj + (IS_JPN ? 0x604 : 0x504)) = 1;
    *(int*)(obj + (IS_JPN ? 0x60c : 0x50c)) = 0;
    *(int*)(obj + (IS_JPN ? 0x608 : 0x508)) = 0;
    *(short*)(obj + (IS_JPN ? 0x610 : 0x510)) = (IS_JPN ? 0 : 4);
}
