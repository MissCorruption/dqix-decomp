#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct Struct_0201c1c8;
extern "C" int func_020d2ff0(char const*);
extern "C" char* strcpy(char* arg0, const char* arg1);

struct Struct_0208dc84;
struct Struct_0208dc84_2;
extern "C" void func_0208df94(struct Struct_0208dc84* arg0, SafeAllocator* arg1, struct Struct_0208dc84_2* arg2);

struct Struct_02108fd4 {
    unsigned short* unknown_0_;
    unsigned short* unknown_4_;
    void* unknown_8_;
    void* unknown_c_;
};
extern struct Struct_02108fd4 data_02108fd4;

struct Struct_0208dc84_3 {
    unsigned short unknown_0_0_ : 2;
    unsigned short unknown_0_2_ : 7;
#if defined(jpn)
    unsigned short unknown_1_1_ : 7;
#else
    unsigned short unknown_1_1_ : 6;
    unsigned short unknown_1_7_ : 1;
#endif
};

struct Struct_0208dc84_4 {
    short unknown_0_;
    struct Struct_0208dc84_3 unknown_2_;
    int unknown_4_;
    int unknown_8_;
#if defined(jpn)
    int unknown_c_;
#endif
};

// USA: func_0208dc84
extern "C" ARM int func_0208dc84(char* arg0
#if defined(jpn)
    , int arg1
#endif
) {
    struct Struct_0208dc84_4 var0;
#if defined(jpn)
    char* var1;
#endif
    char* var2;
    void* var3;

    var0.unknown_0_ = -1;
    var0.unknown_2_.unknown_0_0_ = 0;
    var0.unknown_2_.unknown_0_2_ = 0;
    var0.unknown_2_.unknown_1_1_ = 0;
#if !defined(jpn)
    var0.unknown_2_.unknown_1_7_ = 0;
#endif
    var0.unknown_4_ = 0;
    var0.unknown_8_ = 0;
#if defined(jpn)
    var0.unknown_c_ = 0;
#endif

    if (data_02108fd4.unknown_4_ != 0) {
        unsigned short var4;
        var0.unknown_0_ = (short)((Script::Parameter*)((struct Struct_0201c1c8*)arg0))->ToInt();
        var2 = (char*)(void*)((Script::Parameter*)((struct Struct_0201c1c8*)(arg0 + 8)))->ToString();
        var0.unknown_2_.unknown_0_0_ = (unsigned short)((Script::Parameter*)((struct Struct_0201c1c8*)(arg0 + 0x10)))->ToInt();
        var0.unknown_2_.unknown_1_1_ = (unsigned short)((Script::Parameter*)((struct Struct_0201c1c8*)(arg0 + 0x18)))->ToInt();
        var0.unknown_2_.unknown_0_2_ = (unsigned short)((Script::Parameter*)((struct Struct_0201c1c8*)(arg0 + 0x20)))->ToInt();
#if defined(jpn)
        var1 = 0;
        if (arg1 - 5) {
            var1 = (char*)(void*)((Script::Parameter*)((struct Struct_0201c1c8*)(arg0 + 0x28)))->ToString();
        }
#else
        var0.unknown_2_.unknown_1_7_ = (unsigned short)((Script::Parameter*)((struct Struct_0201c1c8*)(arg0 + 0x28)))->ToInt();
#endif
        for (var4 = 0; var4 < *data_02108fd4.unknown_0_; var4++) {
            if (data_02108fd4.unknown_4_[var4] == var0.unknown_2_.unknown_1_1_) {
                if (var2 != 0) {
                    var3 = ((SafeAllocator*)data_02108fd4.unknown_c_)->Allocate((unsigned int)(func_020d2ff0(var2) + 1));
                    var0.unknown_4_ = (int)var3;
                    if (var3 != 0) {
                        strcpy((char*)var3, var2);
                    }
                }
#if defined(jpn)
                if (var1 != 0) {
                    var3 = ((SafeAllocator*)data_02108fd4.unknown_c_)->Allocate((unsigned int)(func_020d2ff0(var1) + 1));
                    var0.unknown_8_ = (int)var3;
                    if (var3 != 0) {
                        strcpy((char*)var3, var1);
                    }
                }
#endif
                func_0208df94((struct Struct_0208dc84*)data_02108fd4.unknown_8_,
                                                (SafeAllocator*)data_02108fd4.unknown_c_,
                                                (struct Struct_0208dc84_2*)&var0);
                break;
            }
        }
    } else {
        var0.unknown_0_ = (short)((Script::Parameter*)((struct Struct_0201c1c8*)arg0))->ToInt();
        var2 = (char*)(void*)((Script::Parameter*)((struct Struct_0201c1c8*)(arg0 + 8)))->ToString();
        if (var2 != 0) {
            var3 = ((SafeAllocator*)data_02108fd4.unknown_c_)->Allocate((unsigned int)(func_020d2ff0(var2) + 1));
            var0.unknown_4_ = (int)var3;
            if (var3 != 0) {
                strcpy((char*)var3, var2);
            }
        }
        var0.unknown_2_.unknown_0_0_ = (unsigned short)((Script::Parameter*)((struct Struct_0201c1c8*)(arg0 + 0x10)))->ToInt();
        var0.unknown_2_.unknown_1_1_ = (unsigned short)((Script::Parameter*)((struct Struct_0201c1c8*)(arg0 + 0x18)))->ToInt();
        var0.unknown_2_.unknown_0_2_ = (unsigned short)((Script::Parameter*)((struct Struct_0201c1c8*)(arg0 + 0x20)))->ToInt();
#if defined(jpn)
        var1 = 0;
        if (arg1 - 5) {
            var1 = (char*)(void*)((Script::Parameter*)((struct Struct_0201c1c8*)(arg0 + 0x28)))->ToString();
        }
#else
        var0.unknown_2_.unknown_1_7_ = (unsigned short)((Script::Parameter*)((struct Struct_0201c1c8*)(arg0 + 0x28)))->ToInt();
#endif
#if defined(jpn)
        if (var1 != 0) {
            var3 = ((SafeAllocator*)data_02108fd4.unknown_c_)->Allocate((unsigned int)(func_020d2ff0(var1) + 1));
            var0.unknown_8_ = (int)var3;
            if (var3 != 0) {
                strcpy((char*)var3, var1);
            }
        }
#endif
        func_0208df94((struct Struct_0208dc84*)data_02108fd4.unknown_8_,
                                        (SafeAllocator*)data_02108fd4.unknown_c_,
                                        (struct Struct_0208dc84_2*)&var0);
    }
    return 1;
}
