#include <globaldefs.h>
#include "std_library_functions.h"
#include "Resource/Script.h"

struct Struct_0201c3a4 { int unknown_0_; void* unknown_4_; };

struct Struct_0201c470 { unsigned char unknown_0_[31]; };
struct Struct_0201c3a4_2 { struct Struct_0201c470 unknown_0_; unsigned char unknown_1f_; };
struct Struct_0201c470_2 { struct Struct_0201c3a4_2* unknown_0_; int unknown_4_; int unknown_8_; };
extern "C" void func_0201c470(struct Struct_0201c470_2* arg0, struct Struct_0201c3a4_2* arg1);

struct Struct_020fdc14_3 {
    char unknown_0_[8];
    struct Struct_0201c470_2* unknown_8_;
};
extern struct Struct_020fdc14_3 data_020fdc14;

// USA: func_0201c3a4
extern "C" ARM int func_0201c3a4(struct Struct_0201c3a4* arg0) {
    struct Struct_0201c3a4_2 var0;
    void* var1 = (void*)((Script::Parameter*)arg0)->ToString();
    memset(&var0, 0, 0x1f);
    strcpy((char*)&var0, (char*)var1);
    func_0201c470(data_020fdc14.unknown_8_, &var0);
    return 1;
}
