#include <globaldefs.h>

extern "C" int func_02042058(char* arg0, const char* arg1);

struct Struct_ov023_021e802c { char unknown_0_[0x5d8]; char* unknown_5d8_; char unknown_5dc_[0x5fc - 0x5dc]; char* unknown_5fc_; };

#if defined(jpn)
#include "std_library_functions.h"
extern "C" void func_020420e8(char*, int);
struct Struct_02072a68_2;
extern "C" char* func_02072a68(Struct_02072a68_2*, int);
extern "C" int func_02041a90(char*, int, int);
#endif

// USA: func_ov023_021e8cc0
extern "C" ARM void func_ov023_021e8cc0(struct Struct_ov023_021e802c* arg0) {
#if defined(jpn)
    char* var0;
    char* var1 = arg0->unknown_5fc_;
    if (var1 == 0) return;
    var0 = arg0->unknown_5d8_;
    func_020420e8(var0, 8);
    var0 += strlen(var0);
    for (int var2 = 1; var2 <= 2; ++var2) {
        char* var3 = strstr(var1, func_02072a68(*(Struct_02072a68_2**)((char*)arg0 + 0x5f4), 0));
        if (!var3) continue;
        int var4 = var3 - var1;
        memcpy(var0, var1, var4);
        var0 += var4;
        var1 += var4 + 2;
        func_02041a90(var0, 1, var2 * 0x13 + 8);
        var0 += strlen(var0);
    }
    memcpy(var0, var1, strlen(var1));
#else
	if (arg0->unknown_5fc_ == 0) return;
	func_02042058(arg0->unknown_5d8_, arg0->unknown_5fc_);
#endif
}
