#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201c1c8 {
    int unknown_0_;
    union {
        int unknown_0_;
        float unknown1_0_;
    } unknown_4_;
};
struct Struct_0201c3a4;
extern "C" void* func_02012fe4(void);

struct Struct_020fdc4c_5 {
    int unknown_0_;
    void* unknown_4_;
};
extern struct Struct_020fdc4c_5 data_020fdc4c;

// USA: func_0201f950
extern "C" ARM int func_0201f950(struct Struct_0201c1c8* arg0) {
    int var0;
    if (data_020fdc4c.unknown_4_ != 0) return 1;
    var0 = ((Script::Parameter*)arg0)->ToInt();
    if (var0 == *(unsigned short*)func_02012fe4()) {
        data_020fdc4c.unknown_4_ = (void*)((Script::Parameter*)((struct Struct_0201c3a4*)(arg0 + 1)))->ToString();
    }
    return 1;
}
