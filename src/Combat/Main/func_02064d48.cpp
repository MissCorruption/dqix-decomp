#include <globaldefs.h>
#include "Resource/Script.h"

#if defined(jpn)
enum { Enum_02064d48_2112 = 0x860, Enum_02064d48_20 = 0x20 };
#else
enum { Enum_02064d48_2112 = 0x840, Enum_02064d48_20 = 0x14 };
#endif

#include "Combat/NodeLookup.h"
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"

extern "C" int func_020981e4(int arg0, int arg1);
extern "C" int func_02098268(int arg0, int arg1);

extern "C" void* func_02012fe4(void);

extern int data_02108ce0;

struct Struct_02064d48 {
    short unknown_0_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
#if defined(jpn)
    char unknown_4_[12];
#endif
    char unknown1_4_[12];
    struct Struct_02064d48* unknown_10_;
};

// USA: func_02064d48
extern "C" ARM int func_02064d48(const Script::Parameter* arg0) {
    const Script::Parameter* var0 = arg0;
    int var1 = var0[0].ToInt();
    char* var2 = (char*)func_02012fe4();

    if (func_020981e4((int)(var2 + Enum_02064d48_2112), *(unsigned short*)var2)) {
        if (func_02098268((int)(var2 + Enum_02064d48_2112), var1)) {
            return 1;
        }
    }

    if (func_0206db20(*(void**)((char*)&data_02108ce0 + 4), var1) == NULL) {
        return 1;
    }

    Struct_02064d48* var3 = (Struct_02064d48*)(*(SafeAllocator**)((char*)&data_02108ce0 + 0))->Allocate(Enum_02064d48_20);
    if (var3 == NULL) {
        return 0;
    }

    var3->unknown_0_ = (short)var1;
    var3->unknown_2_ = (unsigned char)var0[1].ToInt();

#if defined(jpn)
    const char* var4 = var0[2].ToString();
    if (var4 != NULL) {
        strcpy(var3->unknown_4_, var4);
    }
#else
    var0[2].ToString();
#endif
    const char* var5 = var0[3].ToString();
    if (var5 != NULL) {
        strcpy(var3->unknown1_4_, var5);
    }

    var3->unknown_3_ = (unsigned char)var0[4].ToInt();

    Struct_02064d48** var6 = *(Struct_02064d48***)((char*)&data_02108ce0 + 8);
    var3->unknown_10_ = *var6;
    *var6 = var3;
    return 1;
}
