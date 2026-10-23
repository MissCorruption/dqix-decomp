#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"

struct Struct_020df850;
struct Struct_020dfa68;

struct Struct_020df850_2 {
    short unknown_0_;
    short unknown_2_;
    int unknown_4_;
};

struct Struct_020df850_3 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned int unknown_4_0_ : 15;
    unsigned int unknown_5_7_ : 1;
    unsigned int unknown_6_0_ : 16;
    void *unknown_8_;
    void *unknown_c_;
};

struct Struct_020df850_4;

typedef int (*Type_020df850)(struct Struct_020df850 *, struct Struct_020dfa68 *);

extern "C" int func_020dfbc0(struct Struct_020df850_4 *);
extern "C" int func_020df77c(struct Struct_020df850 *, struct Struct_020dfa68 *);
extern "C" int func_020dfa68(struct Struct_020df850 *, Type_020df850);
extern "C" int func_020dfabc(struct Struct_020df850_3 *, struct Struct_020df850_3 *, char *, Type_020df850);

struct Struct_020df850_5;
typedef int (*Type_020df850_2)(void *);
extern "C" void *func_020dfb48(struct Struct_020df850_5 *, int, Type_020df850_2);

extern "C" char *func_020da150(SafeAllocator *, const char *);
extern "C" short func_020df774(short *);

// USA: func_020df850
extern "C" ARM int func_020df850(struct Struct_020df850_3 *arg0, SafeAllocator *arg1,
                                 struct Struct_020df850_3 *arg2, void *arg3, short arg4) {
    struct Struct_020df850_3 var0;
    char var1;
    struct Struct_020df850_2 *var2;
    struct Struct_020df850_2 *var3;
    struct Struct_020df850_2 *var4;
    struct Struct_020df850_2 *var5;
    int var6;
    int var7;
    int var8;
    int var9;

    if (arg1 == NULL || arg2 == NULL || arg3 == NULL) return 0;
    if (arg4 < 0) {
        if (arg1 != NULL && arg2 != NULL) {
            memcpy(arg0, arg2, 8);
            var6 = func_020dfbc0((struct Struct_020df850_4 *)arg0);
            var7 = arg0->unknown_4_0_;
            if (var6)
                arg0->unknown_8_ = arg1->Allocate(var6);
            else
                arg0->unknown_8_ = NULL;
            arg0->unknown_c_ = var7 ? arg1->Allocate(var7) : NULL;
            if (arg0->unknown_8_ != NULL) memcpy(arg0->unknown_8_, (char *)arg2 + 8, var6);
            if (arg0->unknown_c_ != NULL)
                memcpy(arg0->unknown_c_, (char *)arg2 + (func_020dfbc0((struct Struct_020df850_4 *)arg0) + 8), var7);
            if ((Type_020df850)func_020df77c) func_020dfa68((struct Struct_020df850 *)arg0, (Type_020df850)func_020df77c);
            arg0->unknown_5_7_ = 1;
        }
    } else {
        memset(&var0, 0, 0x10);
        func_020dfabc(&var0, arg2, &var1, func_020df77c);
        var2 = (struct Struct_020df850_2 *)func_020dfb48(
            (struct Struct_020df850_5 *)&var0, arg4, (Type_020df850_2)func_020df774);
        if (var2 != NULL) {
            memset(arg0, 0, 0x10);
            arg0->unknown_0_ = 1;
            arg0->unknown_2_ = var2->unknown_2_;
            arg0->unknown_8_ = arg1->Allocate(func_020dfbc0((struct Struct_020df850_4 *)arg0));
            if (arg0->unknown_8_ != NULL) {
                memcpy(arg0->unknown_8_, var2, 8);
                var3 = (struct Struct_020df850_2 *)arg0->unknown_8_;
                var8 = var3->unknown_2_;
                if (var3->unknown_2_ == 0 || var3->unknown_4_ == -1 || var2->unknown_4_ == 0) {
                    var3->unknown_2_ = 0;
                    ((struct Struct_020df850_2 *)arg0->unknown_8_)->unknown_4_ = 0;
                } else {
                    var3->unknown_4_ = (int)(var3 + 1);
                    var4 = (struct Struct_020df850_2 *)var2->unknown_4_;
                    var5 = (struct Struct_020df850_2 *)((struct Struct_020df850_2 *)arg0->unknown_8_)->unknown_4_;
                    memcpy(var5, var4, var8 * 8);
                    for (var9 = 0; var9 < var8; var9++, var5++, var4++) {
                        var5->unknown_4_ = (int)func_020da150(arg1, (const char *)var4->unknown_4_);
                    }
                }
            }
        }
    }
    return 1;
}
