#include <globaldefs.h>

extern "C" void func_0204b620(void*, void*, int, int, int, int, int, int, int, int);

struct Struct_0204b938 { short unknown_0_; short unknown_2_; };

// USA: func_0204b938
extern "C" ARM void func_0204b938(void* arg0, void* arg1, int arg2, int arg3, unsigned short arg4) {
    struct Struct_0204b938* var0 = (struct Struct_0204b938*)arg1;
    void* var1;
    short var2, var3;
    if (arg1 == NULL) return;
    var1 = *(void**)((char*)arg0 + 0x14);
    var2 = var0->unknown_0_;
    var3 = var0->unknown_2_;
    if (var1 == NULL) return;
    func_0204b620(arg0, var1, (int)arg1, 0, 0, arg2, arg3, var2, var3, arg4);
}
