#include <globaldefs.h>

extern "C" int func_ov004_0215513c(void* arg0, short* arg1, short* arg2, short* arg3);
extern "C" void func_ov023_021f645c(void* arg0, int arg1, unsigned short arg2, int arg3);
extern unsigned char* data_ov004_021707c4;
extern unsigned short data_ov004_0216fadc[];
extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void*, int);
extern "C" void func_ov023_021e1518(void* arg0);
extern "C" void func_ov023_021e1814(void* arg0, void* arg1, int arg2, int arg3, int arg4);
extern "C" void func_ov023_021e1870(void* arg0, void* arg1, int arg2, int arg3, int arg4);

class Struct_ov004_02155a3c {
public:
    virtual void inline_ov004_02155a3c_43(); virtual void inline_ov004_02155a3c_44(); virtual void inline_ov004_02155a3c_45(); virtual void inline_ov004_02155a3c_46();
    virtual void inline_ov004_02155a3c_47(); virtual void inline_ov004_02155a3c_48(); virtual void inline_ov004_02155a3c_49(); virtual void inline_ov004_02155a3c_50();
    virtual void inline_ov004_02155a3c_51(); virtual void inline_ov004_02155a3c_52(); virtual void inline_ov004_02155a3c_53(); virtual void inline_ov004_02155a3c_54();
    virtual void inline_ov004_02155a3c_55(); virtual void inline_ov004_02155a3c_56(); virtual void inline_ov004_02155a3c_57(); virtual void inline_ov004_02155a3c_58();
    virtual void inline_ov004_02155a3c_59(); virtual void inline_ov004_02155a3c_60(); virtual void inline_ov004_02155a3c(); virtual void inline_ov004_02155a3c_2();
    virtual void inline_ov004_02155a3c_3(); virtual void inline_ov004_02155a3c_4(); virtual void inline_ov004_02155a3c_5(); virtual void inline_ov004_02155a3c_6();
    virtual void inline_ov004_02155a3c_7(); virtual void inline_ov004_02155a3c_8(); virtual void inline_ov004_02155a3c_9(); virtual void inline_ov004_02155a3c_10();
    virtual void inline_ov004_02155a3c_11(); virtual void inline_ov004_02155a3c_12(); virtual void inline_ov004_02155a3c_13(); virtual void inline_ov004_02155a3c_14();
    virtual void inline_ov004_02155a3c_15(); virtual void inline_ov004_02155a3c_16(); virtual void inline_ov004_02155a3c_17(); virtual void inline_ov004_02155a3c_18();
    virtual void inline_ov004_02155a3c_19(); virtual void inline_ov004_02155a3c_20(); virtual void inline_ov004_02155a3c_21(); virtual void inline_ov004_02155a3c_22();
    virtual void inline_ov004_02155a3c_23(); virtual void inline_ov004_02155a3c_24(); virtual void inline_ov004_02155a3c_25(); virtual void inline_ov004_02155a3c_26();
    virtual void inline_ov004_02155a3c_27(); virtual void inline_ov004_02155a3c_28(); virtual void inline_ov004_02155a3c_29(); virtual void inline_ov004_02155a3c_30();
    virtual void inline_ov004_02155a3c_31(); virtual void inline_ov004_02155a3c_32(); virtual void inline_ov004_02155a3c_33(); virtual void inline_ov004_02155a3c_34();
    virtual void inline_ov004_02155a3c_35(); virtual void inline_ov004_02155a3c_36(); virtual void inline_ov004_02155a3c_37(); virtual void inline_ov004_02155a3c_38();
    virtual void inline_ov004_02155a3c_39(); virtual void inline_ov004_02155a3c_40(); virtual void inline_ov004_02155a3c_41();
    virtual void* inline_ov004_02155a3c_42();
};

// USA: func_ov004_02155a3c
extern "C" ARM int func_ov004_02155a3c(void* arg0) {
    short var0, var1, var2;
    func_ov004_0215513c(arg0, &var0, &var1, &var2);

    unsigned short var3 = 7;
    if (var0 != 0 && var1 >= 0) {
        if (var1 == 8) var3 = 5;
        if (var1 == 9) var3 = 6;
    }

    func_ov023_021f645c(arg0, 0x34, var3, 0xf);

    unsigned char var4 = data_ov004_021707c4[0x10];
    unsigned short var5 = data_ov004_0216fadc[var4];
    func_ov023_021f645c(arg0, 0x35, var5, 0xf);

    int var6 = (data_ov004_021707c4[0x10] == 0) ? 1 : 0;

    Struct_ov004_02155a3c* var7 = (Struct_ov004_02155a3c*)func_ov023_021f6880(func_ov011_021849c8(arg0), 0x39);
    if (var7) {
        short var8, var9, var10;
        func_ov004_0215513c(arg0, &var10, &var9, &var8);

        void* var11 = var7->inline_ov004_02155a3c_42();
        if (var11) {
            func_ov023_021e1518(var11);
            if (var6) {
                func_ov023_021e1814(var11, (void*)(int)var10, var9, var8, 1);
            } else {
                func_ov023_021e1870(var11, (void*)(int)var10, var9, var8, 1);
            }
        }
    }
    return 0;
}
