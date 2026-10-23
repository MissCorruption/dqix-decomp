#if defined(jpn)
#define R(j,u) (j)
#define func_ov024_021f6f10 func_ov023_021f6f10
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
extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" void* func_ov023_021f6880(void* arg0, int arg1);
#if defined(jpn)
#define func_ov024_021f6f10 func_ov023_021f6f10
extern "C" int func_ov024_021f6f10(void* arg0);
#else
extern "C" int func_ov024_021f6f10(void* arg0);
#endif

class Struct_ov011_02187650 {
public:
    virtual void inline_ov011_02187650_16(); virtual void inline_ov011_02187650_17(); virtual void inline_ov011_02187650_18(); virtual void inline_ov011_02187650_19();
    virtual void inline_ov011_02187650_20(); virtual void inline_ov011_02187650_21(); virtual void inline_ov011_02187650_22(); virtual void inline_ov011_02187650_23();
    virtual void inline_ov011_02187650_24(); virtual void inline_ov011_02187650_25(); virtual void inline_ov011_02187650_26(); virtual void inline_ov011_02187650_27();
    virtual void inline_ov011_02187650_28(); virtual void inline_ov011_02187650_29(); virtual void inline_ov011_02187650_30(); virtual void inline_ov011_02187650();
    virtual void inline_ov011_02187650_2(); virtual void inline_ov011_02187650_3(); virtual void inline_ov011_02187650_4(); virtual void inline_ov011_02187650_5();
    virtual void inline_ov011_02187650_6(); virtual void inline_ov011_02187650_7(); virtual void inline_ov011_02187650_8(); virtual void inline_ov011_02187650_9();
    virtual void inline_ov011_02187650_10(); virtual void inline_ov011_02187650_11(); virtual void inline_ov011_02187650_12(); virtual void inline_ov011_02187650_13();
    virtual void inline_ov011_02187650_14();
    virtual void inline_ov011_02187650_15(int arg0);
};

// USA: func_ov011_02187650
extern "C" ARM int func_ov011_02187650(struct Struct_ov011_02184c30* arg0) {
    int var0 = func_ov011_02184c30(arg0);
    int var1 = func_ov011_02184c30((struct Struct_ov011_02184c30*)((char*)arg0 + 8));
    Struct_ov011_02187650* var2 = (Struct_ov011_02187650*)func_ov023_021f6880(func_ov011_021849c8(func_ov017_021b2164()), var0);
    if (!var2) return 0;
    if (func_ov024_021f6f10(var2) != 7) return 0;
    var2->inline_ov011_02187650_15(var1);
    return 1;
}
