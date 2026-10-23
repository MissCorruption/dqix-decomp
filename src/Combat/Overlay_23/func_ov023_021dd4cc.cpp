#include <globaldefs.h>

#include "Filesystem/BackgroundLoader.h"

#if defined(jpn)
extern char data_ov023_021fce18[];
extern char data_ov023_021fce2d[];
enum { Enum_ov023_021dd4cc_1908 = 0x6f0, Enum_ov023_021dd4cc_1917 = 0x6f9, Enum_ov023_021dd4cc_1786 = 0x6fa, Enum_ov023_021dd4cc_1788 = 0x6fc };
#else
extern char data_ov023_021fdb40[];
extern char data_ov023_021fdb52[];
extern char data_ov023_021fdb60[];
extern char data_ov023_021fdb72[];
enum { Enum_ov023_021dd4cc_1908 = 0x774, Enum_ov023_021dd4cc_1917 = 0x77d, Enum_ov023_021dd4cc_1918 = 0x77e, Enum_ov023_021dd4cc_1920 = 0x780 };
#endif

struct Struct_ov023_021dd4cc {
    char unknown_0_[Enum_ov023_021dd4cc_1908];
    unsigned short unknown_774_;
    char unknown_776_[Enum_ov023_021dd4cc_1917 - Enum_ov023_021dd4cc_1908 - sizeof(unsigned short)];
    signed char unknown_77d_;
    signed char unknown_77e_;
    char unknown_77f_;
    int unknown_780_;
};

// USA: func_ov023_021dd4cc
extern "C" ARM void func_ov023_021dd4cc(Struct_ov023_021dd4cc* arg0, int arg1) {
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    signed char var1 = arg0->unknown_77d_;
    if (arg1 == var1) {
        if (arg0->unknown_780_ < 0) return;
        var0->RemoveTask(arg0->unknown_780_);
        arg0->unknown_780_ = -1;
        arg0->unknown_77e_ = arg0->unknown_77d_;
        return;
    }
    signed char var2 = arg0->unknown_77e_;
    if (arg1 == var2) return;
    if (arg0->unknown_780_ >= 0) {
        var0->RemoveTask(arg0->unknown_780_);
        arg0->unknown_780_ = -1;
        arg0->unknown_77e_ = -1;
    }
    int var3;
    if (arg1 == 2) {
#if defined(jpn)
        var3 = var0->QueueLoadFile(data_ov023_021fce18, NULL);
#else
        var3 = var0->QueueLoadFileInGP2(data_ov023_021fdb40, data_ov023_021fdb52, NULL);
#endif
    } else {
#if defined(jpn)
        var3 = var0->QueueLoadFile(data_ov023_021fce2d, NULL);
#else
        var3 = var0->QueueLoadFileInGP2(data_ov023_021fdb60, data_ov023_021fdb72, NULL);
#endif
    }
    arg0->unknown_780_ = var3;
    arg0->unknown_774_ |= 8;
    arg0->unknown_77e_ = (char)arg1;
}
