#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201c1c8 {
    int unknown_0_;
    union {
        int unknown_0_;
        float unknown1_0_;
    } unknown_4_;
};

struct Struct_0201f894 {
    struct Struct_0201c1c8 unknown_0_[6];
};

// USA: func_0201f894
extern "C" ARM int func_0201f894(struct Struct_0201f894* arg0) {
    ((Script::Parameter*)&arg0->unknown_0_[0])->ToInt();
    ((Script::Parameter*)&arg0->unknown_0_[1])->ToInt();
    ((Script::Parameter*)&arg0->unknown_0_[2])->ToInt();
    ((Script::Parameter*)&arg0->unknown_0_[3])->ToInt();
    ((Script::Parameter*)&arg0->unknown_0_[4])->ToInt();
    ((Script::Parameter*)&arg0->unknown_0_[5])->ToInt();
    return 1;
}
