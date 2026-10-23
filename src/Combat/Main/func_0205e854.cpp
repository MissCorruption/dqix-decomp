#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_0205e854 {
    unsigned char unknown_0_[0x124];
    struct {
        unsigned char unknown_0_[0x1400];
        unsigned char unknown_1400_[0x20];
    } unknown_124_;
};

// USA: func_0205e854
extern "C" ARM void* func_0205e854(struct Struct_0205e854* arg0) {
    return memset(arg0->unknown_124_.unknown_1400_, 0xff, 0x20);
}
