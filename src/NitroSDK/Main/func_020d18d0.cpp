#include <globaldefs.h>

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

extern "C" void func_020c9be0(void);
extern "C" void func_020d192c(void);

struct Struct_020d18d0 {
    int unknown_0_[3];
    int unknown_c_;
    int unknown_10_[2];
    int (*unknown_18_)(void);
};
extern "C" Struct_020d18d0 _ZZ15inline_020d16b0vE1s;

// USA: func_020d18d0
extern "C" ARM void func_020d18d0(int arg0, int arg1) {
    if ((arg1 & 0x3f) == 0x11) {
        if (_ZZ15inline_020d16b0vE1s.unknown_c_ != 0) return;
        {
            int (*var0)(void) = _ZZ15inline_020d16b0vE1s.unknown_18_;
            int var1 = 0;
            if (var0 != 0) var1 = var0();
            if (var1 != 0) func_020d192c();
        }
        _ZZ15inline_020d16b0vE1s.unknown_c_ = 1;
        return;
    }
    func_020c9be0();
}
