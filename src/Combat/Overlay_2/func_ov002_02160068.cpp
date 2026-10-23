#include "std_library_functions.h"
#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov002_02160068_3784 = 0xe20, Enum_ov002_02160068_3024 = 0xa98, Enum_ov002_02160068_3000 = 0xa80, Enum_ov002_02160068_7174 = 0x1ace, Enum_ov002_02160068_2400 = 0x800, Enum_ov002_02160068_29 = 0x1e, Enum_ov002_02160068_21 = 0x16, Enum_ov002_02160068_4 = 5 };
#define FINAL_ARG_02160068
extern "C" void func_0205d304(void *arg0, void *arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
#else
enum { Enum_ov002_02160068_3784 = 0xec8, Enum_ov002_02160068_3024 = 0xbd0, Enum_ov002_02160068_3000 = 0xbb8, Enum_ov002_02160068_7174 = 0x1c06, Enum_ov002_02160068_2400 = 0x960, Enum_ov002_02160068_29 = 0x1d, Enum_ov002_02160068_21 = 0x15, Enum_ov002_02160068_4 = 4 };
#define FINAL_ARG_02160068 , 0
extern "C" void func_0205d304(void *arg0, void *arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
#endif
extern "C" void func_ov002_0215be00(void *arg0, int arg1, int arg2, int arg3);
struct Struct_0205de24_2;
extern "C" void func_0205de24(struct Struct_0205de24_2 *arg0, unsigned char arg1,
                                                                        unsigned char arg2);
struct Struct_0205d81c;
extern "C" void func_0205deb4(struct Struct_0205d81c *arg0, int arg1, int arg2);
extern "C" int func_02041ea4(char *arg0, int arg1);
extern "C" void func_ov002_021601e0(char *arg0, char *arg1, int);

struct Struct_ov002_02160068 {
    char unknown_0_[Enum_ov002_02160068_3024];
    char *unknown_bd0_;
};
struct Struct_ov002_02160068_2 {
    char unknown_0_[Enum_ov002_02160068_3000];
    int unknown_bb8_;
};

// USA: func_ov002_02160068
extern "C" ARM void func_ov002_02160068(char *arg0) {
    func_0205de24((struct Struct_0205de24_2 *) (arg0 + Enum_ov002_02160068_3784), 0, 3);
    func_ov002_0215be00(arg0, Enum_ov002_02160068_29, Enum_ov002_02160068_21, 0xb);
    memset(((struct Struct_ov002_02160068 *) (arg0 + 0x1000))->unknown_bd0_, 0, Enum_ov002_02160068_2400);
    func_ov002_021601e0(arg0, ((struct Struct_ov002_02160068 *) (arg0 + 0x1000))->unknown_bd0_, 0);
    func_0205d304(arg0 + Enum_ov002_02160068_3784, ((struct Struct_ov002_02160068 *) (arg0 + 0x1000))->unknown_bd0_, 0, 0, 0, 1, 0 FINAL_ARG_02160068);

    func_0205de24((struct Struct_0205de24_2 *) (arg0 + Enum_ov002_02160068_3784), 0, 3);
    func_ov002_0215be00(arg0, ((struct Struct_ov002_02160068_2 *) (arg0 + 0x1000))->unknown_bb8_ & 0xff, Enum_ov002_02160068_4, 3);
    memset(((struct Struct_ov002_02160068 *) (arg0 + 0x1000))->unknown_bd0_, 0, Enum_ov002_02160068_2400);
    func_02041ea4(((struct Struct_ov002_02160068 *) (arg0 + 0x1000))->unknown_bd0_, *(short *) (arg0 + Enum_ov002_02160068_7174));
    func_0205d304(arg0 + Enum_ov002_02160068_3784, ((struct Struct_ov002_02160068 *) (arg0 + 0x1000))->unknown_bd0_, 0, 0, 0, 1, 0 FINAL_ARG_02160068);

    func_0205deb4((struct Struct_0205d81c *) (arg0 + Enum_ov002_02160068_3784), Enum_ov002_02160068_29, 0);
}
