#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Struct_ov011_02184c30 {
    int unknown_0_;
    union { int unknown_0_; float unknown1_0_; } unknown_4_;
};
extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);

extern "C" void* func_ov017_021b2164(void);
extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void*, int);
extern "C" int func_ov023_021f6f10(void* arg0);

struct Struct_ov011_02186f08;
extern "C" void func_ov023_021f79ec(struct Struct_ov011_02186f08* arg0, void* arg1);

// USA: func_ov011_02186f08
extern "C" ARM int func_ov011_02186f08(struct Struct_ov011_02184c30* arg0) {
    int var0 = func_ov011_02184c30(arg0);
    struct Struct_ov011_02184c30* var1 = (struct Struct_ov011_02184c30*)((char*)arg0 + 8);
    void* var2 = (var1->unknown_0_ == 2) ? (void*)var1->unknown_4_.unknown_0_ : 0;
    if (!var2) return 0;
    void* var3 = func_ov023_021f6880(func_ov011_021849c8(func_ov017_021b2164()), var0);
    if (!var3) return 0;
    if (func_ov023_021f6f10(var3) != 2) return 0;
    func_ov023_021f79ec((struct Struct_ov011_02186f08*)var3, var2);
    return 1;
}
