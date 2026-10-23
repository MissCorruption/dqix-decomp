#include <globaldefs.h>

struct Struct_ov000_02184288_4 {
    int unknown_0_;
    void* unknown_4_;
    int unknown_8_;
};
extern struct Struct_ov000_02184288_4 data_ov000_02184288;

// USA: func_ov000_021744f4
extern "C" ARM void func_ov000_021744f4(int arg0, void* arg1) {
    data_ov000_02184288.unknown_4_ = arg1;
}
