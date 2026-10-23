#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_02108d98 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
};
extern struct Struct_02108d98 data_02108d98;

struct Struct_0201c1c8;
extern "C" void func_02071c64(int arg0, int arg1, int arg2);

// USA: func_02071820
extern "C" ARM int func_02071820(struct Struct_0201c1c8* arg0) {
    if (data_02108d98.unknown_4_ != 0 && data_02108d98.unknown_0_ != 0) {
        func_02071c64(data_02108d98.unknown_c_, data_02108d98.unknown_8_, data_02108d98.unknown_0_);
    } else {
        func_02071c64(data_02108d98.unknown_c_, data_02108d98.unknown_8_,
                      (unsigned short)((Script::Parameter*)arg0)->ToInt());
    }
    return 1;
}
