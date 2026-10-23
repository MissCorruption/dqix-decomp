#include <globaldefs.h>

struct Struct_020e6d5c_18 { unsigned int unknown_0_; unsigned int unknown_4_; };
struct Struct_ov003_0217fb98 { Struct_020e6d5c_18 unknown_0_[6]; };
extern Struct_ov003_0217fb98 data_ov003_0217fb98;
extern Struct_020e6d5c_18 data_020e6d5c;

// USA: func_ov003_0217bdb8
extern "C" ARM unsigned char func_ov003_0217bdb8(char* arg0) {
    Struct_ov003_0217fb98 var0 = data_ov003_0217fb98;
    var0.unknown_0_[5].unknown_4_ = data_020e6d5c.unknown_4_;
    var0.unknown_0_[5].unknown_0_ = data_020e6d5c.unknown_0_;

    signed char var1 = *(signed char*)(arg0 + 0x140);
    if (var1 >= 0) {
        Struct_020e6d5c_18* var2 = &var0.unknown_0_[var1];
        void* var3 = arg0 + ((int)var2->unknown_4_ >> 1);
        void* var4;
        if (var2->unknown_4_ & 1) {
            var4 = *(void**)((char*)*(void**)var3 + var2->unknown_0_);
        } else {
            var4 = (void*)var2->unknown_0_;
        }
        ((void (*)(void*))var4)(var3);
    }
    return *(unsigned char*)(arg0 + 0x143);
}
