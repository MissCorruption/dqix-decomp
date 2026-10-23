#include <globaldefs.h>

struct Struct_ov011_02184c30;
extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);

extern "C" void* func_ov017_021b2164(void);
extern "C" void* func_ov011_021849c8(void*);

class Struct_ov011_021874d0 {
public:
    virtual void inline_ov011_021874d0(); virtual void inline_ov011_021874d0_2(); virtual void inline_ov011_021874d0_3(); virtual void inline_ov011_021874d0_4();
    virtual void inline_ov011_021874d0_5(); virtual void inline_ov011_021874d0_6(); virtual void inline_ov011_021874d0_7(); virtual void inline_ov011_021874d0_8();
    virtual void inline_ov011_021874d0_9(); virtual void inline_ov011_021874d0_10(); virtual void inline_ov011_021874d0_11(); virtual void inline_ov011_021874d0_12();
    virtual void inline_ov011_021874d0_13(); virtual void inline_ov011_021874d0_14(); virtual void inline_ov011_021874d0_15(); virtual void inline_ov011_021874d0_16();
    virtual void inline_ov011_021874d0_17(); virtual void inline_ov011_021874d0_18(); virtual void inline_ov011_021874d0_19(); virtual void inline_ov011_021874d0_20();
    virtual void inline_ov011_021874d0_21(); virtual void inline_ov011_021874d0_22(); virtual void inline_ov011_021874d0_23(); virtual void inline_ov011_021874d0_24();
    virtual void inline_ov011_021874d0_25();
    virtual void inline_ov011_021874d0_26(int arg0);
    virtual void inline_ov011_021874d0_27();
    virtual void inline_ov011_021874d0_28(int arg0);
};
extern "C" struct Struct_ov011_021874d0* func_ov023_021f6880(void*, int);

// USA: func_ov011_021874d0
extern "C" ARM int func_ov011_021874d0(struct Struct_ov011_02184c30* arg0) {
    int var0 = func_ov011_02184c30(arg0);
    int var1 = func_ov011_02184c30((struct Struct_ov011_02184c30*)((char*)arg0 + 8));
    int var2 = func_ov011_02184c30((struct Struct_ov011_02184c30*)((char*)arg0 + 0x10));
    struct Struct_ov011_021874d0* var3 = func_ov023_021f6880(func_ov011_021849c8(func_ov017_021b2164()), var0);
    if (var3) {
        var3->inline_ov011_021874d0_26(var1);
        var3->inline_ov011_021874d0_28(var2);
    }
    return 1;
}
