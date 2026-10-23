#include <globaldefs.h>
#if defined(jpn)
enum { Enum_020397cc_400 = 0x184 };
#else
enum { Enum_020397cc_400 = 0x190 };
#endif

extern "C" int func_02039d7c(char*);

struct Struct_02010604;
extern "C" int func_02033b88(struct Struct_02010604* arg0, int arg1);

struct Struct_02018300_3 {
    char unknown_0_[0xc1];
    unsigned char unknown_c1_0_ : 2;
    char unknown_c2_[Enum_020397cc_400];
    unsigned char unknown_252_;
    unsigned char unknown_253_;
};

// USA: func_020397cc
extern "C" ARM void func_020397cc(struct Struct_02018300_3* arg0, int arg1) {
    if (arg1 && arg0->unknown_252_ && func_02039d7c((char*)(arg0)) == 0 && (arg0->unknown_c1_0_ & 2) == 0) {
        func_02033b88((struct Struct_02010604*)arg0, 0);
    }
    arg0->unknown_253_ = 0;
    arg0->unknown_252_ = 0;
}
