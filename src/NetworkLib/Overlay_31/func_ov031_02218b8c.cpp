#include <globaldefs.h>
#include "std_library_functions.h"
#include "NitroSDK/Memory.h"

struct Struct_ov031_02218b8c { char* unknown_0_; char* unknown_4_; };
struct Struct_ov031_02218b8c_2 { Struct_ov031_02218b8c* unknown_0_; int unknown_4_; int unknown_8_; };
extern char data_ov031_02249df8[];
extern char data_ov031_02249fb8[];
extern char data_ov031_02249fbc[];
extern char data_ov031_02249fc8[];
extern char data_ov031_02249e28[];
extern char data_ov031_02249fcc[];
extern char data_ov031_02249fd0[];
extern char data_ov031_02249fd4[];
extern "C" int func_ov031_02218a38(void* arg0, Struct_ov031_02218b8c_2* arg1, const char* arg2, const char* arg3);

// USA: func_ov031_02218b8c
extern "C" ARM int func_ov031_02218b8c(void* arg0, int arg1) {
    Struct_ov031_02218b8c_2 var0;
    char* var1;
    char* var2;
    char* var3;
    char* var4;
    char var5;
    char var6;
    char* var7;
    char var8;
    char* var9;
    char* var10;
    char* var11;
    char* var12;
    char var13;
    char* var14;
    char* var15;
    char* var16;
    int var17;
    var0.unknown_0_ = (Struct_ov031_02218b8c*)((char*)arg0 + 0x1000 + 0xa38);
    var0.unknown_4_ = 0x20;
    var0.unknown_8_ = 0;
    VectorizedMemset(var0.unknown_0_, 0, 0x100);
    var1 = *(char**)((char*)arg0 + 0x1000 + 0xa08);
    var2 = strstr(var1, data_ov031_02249df8);
    if (var2 == NULL) return 0;
    var3 = var2 + 4 + strlen(var2 + 4);
    var4 = strstr(var1, data_ov031_02249fb8);
    if (var4 == NULL) return 0;
    var5 = var4[4];
    var4[4] = 0;
    if (func_ov031_02218a38(arg0, &var0, data_ov031_02249fbc, var4 + 1) != 1) {
        var4[4] = var5;
        return 0;
    }
    var4[4] = var5;
    if (arg1 == 1 || strncmp(var4 + 1, data_ov031_02249fc8, 3) != 0) return 1;
    var9 = strstr(var4 + 5, data_ov031_02249e28);
    if (var9 == NULL) return 0;
    var9 += 2;
    while (var9[0] != '\r' && var9[1] != '\n') {
        var15 = strstr(var9, data_ov031_02249fcc);
        if (var15 == NULL) break;
        var6 = *var15;
        var10 = var15 + 2;
        *var15 = 0;
        var16 = strstr(var10, data_ov031_02249e28);
        if (var16 == NULL) {
            *var15 = var6;
            break;
        }
        var8 = *var16;
        *var16 = 0;
        if (func_ov031_02218a38(arg0, &var0, var9, var10) != 1) {
            *var15 = var6;
            *var16 = var8;
            return 0;
        }
        var17 = strlen(var10);
        *var15 = var6;
        *var16 = var8;
        var9 = var10 + var17 + 2;
    }
    var12 = var2 + 4;
    if (var12 < var3) do {
        var7 = strstr(var12, data_ov031_02249fd0);
        if (var7 == NULL) break;
        var13 = *var7;
        var11 = var7 + 1;
        *var7 = 0;
        var14 = strstr(var11, data_ov031_02249fd4);
        if (var14 == NULL) var14 = strstr(var11, data_ov031_02249e28);
        if (var14 != NULL) {
            var8 = *var14;
            *var14 = 0;
        }
        if (func_ov031_02218a38(arg0, &var0, var12, var11) != 1) {
            *var7 = var13;
            if (var14 != NULL) *var14 = var8;
            return 0;
        }
        var17 = strlen(var11);
        *var7 = var13;
        if (var14 != NULL) *var14 = var8;
        var12 = var11 + var17 + 1;
    } while (var12 < var3);
    return 1;
}
