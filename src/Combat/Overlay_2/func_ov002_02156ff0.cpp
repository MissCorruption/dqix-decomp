#include <globaldefs.h>

struct Struct_0205d67c;
extern "C" int func_0205d67c(struct Struct_0205d67c* arg0);
extern "C" void func_ov002_02156e90(void* arg0);

#if defined(jpn)
#define LIST_02156ff0 0xe20
#define KEY_02156ff0 0xa80
#else
#define LIST_02156ff0 0x2c8 + 0xc00
#define KEY_02156ff0 0xbb8
#endif

// USA: func_ov002_02156ff0
extern "C" ARM void func_ov002_02156ff0(unsigned char* arg0, int arg1) {
    while (func_0205d67c((struct Struct_0205d67c*)(arg0 + LIST_02156ff0))) {
        if (*(int*)(arg0 + 0x1000 + KEY_02156ff0) == arg1) {
            return;
        }
        func_ov002_02156e90(arg0);
    }
}
