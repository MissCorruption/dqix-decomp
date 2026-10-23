#include <globaldefs.h>

extern "C" void* func_ov016_0218f4f0(unsigned int arg0);
extern "C" int func_ov016_0218f508(void* arg0, void* arg1);
extern "C" void* func_ov016_0218e7a4(unsigned int arg0);
extern "C" void* func_ov016_0218e7bc(void* arg0);
extern "C" int func_ov016_0218e528(int arg0, int arg1, int arg2);
extern "C" void func_ov016_0218e7ec(void* arg0);
extern "C" void func_ov016_0218e7b0(void* arg0);

extern int data_ov016_0219d07c;
extern int data_ov016_0219d0a0;

struct Struct_ov016_0218e558 {
    virtual void inline_ov016_0218e558();
    virtual int inline_ov016_0218e558_2();
    int unknown_4_;
    int unknown_8_;
};

// USA: func_ov016_0218e558
extern "C" ARM int func_ov016_0218e558(void* arg0, int arg1) {
    Struct_ov016_0218e558* var0 = (Struct_ov016_0218e558*)func_ov016_0218f4f0(0x14);
    if (var0 != 0) {
        *(void**)var0 = &data_ov016_0219d07c;
        var0->unknown_4_ = 0;
        var0->unknown_8_ = 0;
        *(void**)var0 = &data_ov016_0219d0a0;
    }

    if (var0 == 0) {
        return 0;
    }

    int var1 = func_ov016_0218f508(var0, arg0);
    if (var1 == 0) {
        if (var0 != 0) {
            var0->inline_ov016_0218e558_2();
        }
        return 0;
    }

    void* var2 = func_ov016_0218e7a4(
#if defined(jpn)
        0xd4
#else
        0xd8
#endif
    );
    if (var2 != 0) {
        var2 = func_ov016_0218e7bc(var2);
    }
    var1 = func_ov016_0218e528((int)var2, (int)var0, arg1);
    switch (var1) {
    case 0:
        if (var2 != 0) {
            func_ov016_0218e7ec(var2);
            func_ov016_0218e7b0(var2);
        }
        return 0;
    }
    return (int)var2;
}
