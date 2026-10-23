#include <globaldefs.h>
#include "Resource/MonsterDefinition.h"
#include "std_library_functions.h"

// USA: func_0206f170
extern "C" ARM int func_0206f170(Struct_0206ef48* arg0, Struct_0206efd8* arg1,
                                      unsigned char* arg2, Type_0206f110 arg3) {
    int var0;
    *arg2 = 0;
    if (arg1 == NULL) return 0;

    memcpy(&arg0->unknown_0_.unknown_0_, &arg1->unknown_0_, sizeof(Struct_0206f01c));
    arg0->unknown_0_.unknown_4_ = reinterpret_cast<Struct_0206ef40*>(arg1 + 1);
    var0 = func_0206f0f8(&arg0->unknown_0_.unknown_0_);
    arg0->unknown_8_ = reinterpret_cast<char*>(arg1) + (var0 + sizeof(Struct_0206f01c));
    if (arg0->unknown_0_.unknown_0_.unknown_3_7_) {
        *arg2 = 1;
        return 1;
    }
    func_0206f110(arg0, arg3);
    arg0->unknown_0_.unknown_0_.unknown_3_7_ = 1;
    arg1->unknown_0_.unknown_3_7_ = 1;
    return 1;
}
