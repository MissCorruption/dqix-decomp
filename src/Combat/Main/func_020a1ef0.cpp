#include <globaldefs.h>

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

extern "C" void func_020c9be0(void);
extern "C" void func_020a1940(int);
struct Struct_02109da4 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    signed char unknown_2_[8];
    signed char unknown_a_[8];
};
extern Struct_02109da4 data_02109da4;
extern signed char data_020f1977[];

// USA: func_020a1ef0
extern "C" ARM void func_020a1ef0(int arg0) {
    if (data_02109da4.unknown_1_ >= 8) func_020c9be0();
    if ((unsigned int)arg0 >= 7) return;
    func_020a1940(data_020f1977[arg0]);
    data_02109da4.unknown_2_[data_02109da4.unknown_1_] = arg0;
    data_02109da4.unknown_1_++;
}
