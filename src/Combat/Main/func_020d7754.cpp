#include <globaldefs.h>
#include "std_library_functions.h"
#include "Resource/Script.h"
#include "Memory/SafeAllocator.h"

struct Struct_0214e33c {
    short unknown_0_;
    short unknown_2_;
    short* unknown_4_;
    void* unknown_8_;
    void** unknown_c_;
};
extern struct Struct_0214e33c data_0214e33c;

struct Struct_020d7754 { short unknown_0_; short unknown_2_; char* unknown_4_; };

extern "C" int func_020d2ff0(const char* arg0);
extern "C" void func_020d78e0(void** arg0, void* arg1);
extern char data_020f2330[];

// USA: func_020d7754
extern "C" ARM int func_020d7754(Script::Parameter* arg0) {
    Struct_020d7754 var0;
    var0.unknown_4_ = NULL;
    var0.unknown_0_ = arg0[0].ToInt();
    var0.unknown_2_ = arg0[1].ToInt();
    int var1 = 1;
    if (data_0214e33c.unknown_4_ != NULL && data_0214e33c.unknown_0_ != 0) {
        var1 = 0;
        for (unsigned short var2 = 0; var2 < data_0214e33c.unknown_0_; var2++) {
            if (var0.unknown_0_ == data_0214e33c.unknown_4_[var2]) var1 = 1;
        }
    }
    if (!var1) return 1;
    const char* var3 = arg0[2].ToString();
    int var4 = func_020d2ff0(var3);
    var0.unknown_4_ = (char*)((SafeAllocator*)data_0214e33c.unknown_8_)->Allocate(var4 + 1);
    if (var0.unknown_4_ == NULL) return 0;
    var0.unknown_4_[var4] = 0;
    sprintf(var0.unknown_4_, data_020f2330, var3);
    func_020d78e0(data_0214e33c.unknown_c_, (void*)&var0);
    return 1;
}
