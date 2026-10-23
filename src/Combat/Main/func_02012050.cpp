#include <globaldefs.h>

struct Struct_02012050 {
#if defined(jpn)
    char unknown1_0_[0x6175];
#else
    char unknown_0_[0x63D5];
#endif
    unsigned char unknown_63d5_;
};

// USA: func_02012050
extern "C" ARM void func_02012050(struct Struct_02012050* arg0) {
    arg0->unknown_63d5_ = 0;
}
