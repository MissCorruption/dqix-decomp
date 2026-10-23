#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_02003418 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    unsigned char unknown_6_[2];
    int unknown_8_;
    int unknown_c_;
};
typedef char* Type_02003418;
typedef __typeof__((char*)0 - (char*)0) Type_02003418_2;
#define FORMAT_FOURBYTE_ALIGN02003418(n) (((unsigned long)(n) + 3U) & ~3U)
#define FORMAT_ARGUMENT02003418(ap, type) (*(type*)((ap += FORMAT_FOURBYTE_ALIGN02003418(sizeof(type))) - FORMAT_FOURBYTE_ALIGN02003418(sizeof(type))))
typedef int (*Type_02003418_3)(void*, const char*, unsigned int);
extern "C" const char* func_02001bdc(const char*, Type_02003418*, Struct_02003418*);
extern "C" char* func_0200216c(int, char*, Struct_02003418);
extern "C" char* func_020023b8(long long, char*, Struct_02003418);
extern "C" char* func_02002cb4(double, char*, Struct_02003418);
extern "C" char* func_020026b4(double, char*, Struct_02003418);
extern "C" int func_020019c8(char*, const unsigned short*, unsigned int);
extern "C" char* func_02001ac0(const char*, int, unsigned int);
extern const unsigned short data_020eef28[];
extern const char data_020eef2c[];

