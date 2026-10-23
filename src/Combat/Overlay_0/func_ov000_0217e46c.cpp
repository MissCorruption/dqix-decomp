#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x1f00
#define REGION_OFFSET_1 0xaa
#define REGION_OFFSET_2 0xf98
#define REGION_OFFSET_3 0xfa0
#define REGION_OFFSET_4 0xa0
#else
#define REGION_OFFSET_0 0x1d00
#define REGION_OFFSET_1 0x72
#define REGION_OFFSET_2 0xd60
#define REGION_OFFSET_3 0xd68
#define REGION_OFFSET_4 0x68
#endif

#include "std_library_functions.h"
#include "Input/Input.h"

extern "C" void func_ov000_02180404(void* arg0);
extern "C" void func_ov000_02174b14(void* arg0);
extern "C" void func_ov000_0217a8f4(void* arg0);

struct Struct_0205d1e0;
struct Struct_0205d274;
struct Struct_0205d2bc;
struct Struct_0205d6a0;
extern "C" void func_0205d1e0(struct Struct_0205d1e0*);
extern "C" void func_0205d274(struct Struct_0205d274*);
extern "C" void func_0205d2bc(struct Struct_0205d2bc*);
extern "C" void func_0205d6a0(struct Struct_0205d6a0*, int);

// USA: func_ov000_0217e46c
extern "C" ARM void func_ov000_0217e46c(char* arg0) {
    if (g_keyManager.TestKeysPressed(0x802) == 0) {
        if (g_touchInput.pressed_ == 0) {
            return;
        }
    }

    func_ov000_02180404(arg0);
    func_ov000_02174b14(arg0);
    func_ov000_0217a8f4(arg0);

    *(int*)(arg0 + 0x920) = 0x100;
    *(int*)(arg0 + 0x92c) = 8;
    *(int*)(arg0 + 0x924) = 0x100;
    *(int*)(arg0 + 0x928) = 0x100;

    *(unsigned short*)(arg0 + REGION_OFFSET_0 + REGION_OFFSET_1) &= ~0x38;
    func_ov000_02174b14(arg0);

    memset(arg0 + REGION_OFFSET_2 + 0x1000, 0, 8);
    *(unsigned char*)(arg0 + 0x1000 + REGION_OFFSET_3) = 0;
    signed char var0 = *(signed char*)(arg0 + REGION_OFFSET_0 + REGION_OFFSET_4);
    *(unsigned char*)(arg0 + var0 + 0x1000 + REGION_OFFSET_2) = 1;

    func_0205d1e0((struct Struct_0205d1e0*)(arg0 + 0x188));
    func_0205d274((struct Struct_0205d274*)(arg0 + 0x188));
    func_0205d2bc((struct Struct_0205d2bc*)(arg0 + 0x188));
    func_0205d6a0((struct Struct_0205d6a0*)(arg0 + 0x188), 1);

    *(unsigned short*)(arg0 + REGION_OFFSET_0 + REGION_OFFSET_1) |= 0x2;
}
