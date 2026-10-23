#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201c1c8 { int unknown_0_; union { int unknown_0_; float unknown1_0_; } unknown_4_; };
struct Struct_0201c3a4;

// USA: func_0201f864
extern "C" ARM int func_0201f864(Struct_0201c1c8* arg0) {
    void* var0;
    ((Script::Parameter*)arg0)->ToInt();
    var0 = (void*)((Script::Parameter*)((Struct_0201c3a4*)(arg0 + 1)))->ToString();
    ((Script::Parameter*)(arg0 + 2))->ToInt();
    return var0 != NULL ? 1 : 0;
}
