#include <globaldefs.h>

extern "C" void func_020bf1a0(void* arg0);
struct Struct_020bcb70;
extern "C" void func_020bcb70(Struct_020bcb70*);
struct Struct_020bcbe0;
extern "C" void func_020bcbe0(Struct_020bcbe0*, void*);
struct Struct_020bc180_2;
extern "C" void func_020c0260(Struct_020bc180_2*);
extern "C" int func_020c022c(Struct_020bc180_2*);
struct Struct_020bc2f0;
extern "C" int func_020c0278(Struct_020bc2f0*);

struct Struct_02110a4c_3 { unsigned char unknown_0_[0x174]; };
extern struct Struct_02110a4c_3 data_02110a4c[];
extern short data_020ed82c[];

// USA: func_020bed10
extern "C" ARM void func_020bed10(void) {
    int var0 = 0;
    int var1;
    unsigned char* var2 = (unsigned char*)data_02110a4c;
LOOP_START:;
    {
        int var3 = *(int*)(var2 + 0x110);
        if (((var3 << 31) >> 31) == 0) {
            goto LOOP_CONTINUE;
        }
        if (*(int*)(var2 + 0x114) == 0) {
            func_020bf1a0(var2);
            goto LOOP_CONTINUE;
        }

        if (((var3 << 29) >> 31) != 0 && *(int*)(var2 + 0x118) != 0) {
            func_020bcb70((Struct_020bcb70*)var2);
            int var4 = *(int*)(var2 + 0x110);
            var4 = (var4 | 2) & ~4;
            *(int*)(var2 + 0x110) = var4;
        }

        int var5 = *(int*)(var2 + 0x110);
        if (((var5 << 30) >> 31) == 0) {
            goto LOOP_CONTINUE;
        }
        func_020c0260((Struct_020bc180_2*)(var2 + 0xe8));
        var1 = data_020ed82c[*(int*)(var2 + 0x154)];
        int var6 = func_020c022c((Struct_020bc180_2*)(var2 + 0xe8));
        int var7 = data_020ed82c[var6 >> 8];
        int var8 = data_020ed82c[*(int*)(var2 + 0x158)];
        int var9 = var8 + (var7 + var1);
        if (var9 != *(int*)(var2 + 0x15c)) {
            func_020bcbe0((Struct_020bcbe0*)var2, (void*)var9);
            *(int*)(var2 + 0x15c) = var9;
        }

        int var10 = *(int*)(var2 + 0x110);
        if (((var10 << 28) >> 31) == 0) {
            goto LOOP_CONTINUE;
        }
        if (func_020c0278((Struct_020bc2f0*)(var2 + 0xe8)) == 0) {
            goto LOOP_CONTINUE;
        }
        func_020bf1a0(var2);
    }
LOOP_CONTINUE:;
    var0++;
    var2 += 0x174;
    if (var0 < 4) {
        goto LOOP_START;
    }
}
