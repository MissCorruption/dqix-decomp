#include <globaldefs.h>

struct Struct_ov004_02155d54 { int unknown_0_, unknown_4_, unknown_8_; };

class Struct_ov004_02155d54_3 {
public:
    virtual void inline_ov004_02155d54(); virtual void inline_ov004_02155d54_2(); virtual void inline_ov004_02155d54_3(); virtual void inline_ov004_02155d54_4();
    virtual void inline_ov004_02155d54_5(); virtual void inline_ov004_02155d54_6(); virtual void inline_ov004_02155d54_7();
    virtual void inline_ov004_02155d54_8(const Struct_ov004_02155d54& arg0);
    virtual Struct_ov004_02155d54 inline_ov004_02155d54_9();
};

struct Struct_ov004_02155d54_2 {
    unsigned char unknown_0_[0xe];
    unsigned short unknown_e_;
};
extern Struct_ov004_02155d54_2* data_ov004_021707c4;

extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" Struct_ov004_02155d54_3* func_ov023_021f6880(void* arg0, int arg1);
extern "C" void func_ov023_021f9da0(void* arg0, unsigned char arg1);
extern "C" int func_ov004_0215513c(void* arg0, short* arg1, short* arg2, short* arg3);
extern "C" int func_ov004_02155090(void);
extern "C" int func_ov004_02155104(void);
extern "C" int func_ov023_021f6378(void* arg0, int arg1);
extern "C" void* func_ov023_021f63ac(void* arg0, int arg1, int arg2);
extern "C" void func_ov023_021f645c(void* arg0, int arg1, unsigned short arg2, int arg3);
extern "C" void func_ov023_021f64a8(void* arg0, int arg1, unsigned short arg2, int arg3);
extern "C" int func_ov023_021f6680(void* arg0, int arg1);

// USA: func_ov004_02155d54
extern "C" ARM int func_ov004_02155d54(void* arg0) {
    func_ov023_021f9da0(func_ov023_021f6880(func_ov011_021849c8(arg0), 5), 1);

    short var0, var1, var2;
    func_ov004_0215513c(arg0, &var0, &var1, &var2);

    unsigned short var3;
    unsigned short var4 = 0xd;
    if (var0 == 0) {
        var3 = (short)data_ov004_021707c4->unknown_e_;
    } else if (var1 == 8) {
        var3 = func_ov004_02155090();
        var4 = 0xe;
    } else {
        var3 = func_ov004_02155104();
        var4 = 0xf;
    }

#if !defined(jpn)
    Struct_ov004_02155d54_3* var5 = func_ov023_021f6880(func_ov011_021849c8(arg0), 0x14);
    if (var5) {
        char* var6 = (char*)func_ov023_021f63ac(arg0, 4, func_ov023_021f6378(arg0, 0x19));
        if (var6 == 0 || *var6 == 0) {
            Struct_ov004_02155d54_3* var7 = func_ov023_021f6880(func_ov011_021849c8(arg0), 0x19);
            if (var7) {
                const Struct_ov004_02155d54& var8 = var7->inline_ov004_02155d54_9();
                var5->inline_ov004_02155d54_8(var8);
            }
        }
    }
#endif

    func_ov023_021f645c(arg0, 7, var4, 0xf);
    func_ov023_021f64a8(arg0, 0x14, var3, 0xf);
    func_ov023_021f6680(arg0, 0x10);
    return 0;
}
