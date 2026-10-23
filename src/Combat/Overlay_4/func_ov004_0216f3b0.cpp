#include <globaldefs.h>
#include "Resource/GameResources.h"


extern "C" void* func_ov011_021845f8(void* arg0, int arg1);
extern "C" void func_ov011_021848a0(void* arg0, int arg1);
extern "C" void* func_ov017_021b1d44(void* arg0, int arg1, int arg2);
extern "C" void func_ov017_021b1e24(void* arg0, void* arg1);
struct Struct_ov004_0215883c_4;
extern "C" unsigned char func_ov017_021b2060(Struct_ov004_0215883c_4* arg0);
struct Struct_ov004_0215883c_3;
extern "C" unsigned char func_ov017_021b204c(Struct_ov004_0215883c_3* arg0);
extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" void* func_ov023_021f6880(void* arg0, int arg1);

struct Struct_ov004_02171048_4 { char unknown_0_[4]; unsigned char* unknown_4_; };
extern Struct_ov004_02171048_4 data_ov004_02171048;

// USA: func_ov004_0216f3b0
extern "C" ARM int func_ov004_0216f3b0(void* arg0) {
    void* var0 = GetGameResources();
#if defined(jpn)
    void* var1 = *(void**)((char*)var0 + 0x3000 + 0x4ec);
    void* var2 = *(void**)((char*)var0 + 0x3000 + 0x928);
#else
    void* var1 = *(void**)((char*)var0 + 0x3000 + 0x6fc);
    void* var2 = *(void**)((char*)var0 + 0x3000 + 0xb48);
#endif
    unsigned char var3 = data_ov004_02171048.unknown_4_[0x2e];

    if (var3 == 0) {
        void* var4 = func_ov011_021845f8(arg0, 1);
        if (!var4) {
            func_ov011_021848a0(arg0, 0xd2);
            data_ov004_02171048.unknown_4_[0x2e] = 0;
            return 0;
        }
        func_ov017_021b1d44(var2, 2, 1);
        *(void**)((char*)var2 + 8) = (char*)var4 + 4;
        data_ov004_02171048.unknown_4_[0x2e]++;
        goto returnOne;
    }

    if (var3 == 1) {
        func_ov017_021b1e24(var2, var1);
        if (func_ov017_021b2060((Struct_ov004_0215883c_4*)var2)) {
            if (func_ov017_021b204c((Struct_ov004_0215883c_3*)var2)) {
#if defined(jpn)
                if (*(int*)((char*)var0 + 0x4000 + 0x1e4) == 0) {
#else
                if (*(int*)((char*)var0 + 0x4000 + 0x494) == 0) {
#endif
                    func_ov011_021848a0(arg0, 0xcc);
                    return 0;
                }
            }
            if (!func_ov017_021b204c((Struct_ov004_0215883c_3*)var2)) {
                func_ov011_021848a0(arg0, 0xc9);
                data_ov004_02171048.unknown_4_[0x2e]++;

                void* var5 = func_ov011_021849c8(arg0);
                void* var6 = func_ov023_021f6880(var5, 0x97);
                if (var6) {
                    *(unsigned char*)((char*)var6 + 0xc) &= ~8;
                }
                return 0;
            }
        }
    }
returnOne:
    return 1;
}
