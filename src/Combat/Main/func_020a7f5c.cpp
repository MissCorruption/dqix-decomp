#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201c1c8;

struct Struct_020a8218;
extern "C" void func_020a8218(Struct_020a8218*, int, int);

struct Struct_02109fe0 {
    void* unknown_0_;
    Struct_020a8218* unknown_4_;
};
extern Struct_02109fe0 data_02109fe0;

// USA: func_020a7f5c
extern "C" ARM int func_020a7f5c(Struct_0201c1c8* arg0) {
    func_020a8218(data_02109fe0.unknown_4_, (int)data_02109fe0.unknown_0_, (unsigned short)((Script::Parameter*)arg0)->ToInt());
    return 1;
}
