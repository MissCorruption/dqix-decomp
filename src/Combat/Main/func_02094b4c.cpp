#include <globaldefs.h>
#include "Resource/FontBankLoader.h"

#if defined(jpn)
extern "C" void* func_020d6c00(void);
extern "C" int func_02046708(void*, unsigned int);
extern "C" void* _ZN16BackgroundLoader11GetInstanceEv(void);
extern "C" void _ZN16BackgroundLoader10RemoveTaskEi(void*, int);

typedef void (Struct_0208cb08::*Type_0200f3a4_5)(void);
extern unsigned int data_02109400;
extern Type_0200f3a4_5 data_020e6d5c;
extern Type_0200f3a4_5 data_020f148c[2];
extern Type_0200f3a4_5 data_020f148c_dup[2];
#endif

// USA: func_02094b4c
extern "C" ARM int func_02094b4c(Struct_0208cb08* arg0) {
#if defined(jpn)
    if (arg0->unknown_34_ < 0) return 1;
    if (func_02046708(func_020d6c00(), 0x10)) {
        void* var0 = _ZN16BackgroundLoader11GetInstanceEv();
        for (unsigned char var1 = 0; var1 < 8; ++var1) {
            if (arg0->unknown_14_[var1] >= 0) {
                _ZN16BackgroundLoader10RemoveTaskEi(var0, arg0->unknown_14_[var1]);
                arg0->unknown_14_[var1] = -1;
            }
        }
        arg0->unknown_56_ = 0;
        arg0->unknown_57_ = 0;
        return 0;
    }
    if (!(data_02109400 & 1)) {
        data_020f148c[1] = data_020e6d5c;
        data_02109400 |= 1;
    }
    if (!data_020f148c_dup[arg0->unknown_56_]) return 1;
    (arg0->*data_020f148c_dup[arg0->unknown_56_])();
    return 0;
#else
    return 1;
#endif
}
