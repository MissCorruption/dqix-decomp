#include <globaldefs.h>

struct Struct_ov031_022401b8 { unsigned char unknown_0_[4]; struct Struct_ov031_022401b8* unknown_4_; void* unknown_8_; };
extern void* data_ov031_02290fdc;

// USA: func_ov031_022401b8
extern "C" ARM void* func_ov031_022401b8(void* arg0) {
    struct Struct_ov031_022401b8* var0 = NULL;
    struct Struct_ov031_022401b8* var1 = (struct Struct_ov031_022401b8*)data_ov031_02290fdc;
    struct Struct_ov031_022401b8* var2;
    if (var1 != NULL) {
        if (var1->unknown_8_ == arg0) {
            var0 = var1;
        } else {
            for (var2 = var1->unknown_4_; var2 != var1; var2 = var2->unknown_4_) {
                if (var2->unknown_8_ == arg0) {
                    var0 = var2;
                    break;
                }
            }
        }
    }
    return var0;
}
