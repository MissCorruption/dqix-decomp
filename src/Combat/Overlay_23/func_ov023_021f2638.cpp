#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"

extern "C" void func_02046380(void);
extern "C" int func_020421a0(void);
extern "C" void* func_0202ae18(void);
extern "C" void* func_02012fe4(void);
extern "C" unsigned char func_020114ec(char* arg0, void* arg1);
extern "C" int func_020a35e0(unsigned char* arg0, unsigned char arg1);
extern "C" int func_ov023_021f4438(void* arg0);
struct Struct_02072a68_2;
extern "C" void* func_02072a68(struct Struct_02072a68_2* arg0, int arg1);
struct Struct_020465c0;
extern "C" void func_020465c0(struct Struct_020465c0* arg0, int arg1, int arg2);
extern "C" int func_0201b5d8(int arg0);
#if defined(jpn)
extern "C" void func_0204500c(void* arg0, char* arg1, int arg2);
#else
extern "C" void func_0204500c(void* arg0, char* arg1, int arg2, int arg3);
#endif
extern "C" int func_ov023_021f4fc8(void);
struct Struct_ov023_021eeaac_2;
extern "C" void func_ov023_021eefac(struct Struct_ov023_021eeaac_2* arg0);

extern "C" int* _ZZ21inline_ov023_021f4c04vE1s;

// USA: func_ov023_021f2638
extern "C" ARM int func_ov023_021f2638(unsigned char* arg0) {
#if defined(jpn)
    GameState* var0 = GameState::GetInstance();
    int* var1 = _ZZ21inline_ov023_021f4c04vE1s;
    int var2 = func_020421a0();
    unsigned char* var3 = (unsigned char*)var2;
    func_0202ae18();
    void* var4 = func_02012fe4();
    int var5 = *var1;

    if (var5 == 0) {
        if (*(int*)(arg0 + 0x5958) != 0) {
            char var6[0x100];
            int var7 = func_ov023_021f4438(arg0);
            char* var8 = (char*)func_02072a68((struct Struct_02072a68_2*)(arg0 + 0x5af4), 0x10);
            sprintf(var6, var8, *(int*)(arg0 + 0x5958));
            int var9 = 0;
            if (*(unsigned char*)(arg0 + 0x5af0) == 0 && *(int*)(arg0 + 0x7014) != 0) {
                if (func_0201b5d8(*(unsigned short*)var4) != 0) var9 = 1;
            }
            if (var7 != 0 && var9 == 0) {
                char* var10 = (char*)func_02072a68((struct Struct_02072a68_2*)(arg0 + 0x5af4), 0x22);
                strcat(var6, var10);
            }
            func_0204500c(var3, var6, 1);
            var3[0x17e2] = 0;
            *(int*)(var3 + 0x868) = 1;
        } else {
            *var1 = 2;
            return *(int*)(arg0 + 0xe28);
        }
        *var1 = *var1 + 1;
    } else if (var5 == 1) {
        if (func_ov023_021f4fc8() != 0 || *(int*)(var3 + 0x868) == 0) {
            *var1 = *var1 + 1;
        }
    } else if (var5 == 2) {
        func_ov023_021eefac((struct Struct_ov023_021eeaac_2*)var1);
        if (*(unsigned char*)(arg0 + 0x5af0) != 0 || *(int*)(arg0 + 0x7014) != 0) {
            int var11 = func_ov023_021f4438(arg0);
            if (var11 != 0) return 0xd;
            *(int*)(arg0 + 0x7014) = 0;
        }
        return 0xe;
    }
    return *(int*)(arg0 + 0xe28);
#else
    GameState* var12 = GameState::GetInstance();
    int* var13 = _ZZ21inline_ov023_021f4c04vE1s;
    int var14 = func_020421a0();
    unsigned char* var15 = (unsigned char*)var14;
    func_02046380();
    func_0202ae18();
    void* var16 = func_02012fe4();
    int var17 = *var13;

    if (var17 == 0) {
        if (*(int*)(arg0 + 0x5768) != 0) {
            char var18[0x100];
            unsigned char var19[4];
            GameObject* var20;
            int var21 = func_020114ec((char*)var12, var19);
            unsigned char var22 = 0;
            unsigned char var23 = 0;
            int var24;
            for (var24 = 0; var24 < var21; var24++) {
                var20 = var12->GetCombatantByIndex(var19[var24]);
                if (var20 == NULL) continue;
                if (!func_020a35e0(*(unsigned char**)(arg0 + 0x2a0), var19[var24])) continue;
                var23 = var23 + 1;
                void* var25 = *(void**)((char*)var20 + 0x130);
                if ((*(int*)var25 & 1) == 0) var22 = var22 + 1;
            }
            var15[0x30] = var23;
            var15[0x31] = var22;
            int var26 = func_ov023_021f4438(arg0);
            char* var27 = (char*)func_02072a68((struct Struct_02072a68_2*)(arg0 + 0x5904), 0x10);
            sprintf(var18, var27);
            func_020465c0((struct Struct_020465c0*)var15, 0, *(int*)(arg0 + 0x5768));
            int var28 = 0;
            if (*(unsigned char*)(arg0 + 0x5900) == 0 && *(int*)(arg0 + 0x6e24) != 0) {
                if (func_0201b5d8(*(unsigned short*)var16) != 0) var28 = 1;
            }
            if (var26 != 0 && var28 == 0) {
                char* var29 = (char*)func_02072a68((struct Struct_02072a68_2*)(arg0 + 0x5904), 0x22);
                strcat(var18, var29);
            }
            func_0204500c(var15, var18, 1, 0xe3);
            var15[0x19b2] = 0;
            *(int*)(var15 + 0x998) = 1;
        } else {
            *var13 = 2;
            return *(int*)(arg0 + 0xeac);
        }
        *var13 = *var13 + 1;
    } else if (var17 == 1) {
        if (func_ov023_021f4fc8() != 0 || *(int*)(var15 + 0x998) == 0) {
            *var13 = *var13 + 1;
        }
    } else if (var17 == 2) {
        func_ov023_021eefac((struct Struct_ov023_021eeaac_2*)var13);
        if (*(unsigned char*)(arg0 + 0x5900) != 0 || *(int*)(arg0 + 0x6e24) != 0) {
            int var30 = func_ov023_021f4438(arg0);
            if (var30 != 0) return 0xd;
            *(int*)(arg0 + 0x6e24) = 0;
        }
        return 0xe;
    }
    return *(int*)(arg0 + 0xeac);
#endif
}
