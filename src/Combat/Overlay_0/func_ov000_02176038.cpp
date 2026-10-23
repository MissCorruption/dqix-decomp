#include <globaldefs.h>

struct Struct_ov000_02176038 { char unknown_0_[0xb3]; unsigned char unknown_b3_; };

extern "C" int func_02092b34(void*);

// USA: func_ov000_02176038
extern "C" ARM int func_ov000_02176038(struct Struct_ov000_02176038* arg0) {
    arg0->unknown_b3_ |= 0x8;
    return func_02092b34((char*)arg0 + 0x7c);
}
