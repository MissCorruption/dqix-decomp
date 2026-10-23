#include <globaldefs.h>

extern "C" float func_ov017_021d6110(void*);
extern "C" int func_ov017_021d60f4(void*);
extern "C" void* func_ov001_0215ab20(int);

struct Struct_ov001_0215a480 {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    unsigned int unknown_8_;
};

extern "C" void func_ov001_0215a480(void* arg0, struct Struct_ov001_0215a480 arg1, unsigned int arg2, unsigned int arg3);

// USA: func_ov001_0215c1d0
extern "C" ARM int func_ov001_0215c1d0(void* arg0, int arg1) {
    int var0;
    int var1 = func_ov017_021d60f4(arg0);
    Struct_ov001_0215a480 var2;
    var2.unknown_0_ = (int)(4096.0f * func_ov017_021d6110((char*)arg0 + 0x8));
    var2.unknown_4_ = (int)(4096.0f * func_ov017_021d6110((char*)arg0 + 0x10));
    var2.unknown_8_ = (int)(4096.0f * func_ov017_021d6110((char*)arg0 + 0x18));
    int var3 = func_ov017_021d60f4((char*)arg0 + 0x20);
    var0 = 0;
    if (arg1 >= 6) {
        var0 = func_ov017_021d60f4((char*)arg0 + 0x28);
    }
    void* var4 = func_ov001_0215ab20(var1);
    if (var4 == NULL) {
        return 0;
    }
    func_ov001_0215a480(var4, var2, var3, var0);
    return 1;
}
