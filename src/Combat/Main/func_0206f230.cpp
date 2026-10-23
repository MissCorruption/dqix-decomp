#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"
#include "Resource/MonsterDefinition.h"

extern "C" char* func_020da150(SafeAllocator* arg0, const char* arg1);

extern Struct_0206f01c_2* data_02108d14;

// USA: func_0206f230
extern "C" ARM void func_0206f230(struct Struct_0206f01c_2* arg0, SafeAllocator* arg1,
#if defined(jpn)
                                          struct Struct_0206efd8* arg2, int arg3, short* arg4, int arg5) {
#else
                                          struct Struct_0206efd8* arg2, int arg3, short* arg4, int arg5,
                                          SafeAllocator* arg6, unsigned char* arg7) {
#endif
    short* var0;
    int var1;
    bool var2;
    int var3;
    unsigned char var4;
    struct Struct_0206ef48 var5;
    short var6[0x200];
    short var7;
    int var8;
    struct Struct_0206ef40* var9;
    short* var10;
    short var11;
    short* var12;
    int var13;
    struct Struct_0206ef40* var14;

    data_02108d14 = arg0;
    if (arg5 == 0) {
        return;
    }
    var4 = 0;
    func_0206f170(&var5, arg2, &var4, func_0206ef48);
    var7 = 0;
    for (var0 = arg4, var1 = 0; var1 < arg5; var1++, var0++) {
        var11 = *var0;
        if (func_0206f470(&var5.unknown_0_, var11,
                                     func_0206ef40) != NULL) {
            var12 = var6;
            var2 = true;
            for (var8 = 0; var8 < var7; var8++, var12++) {
                if (*var12 == var11) {
                    var2 = false;
                    break;
                }
                if (*var12 > var11) {
                    memmove(var12 + 1, var12, (var7 - var8) * sizeof(short));
                    break;
                }
            }
            if (var2) {
                *var12 = var11;
                var7 = var7 + 1;
                if (var7 >= 0x200) {
                    break;
                }
            }
        }
    }

    arg0->unknown_4_ = (struct Struct_0206ef40*)arg1->Allocate(var7 * sizeof(struct Struct_0206ef40));
    if (arg0->unknown_4_ == NULL) {
        return;
    }
#if !defined(jpn)
    if (arg6 != NULL && arg7 != NULL) {
        arg1->Allocate(0x80 - var7 * 8);
    }
#endif

    var3 = 0;
    var9 = arg0->unknown_4_;
    for (var10 = var6, var13 = 0; var13 < var7; var13++, var10++) {
        var14 = (struct Struct_0206ef40*)func_0206f470(
            &var5.unknown_0_, *var10, func_0206ef40);
        if (var14 == NULL) {
            continue;
        }
        memcpy(var9, var14, sizeof(struct Struct_0206ef40));
#if defined(jpn)
        var9->unknown1_0_ = func_020da150(arg1, var14->unknown1_0_);
#else
        if (arg6 != NULL && arg7 != NULL) {
            var9->unknown1_0_ = func_020da150(arg6, var14->unknown1_0_);
            var9->unknown_14_ = func_020da150(arg6, var14->unknown_14_);
            arg1->Allocate(arg7[var13]);
        } else {
            var9->unknown1_0_ = func_020da150(arg1, var14->unknown1_0_);
            var9->unknown_14_ = func_020da150(arg1, var14->unknown_14_);
        }
#endif
        var9->unknown_4_ = func_020da150(arg1, var14->unknown_4_);
        var9++;
        var3 = (short)(var3 + 1);
    }
    arg0->unknown_0_.unknown_0_0_ = var3;
}
