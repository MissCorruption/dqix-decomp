#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201c1c8;

extern "C" void func_020724f4(int arg0, int arg1, int arg2);

struct Struct_02108da8 {
    int unknown_0_;
    int unknown_4_;
};

extern struct Struct_02108da8 data_02108da8;

// USA: func_0207236c
extern "C" ARM int func_0207236c(Script::Parameter* arg0) {
    const Script::Parameter* var0 = arg0;
    func_020724f4(data_02108da8.unknown_4_, data_02108da8.unknown_0_, (unsigned short)var0[0].ToInt());
    return 1;
}
