#include <globaldefs.h>

struct Struct_ov031_0224e588 {
    int* unknown_0_;
};

extern Struct_ov031_0224e588 data_ov031_0224e588;

// USA: func_ov031_02210ef8
extern "C" ARM int func_ov031_02210ef8(void) {
    if (data_ov031_0224e588.unknown_0_ == NULL) {
        return 0;
    }
    return *data_ov031_0224e588.unknown_0_ == 7;
}
