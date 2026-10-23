#include <globaldefs.h>

typedef void (*Type_ov027_021d8c94)(int, int, int);

extern void* data_ov027_021e33ec;

extern "C" int func_ov027_021d9bdc(void);
extern "C" void func_ov027_021d9e04(int arg0, short arg1);
extern "C" unsigned int func_ov027_021dd024();
extern "C" unsigned int func_ov027_021dd038();
extern "C" void func_020ca458(unsigned int value, void* dest, int count);
extern "C" void VectorizedMemset(void* dst, int val, int size);

extern "C" void func_ov027_021d8c20(int arg0, int arg1, int arg2);
extern "C" void func_ov027_021d9618(int arg0);
extern "C" void func_ov027_021dd5f4(int arg0);
extern "C" int func_ov027_021dd04c();
extern "C" void func_ov027_021dae40(int arg0, int arg1, int arg2);

struct Struct_ov027_021d8c94;
extern "C" void func_ov027_021dad14(Struct_ov027_021d8c94* arg0, int arg1, unsigned int arg2, int arg3);

// USA: func_ov027_021d8c94
extern "C" ARM void func_ov027_021d8c94(int arg0, void* arg1) {
    switch (arg0) {
    case 0x15:
        func_ov027_021d8c20(0, 1, (int)arg1);
        break;
    case 0: {
        unsigned short var0 = *(unsigned short*)((char*)arg1 + 0x10);
        if (var0 != 0 && var0 < 0x10) {
            func_ov027_021d8c20(var0, 2, (int)arg1);
        }
        break;
    }
    case 1: {
#define V (*(unsigned short*)((char*)arg1 + 0x10))
        unsigned short var1 = V;
        if (var1 != 0 && var1 < 0x10) {
            *(unsigned short*)((char*)data_ov027_021e33ec + (V - 1) * 2 + 0x1400 + 0x8a) = 0;
            VectorizedMemset((char*)data_ov027_021e33ec + 0x14a8 + (V - 1) * 4, 0, 4);
            VectorizedMemset((char*)data_ov027_021e33ec + 0x1340 + (V - 1) * 0x16, 0, 0x16);
            func_ov027_021dd5f4(V);
            *(unsigned short*)((char*)data_ov027_021e33ec + (V - 1) * 2 + 0x1700 + 0x54) = 0;
            {
                unsigned short var2 = V;
                int var3 = var2 - 1;
                signed char var4 = *(signed char*)((char*)data_ov027_021e33ec + var3 + 0x1500 + 0x26);
                if (var4 != -1) {
                    int var5 = ~(1 << var2);
                    int var6 = (unsigned char)var4 * 0x5d4;
                    *(unsigned short*)((char*)data_ov027_021e33ec + var6 + 0x1d00 + 0x4e) &= var5;
                    *(unsigned short*)((char*)data_ov027_021e33ec + var6 + 0x1d00 + 0x50) |= (1 << var2);
                    *(signed char*)((char*)data_ov027_021e33ec + var3 + 0x1000 + 0x526) = -1;
                    *(unsigned short*)((char*)data_ov027_021e33ec + var6 + 0x1d00 + 0x4c) &= var5;
                }
            }
            if (*(unsigned short*)((char*)data_ov027_021e33ec + 0x1500 + 0x36) & (1 << V)) {
                (*(unsigned char*)((char*)data_ov027_021e33ec + 0x1000 + 0x535))--;
                *(unsigned short*)((char*)data_ov027_021e33ec + 0x1500 + 0x36) &= ~(1 << V);
            }
            if (*(int*)((char*)data_ov027_021e33ec + (V - 1) * 4 + 0x1000 + 0x4e8) == 8) {
                func_ov027_021d8c20(V, 9, 0);
            }
            func_ov027_021d8c20(V, 3, (int)arg1);
            *(int*)((char*)data_ov027_021e33ec + (V - 1) * 4 + 0x1000 + 0x4e8) = 0;
        }
#undef V
        break;
    }
    case 3:
        func_ov027_021d9618((int)arg1);
        break;
    case 0x19:
        func_ov027_021d9bdc();
        break;
    case 0x1c: {
        unsigned char var7 = 0;
        do {
            int var8 = var7 * 0x5d4;
            if (*(unsigned char*)((char*)data_ov027_021e33ec + var8 + 0x1d52) != 0) {
                unsigned short var9 = *(unsigned short*)((char*)data_ov027_021e33ec + var8 + 0x1d50);
                if (var9 != 0) {
                    unsigned short var10 = *(unsigned short*)((char*)data_ov027_021e33ec + var8 + 0x1d4e);
                    func_ov027_021dad14((Struct_ov027_021d8c94*)((char*)data_ov027_021e33ec + 0x6c + 0x1800 + var8),
                        (int)((char*)data_ov027_021e33ec + 0x1340), var10, var9);
                    *(unsigned short*)((char*)data_ov027_021e33ec + var8 + 0x1d50) = 0;
                }
            }
            var7++;
        } while (var7 < 0x10);
        unsigned int var11 = func_ov027_021dd024();
        unsigned int var12 = func_ov027_021dd038();
        int var13 = func_ov027_021dd04c();
        func_ov027_021dae40(var11, var12, var13);
        break;
    }
    case 0xff: {
        unsigned short var14 = *(unsigned short*)((char*)arg1 + 0x2);
        switch (var14) {
        case 1: case 4: case 5: case 6: case 8: case 9:
            func_ov027_021d9e04(0, 9);
            break;
        case 0: case 2: case 3: case 7: case 10: case 11: case 12: case 13: case 14: case 15:
        default:
            func_ov027_021d9e04(0, 8);
            break;
        }
        break;
    }
    case 0x100: {
        unsigned short var15 = *(unsigned short*)((char*)arg1 + 0x0);
        switch (var15) {
        case 0: case 7: case 8: case 13: case 14: case 15: case 17: case 18: case 21: case 25: case 29:
            func_ov027_021d9e04(0, 9);
            break;
        case 1: case 2: case 3: case 4: case 5: case 6: case 9: case 10: case 11: case 12:
        case 16: case 19: case 20: case 22: case 23: case 24: case 26: case 27: case 28:
        default:
            func_ov027_021d9e04(0, 8);
            break;
        }
        break;
    }
    case 0x11:
    default:
        break;
    }

    if (arg0 == 0x11) {
        void* var16 = data_ov027_021e33ec;
        Type_ov027_021d8c94 var17 = *(Type_ov027_021d8c94*)((char*)var16 + 0x14e4);
        func_020ca458(0, var16, 0x7d00);
        data_ov027_021e33ec = 0;
        if (var17) var17(0, 0xc, 0);
    }
}
