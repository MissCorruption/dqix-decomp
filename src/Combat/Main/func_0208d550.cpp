#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Combat/ScriptElementList.h"
#include "Resource/Script.h"

struct Struct_0201c1c8;

struct Struct_0208d550_2;
extern "C" void func_0208d8ec(struct Struct_0208d550_2* arg0, SafeAllocator* arg1, int arg2);

// USA: func_0208d550
extern "C" ARM int func_0208d550(struct Struct_0201c1c8* arg0) {
    short var0 = (short)((Script::Parameter*)arg0)->ToInt();
    if (data_02108fc0.unknown_4_->unknown_c_ != 0) {
        func_0208d8ec((struct Struct_0208d550_2*)data_02108fc0.unknown_4_, data_02108fc0.unknown_0_, data_02108fc0.unknown_4_->unknown_c_);
    } else {
        func_0208d8ec((struct Struct_0208d550_2*)data_02108fc0.unknown_4_, data_02108fc0.unknown_0_, var0);
    }
    return 1;
}
