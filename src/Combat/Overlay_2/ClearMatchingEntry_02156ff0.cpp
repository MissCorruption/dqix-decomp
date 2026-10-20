#include <globaldefs.h>

struct Struct_0205d67c;
int GetFlagB4_0205d67c(struct Struct_0205d67c* p);
extern "C" void func_ov002_02156e90(void* obj);

#if defined(jpn)
#define LIST_02156ff0 0xe20
#define func_ov002_02156e90 func_ov002_0215852c
extern "C" void func_ov002_0215852c(void* obj);
#define KEY_02156ff0 0xa80
#else
#define LIST_02156ff0 0x2c8 + 0xc00
#define KEY_02156ff0 0xbb8
#endif

// USA: func_ov002_02156ff0
ARM void ClearMatchingEntry_02156ff0(unsigned char* obj, int key) {
    while (GetFlagB4_0205d67c((struct Struct_0205d67c*)(obj + LIST_02156ff0))) {
        if (*(int*)(obj + 0x1000 + KEY_02156ff0) == key) {
            return;
        }
        func_ov002_02156e90(obj);
    }
}
