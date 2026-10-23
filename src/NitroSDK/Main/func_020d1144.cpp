#include <globaldefs.h>

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

extern "C" void func_020c9be0(void);
extern "C" void func_020d11a8(void);

struct Struct_02112140_2 {
    int unknown_0_;
    int (*unknown_4_)(void);
};
extern Struct_02112140_2 data_02112140;

// USA: func_020d1144
extern "C" ARM void func_020d1144(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
    if ((arg1 & 0x3f) == 0x11) {
        if (data_02112140.unknown_0_ != 0) return;
        data_02112140.unknown_0_ = 1;
        {
            int var0 = 1;
            if (data_02112140.unknown_4_ != 0) var0 = data_02112140.unknown_4_();
            if (var0 == 0) return;
            func_020d11a8();
        }
        return;
    }
    func_020c9be0();
}