// USA: func_02003418
extern "C" ARM int func_02003418(Type_02003418_3 arg0, void* arg1, const char* arg2, Type_02003418 arg3) {
    char var0[1];
    char var1;
    Struct_02003418 var2;
    char var3[512];
    long long var4;
    const char* var5;
    const char* var6;
    int var7;
    int var8;
    int var9;
    int var10 = 0;
    var0[0] = ' ';
    if (*arg2) do {
        var5 = strchr(arg2, '%');
        if (var5 == 0) {
            unsigned int var11 = strlen(arg2);
            var10 += var11;
            if (var11 && !arg0(arg1, arg2, var11)) return -1;
            break;
        }
        unsigned int var12 = var5 - arg2;
        var10 += var12;
        if (var12 && !arg0(arg1, arg2, var12)) return -1;
        arg2 = func_02001bdc(var5, &arg3, &var2);
        switch (var2.unknown_5_) {
        case 'd': case 'i':
            if (var2.unknown_4_ == 3) var8 = FORMAT_ARGUMENT02003418(arg3, long);
            else if (var2.unknown_4_ == 4) var4 = FORMAT_ARGUMENT02003418(arg3, long long);
            else if (var2.unknown_4_ == 6) var4 = FORMAT_ARGUMENT02003418(arg3, long long);
            else if (var2.unknown_4_ == 7) var8 = FORMAT_ARGUMENT02003418(arg3, size_t);
            else if (var2.unknown_4_ == 8) var8 = FORMAT_ARGUMENT02003418(arg3, Type_02003418_2);
            else {
                var8 = FORMAT_ARGUMENT02003418(arg3, int);
            }
            if (var2.unknown_4_ == 2) var8 = (short)var8;
            if (var2.unknown_4_ == 1) var8 = (signed char)var8;
            if (var2.unknown_4_ == 4 || var2.unknown_4_ == 6) {
                var6 = func_020023b8(var4, var3 + sizeof(var3), var2);
                if (var6 == 0) goto invalid;
            } else {
                var6 = func_0200216c(var8, var3 + sizeof(var3), var2);
                if (var6 == 0) goto invalid;
            }
            var9 = var3 + sizeof(var3) - 1 - var6;
            break;
        case 'o': case 'u': case 'x': case 'X':
            if (var2.unknown_4_ == 3) var8 = FORMAT_ARGUMENT02003418(arg3, unsigned long);
            else if (var2.unknown_4_ == 4) var4 = FORMAT_ARGUMENT02003418(arg3, unsigned long long);
            else if (var2.unknown_4_ == 6) var4 = FORMAT_ARGUMENT02003418(arg3, unsigned long long);
            else if (var2.unknown_4_ == 7) var8 = FORMAT_ARGUMENT02003418(arg3, size_t);
            else if (var2.unknown_4_ == 8) var8 = FORMAT_ARGUMENT02003418(arg3, Type_02003418_2);
            else {
                var8 = FORMAT_ARGUMENT02003418(arg3, unsigned int);
            }
            if (var2.unknown_4_ == 2) var8 = (unsigned short)var8;
            if (var2.unknown_4_ == 1) var8 = (unsigned char)var8;
            if (var2.unknown_4_ == 4 || var2.unknown_4_ == 6) {
                var6 = func_020023b8(var4, var3 + sizeof(var3), var2);
                if (var6 == 0) goto invalid;
            } else {
                var6 = func_0200216c(var8, var3 + sizeof(var3), var2);
                if (var6 == 0) goto invalid;
            }
            var9 = var3 + sizeof(var3) - 1 - var6;
            break;
        case 'e': case 'E': case 'f': case 'F': case 'g': case 'G': {
            long double var13;
            if (var2.unknown_4_ == 9) {
                var13 = FORMAT_ARGUMENT02003418(arg3, long double);
            } else {
                var13 = FORMAT_ARGUMENT02003418(arg3, double);
            }
            var6 = func_02002cb4(var13, var3 + sizeof(var3), var2);
            if (var6 == 0) goto invalid;
            var9 = var3 + sizeof(var3) - 1 - var6;
            break;
        }
        case 'a': case 'A': {
            long double var14;
            if (var2.unknown_4_ == 9) {
                var14 = FORMAT_ARGUMENT02003418(arg3, long double);
            } else {
                var14 = FORMAT_ARGUMENT02003418(arg3, double);
            }
            var6 = func_020026b4(var14, var3 + sizeof(var3), var2);
            if (var6 == 0) goto invalid;
            var9 = var3 + sizeof(var3) - 1 - var6;
            break;
        }
        case 's':
            if (var2.unknown_4_ == 5) {
                const unsigned short* var15 = FORMAT_ARGUMENT02003418(arg3, const unsigned short*);
                if (var15 == 0) var15 = data_020eef28;
                if (func_020019c8(var3, var15, sizeof(var3)) < 0) goto invalid;
                var6 = var3;
            } else var6 = FORMAT_ARGUMENT02003418(arg3, char*);
            if (var6 == 0) var6 = data_020eef2c;
            if (var2.unknown_3_) {
                var9 = (unsigned char)*var6++;
                if (var2.unknown_2_ && var9 > var2.unknown_c_) var9 = var2.unknown_c_;
            } else if (var2.unknown_2_) {
                var9 = var2.unknown_c_;
                const char* var16 = func_02001ac0(var6, 0, var9);
                if (var16) var9 = var16 - var6;
            } else var9 = strlen(var6);
            break;
        case 'n': {
            void* var17 = FORMAT_ARGUMENT02003418(arg3, void*);
            switch (var2.unknown_4_) {
            case 0: *(int*)var17 = var10; break;
            case 2: *(short*)var17 = var10; break;
            case 3: *(long*)var17 = var10; break;
            case 6: *(long long*)var17 = var10; break;
            case 7: *(size_t*)var17 = var10; break;
            case 8: *(Type_02003418_2*)var17 = var10; break;
            case 4: *(long long*)var17 = var10; break;
            default: goto next;
            }
            goto next;
        }
        case 'c':
            var3[0] = FORMAT_ARGUMENT02003418(arg3, int);
            var6 = var3;
            var9 = 1;
            break;
        case '%':
            var3[0] = '%';
            var6 = var3;
            var9 = 1;
            break;
        case 255:
        default:
        invalid:
            {
                int var18 = strlen(var5);
                if (var18 && !arg0(arg1, var5, var18)) return -1;
                return var10 + var18;
            }
        }
        var7 = var9;
        if (var2.unknown_0_) {
            var0[0] = var2.unknown_0_ == 2 ? '0' : ' ';
            if ((*var6 == '+' || *var6 == '-' || *var6 == ' ') && var0[0] == '0') {
                if (!arg0(arg1, var6, 1)) return -1;
                var6++;
                var9--;
            }
            if (var7 < var2.unknown_8_) do {
                if (!arg0(arg1, var0, 1)) return -1;
                var7++;
            } while (var7 < var2.unknown_8_);
        }
        if (var9 && !arg0(arg1, var6, var9)) return -1;
        if (var2.unknown_0_ == 0 && var7 < var2.unknown_8_) {
            do {
                var1 = ' ';
                if (!arg0(arg1, &var1, 1)) return -1;
                var7++;
            } while (var7 < var2.unknown_8_);
        }
        var10 += var7;
    next:;
    } while (*arg2);
    return var10;
}
