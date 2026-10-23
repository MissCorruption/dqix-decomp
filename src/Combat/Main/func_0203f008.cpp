#include <globaldefs.h>

struct Struct_02040468;
struct Struct_0203f008_2;
extern "C" struct Struct_0203f008_2* func_02040468(struct Struct_02040468* arg0, int arg1);

struct Struct_0203f008 {
    struct Struct_02040468* unknown_0_;
    char unknown_4_[0x24];
    short unknown_28_;
};

// USA: func_0203f008
extern "C" ARM struct Struct_0203f008_2* func_0203f008(struct Struct_0203f008* arg0) {
    if (arg0->unknown_0_ == NULL) return NULL;
    return func_02040468(arg0->unknown_0_, arg0->unknown_28_);
}
