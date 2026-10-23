#include <globaldefs.h>

extern int data_ov023_021ff9e0[];

#if defined(jpn)
struct Obj021dbfa8 { char pad[0x717]; unsigned char flag : 1; };
#else
struct Obj021dbfa8 { char pad[0x79b]; unsigned char flag : 1; };
#endif

// USA: func_ov023_021dbfa8
extern "C" ARM void func_ov023_021dbfa8(struct Obj021dbfa8* obj, int val) {
    if (val == 0) return;
#if defined(jpn)
    data_ov023_021ff9e0[5] = val;
#else
    data_ov023_021ff9e0[1] = val;
#endif
    obj->flag = 1;
}
