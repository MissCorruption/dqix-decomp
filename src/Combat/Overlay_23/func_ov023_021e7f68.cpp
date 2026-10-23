#include <globaldefs.h>
#include "std_library_functions.h"
#include "Resource/CharacterCreationUI.h"

struct Struct_ov023_021e7f68 {
    unsigned char unknown_0_[0x78];
    Struct_ov023_021d9c7c unknown_78_;
    unsigned char unknown_134_[0x5d8 - 0x78 - sizeof(Struct_ov023_021d9c7c)];
    char* unknown_5d8_;
    unsigned char unknown_5dc_[0x5f4 - 0x5dc];
    void* unknown_5f4_;
};

struct Struct_0205d6a0;
extern "C" void func_0205d6a0(struct Struct_0205d6a0* arg0, int arg1);
extern "C" void func_ov023_021e7cec(void* arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov023_021e868c(void* arg0);
extern "C" void func_0205d304(void* arg0, const char* arg1, int arg2, unsigned char arg3,
                            unsigned char arg4, unsigned char arg5, void* arg6
#if !defined(jpn)
                            , unsigned char arg7
#endif
);

// USA: func_ov023_021e7f68
// JPN: func_ov023_021e8144
extern "C" ARM void func_ov023_021e7f68(void* arg0) {
    Struct_ov023_021e7f68* var0 = static_cast<Struct_ov023_021e7f68*>(arg0);
    func_0205d6a0(((Struct_0205d6a0*)(&var0->unknown_78_)), 1);
    func_ov023_021e7cec(arg0, 0xb, 3, 5);
#if defined(jpn)
    memset(var0->unknown_5d8_, 0, 0x800);
#else
    memset(var0->unknown_5d8_, 0, 0x960);
#endif
    if (var0->unknown_5f4_ != NULL) {
        func_ov023_021e868c(arg0);
    }
    func_0205d304(&var0->unknown_78_, var0->unknown_5d8_, 0, 0, 0, 1, 0
#if !defined(jpn)
                   , 0
#endif
    );
}
