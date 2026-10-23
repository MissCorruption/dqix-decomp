#include <globaldefs.h>
#include "std_library_functions.h"
#include "Resource/CharacterCreationUI.h"

#if defined(jpn)
enum { Enum_ov002_0215c028_3784 = 0xe20, Enum_ov002_0215c028_7120 = 0x1a98, Enum_ov002_0215c028_2400 = 0x800, Enum_ov002_0215c028_40 = 43 };
#else
enum { Enum_ov002_0215c028_3784 = 0xec8, Enum_ov002_0215c028_7120 = 0x1bd0, Enum_ov002_0215c028_2400 = 0x960, Enum_ov002_0215c028_40 = 40 };
#endif

namespace {
struct Struct_ov002_0215c028 {
    unsigned char unknown_0_[Enum_ov002_0215c028_3784];
    Struct_ov023_021d9c7c unknown_ec8_;
    unsigned char unknown_f84_[Enum_ov002_0215c028_7120 - Enum_ov002_0215c028_3784 - sizeof(Struct_ov023_021d9c7c)];
    char* unknown_1bd0_;
};
}

extern "C" void func_ov002_0215be00(void*, int, short, short);
extern "C" int func_020421a0();
extern "C" void func_0205d0e0(void*, int);
struct Struct_0205def8;
extern "C" void func_0205def8(Struct_0205def8*, int, int);
#if defined(jpn)
extern const char data_ov002_0216d91f[];
extern "C" void func_020474a8(void*, unsigned char, const char*, char*);
extern "C" int func_0204234c(char*, int);
#else
extern const char data_ov002_0216d26c[];
extern "C" void func_02046608(void*, int, int, int, int, int, int);
extern "C" int func_02041cc0(char*, int);
#endif
extern "C" void func_0205d304(void*, const char*, int, unsigned char, unsigned char, unsigned char, void*
#if !defined(jpn)
                            , unsigned char
#endif
);

// USA: func_ov002_0215c028
// JPN: func_ov002_0215d12c
extern "C" ARM void func_ov002_0215c028(char* arg0) {
    Struct_ov002_0215c028* var0 = ((Struct_ov002_0215c028*)(arg0));
    func_ov002_0215be00(var0, Enum_ov002_0215c028_40, 0x15, 0x13);
    void* var1 = ((void*)(func_020421a0()));
    memset(var0->unknown_1bd0_, 0, Enum_ov002_0215c028_2400);
#if defined(jpn)
    func_020474a8(var1, 8, data_ov002_0216d91f, var0->unknown_1bd0_);
    func_0204234c(var0->unknown_1bd0_, 0x11);
#else
    func_02046608(var1, 8, ((int)(data_ov002_0216d26c)), ((int)(var0->unknown_1bd0_)), 0x100, 0, 0);
    func_02041cc0(var0->unknown_1bd0_, 0x11);
#endif
    func_0205d304(&var0->unknown_ec8_, var0->unknown_1bd0_, 0, 0, 0, 1, 0
#if !defined(jpn)
                 , 0
#endif
    );
    func_0205d0e0(&var0->unknown_ec8_, 4);
    func_0205def8(((Struct_0205def8*)(&var0->unknown_ec8_)), 0, Enum_ov002_0215c028_40);
}
