#include <globaldefs.h>

#if defined(jpn)
#define RG(u, j) (j)
#define func_0205ec34 func_0205ff20
#else
#define RG(u, j) (u)
#endif

extern "C" void* func_0205ec34(void*);
int SetTargetFieldAndForEach02064a40(void* param0, void* param1);
extern "C" void func_0206f81c(void* p);

// USA: func_ov002_021575d4
ARM int SetupTargetAndApplyState021575d4(char* p) {
    int result = 0;
    void* obj = func_0205ec34(p);
    short val = *(short*)(p + RG(0x1c00, 0x1a00) + RG(0x22, 0xea));
    char buf[0x34];
    *(int*)(buf + 0x10) = val;
    if (SetTargetFieldAndForEach02064a40(obj, buf) != 0) {
        result = 1;
        func_0206f81c(buf);
        *(short*)(p + RG(0x1c00, 0x1a00) + RG(0x28, 0xf0)) = 0x232a;
        *(short*)(p + RG(0x1c00, 0x1a00) + RG(0x2a, 0xf2)) = -1;
    }
    return result;
}
