#include <globaldefs.h>

extern char data_021015a0;
extern char data_021017a0;
extern char data_02101f80;

extern "C" void func_0202cb50();
extern "C" void func_0202c848(int arg0);
extern "C" int func_020d559c(int arg0, unsigned int arg1);
extern "C" int func_020d5898(int arg0, int arg1, int arg2, int arg3, unsigned short arg4, unsigned short arg5);

// USA: func_0202c9ac
extern "C" ARM void func_0202c9ac(unsigned short* arg0) {
    unsigned short var0 = 1 << arg0[8];
    unsigned short var1 = arg0[1];
    if (var1 != 0) {
        func_0202c848(var1);
        *(int*)(&data_021015a0 + 0x10) = 9;
        return;
    }
    switch (arg0[4]) {
    case 7: {
        int (*var2)(void*) = *(int (**)(void*))((char*)&data_021015a0 + 0x24);
        if (var2 != 0 && var2(arg0) == 0) {
            int var3 = func_020d559c(0, arg0[8]);
            if (var3 == 2) return;
            func_0202c848(var3);
            *(int*)(&data_021015a0 + 0x10) = 9;
            return;
        }
        *(unsigned short*)((char*)&data_021015a0 + 0xa) = *(unsigned short*)((char*)&data_021015a0 + 0xa) | var0;
        void (*var4)(unsigned short*) =
            *(void (**)(unsigned short*))((char*)&data_021015a0 + 0x18);
        if (var4 != 0) var4(arg0);
        return;
        }
    case 9: {
        *(unsigned short*)((char*)&data_021015a0 + 0xa) = *(unsigned short*)((char*)&data_021015a0 + 0xa) & ~var0;
        void (*var5)(unsigned short*) =
            *(void (**)(unsigned short*))((char*)&data_021015a0 + 0x18);
        if (var5 != 0) var5(arg0);
        return;
        }
    case 0: {
        int var6 = *(int*)(&data_021015a0 + 0x10);
        int var7;
        int var8;
        if (!(var6 != 4 && var6 != 6 && var6 != 5)) { var7 = 1; goto done0; }
        *(int*)(&data_021015a0 + 0x10) = 4;
        var8 = func_020d5898((int)func_0202cb50, (int)&data_02101f80,
                                     (unsigned short)*(int*)((char*)&data_021015a0 + 0x2c),
                                     (int)&data_021017a0,
                                     (unsigned short)*(int*)((char*)&data_021015a0 + 0x38),
                                     1);
        if (var8 == 2) { var7 = 1; goto done0; }
        func_0202c848(var8);
        var7 = 0;
    done0:
        if (var7 == 0) { *(int*)(&data_021015a0 + 0x10) = 9; }
        return;
        }
    case 2:
        break;
    case 26:
        break;
    }
}
