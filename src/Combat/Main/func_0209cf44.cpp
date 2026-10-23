#include <globaldefs.h>

struct Struct_0209cf44 {
    int unknown_0_;
    union {
        int unknown2_0_;
        float unknown_0_;
        Struct_0209cf44* unknown1_0_;
    } unknown_4_;
};

#if defined(jpn)
#define func_0209e8cc func_020a0644
#endif

extern "C" void* func_0209dccc();
extern "C" int func_ov017_021d60f4(void*);
extern "C" void func_0209e8cc(void*, int, int);

// USA: func_0209cf44
extern "C" ARM int func_0209cf44(void* arg0) {
    void* var0 = func_0209dccc();
    if (var0 == NULL) return 0;
    Struct_0209cf44* var1 = (Struct_0209cf44*)arg0;
    int var2 = func_ov017_021d60f4(&var1[0]);
    int var3 = func_ov017_021d60f4(&var1[1]);
    func_0209e8cc(var0, var2, var3);
    return 1;
}
