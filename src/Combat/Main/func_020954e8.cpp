#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201c1c8;

struct Struct_02109404_4 {
    unsigned char unknown_0_[6];
    unsigned short unknown_6_;
};
extern struct Struct_02109404_4 data_02109404;

// USA: func_020954e8
extern "C" ARM int func_020954e8(struct Struct_0201c1c8* arg0) {
    int var0 = ((Script::Parameter*)arg0)->ToInt();
    if (var0 == 0xff || var0 == 0) {
        return 1;
    }
    data_02109404.unknown_6_++;
    return 1;
}
