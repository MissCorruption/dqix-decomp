#include <globaldefs.h>

extern "C" void* func_ov011_021849c8(void*);

class Struct_ov004_0216b20c {
public:
    virtual void inline_ov004_0216b20c(); virtual void inline_ov004_0216b20c_2(); virtual void inline_ov004_0216b20c_3(); virtual void inline_ov004_0216b20c_4();
    virtual void inline_ov004_0216b20c_5(); virtual void inline_ov004_0216b20c_6(); virtual void inline_ov004_0216b20c_7(); virtual void inline_ov004_0216b20c_8();
    virtual void inline_ov004_0216b20c_9(); virtual void inline_ov004_0216b20c_10(); virtual void inline_ov004_0216b20c_11(); virtual void inline_ov004_0216b20c_12();
    virtual void inline_ov004_0216b20c_13(); virtual void inline_ov004_0216b20c_14(); virtual void inline_ov004_0216b20c_15(); virtual void inline_ov004_0216b20c_16();
    virtual void inline_ov004_0216b20c_17();
    virtual void inline_ov004_0216b20c_18(int arg0);
    virtual void inline_ov004_0216b20c_19(); virtual void inline_ov004_0216b20c_20(); virtual void inline_ov004_0216b20c_21(); virtual void inline_ov004_0216b20c_22();
    virtual void inline_ov004_0216b20c_23(); virtual void inline_ov004_0216b20c_24(); virtual void inline_ov004_0216b20c_25(); virtual void inline_ov004_0216b20c_26();
    virtual void inline_ov004_0216b20c_27(); virtual void inline_ov004_0216b20c_28(); virtual void inline_ov004_0216b20c_29(); virtual void inline_ov004_0216b20c_30();
    virtual void inline_ov004_0216b20c_31();
    virtual void inline_ov004_0216b20c_32(int arg0);
};
extern "C" Struct_ov004_0216b20c* func_ov023_021f6880(void*, int);

// USA: func_ov004_0216b20c
extern "C" ARM void func_ov004_0216b20c(void* arg0, int arg1, int arg2, int arg3) {
    Struct_ov004_0216b20c* var0 = func_ov023_021f6880(func_ov011_021849c8(arg0), arg1);
    if (!var0) return;
    if (arg3 != 0) goto merge;
    if (arg2 > 0xc8) goto big;
    if (arg2 >= 0xc8) goto is200;
    if (arg2 > 0x64) goto mid;
    if (arg2 == 0x64) arg2 = 0x15;
    goto merge;
mid:
    if (arg2 > 0x97) goto merge;
    if (arg2 < 0x96) goto merge;
    if (arg2 == 0x96) goto is150;
    if (arg2 == 0x97) arg2 = 0x17;
    goto merge;
big:
    if (arg2 > 0xc9) goto is300;
    if (arg2 == 0xc9) arg2 = 0x19;
    goto merge;
is300:
    if (arg2 == 0x12c) arg2 = 0x1a;
    goto merge;
is150:
    arg2 = 0x16;
    goto merge;
is200:
    arg2 = 0x18;
merge:
    var0->inline_ov004_0216b20c_18(arg2);
    var0->inline_ov004_0216b20c_32(arg2);
}
