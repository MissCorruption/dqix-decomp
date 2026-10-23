#include "Combat/TryApplyElemFields.h"
#include <globaldefs.h>

#if defined(jpn)
#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif

#include "std_library_functions.h"

struct Struct_0205d5d0;
extern "C" void func_ov013_02185424(void*, void*);

struct Struct_ov013_021846a0_2 {
#if defined(jpn)
    char unknown_0_[0x34];
    unsigned char unknown_34_[0xbc];
    char unknown_f0_[0x5ac - 0xf0];
#else
    char unknown1_0_[0x38];
    unsigned char unknown_38_[0xbc];
    char unknown_f4_[0x620 - 0xf4];
#endif
    char unknown_620_[0x18];
    unsigned char unknown_638_[4];
    unsigned char unknown_63c_;
    unsigned char unknown_63d_;
    unsigned char unknown_63e_;
    bool unknown_63f_;
    bool unknown_640_;
    unsigned int unknown_644_;
    int unknown_648_;
#if !defined(jpn)
    int unknown_64c_;
#endif
    int unknown_650_;
    void* unknown_654_;
    char* unknown_658_;
    int unknown_65c_;
    int unknown_660_;
    unsigned char unknown_664_;
    unsigned char unknown_665_;
    char unknown_666_[2];
    int unknown_668_;
    int unknown_66c_;
    int unknown_670_;
    int unknown_674_[5];
    int unknown_688_[5];
    unsigned char unknown_69c_[5];
    char unknown_6a1_[8];
    unsigned char unknown_6a9_[5];
    char unknown_6ae_[0xe];
    unsigned char unknown_6bc_;
};

// USA: func_ov013_02186bd4
extern "C" ARM void func_ov013_02186bd4(Struct_ov013_021846a0_2* arg0) {
    memset(arg0->unknown_658_, 0, LOW_REGION(0x800, 0x960));
    func_ov013_02185424(arg0, arg0->unknown_658_);
#if defined(jpn)
    func_0205d5d0((Struct_0205d5d0*)arg0->unknown_34_, 0, (int)arg0->unknown_658_, 1);
#else
    func_0205d5d0((Struct_0205d5d0*)arg0->unknown_38_, 0, (int)arg0->unknown_658_, 1, 0);
#endif
}
