#include <globaldefs.h>
#include "std_library_functions.h"
#include "Combat/Overlay15ViewerContext.h"

struct Struct_0201099c_10;
struct Struct_0201099c_9;
extern "C" struct Struct_0201099c_9* func_020dedd0(struct Struct_0201099c_10* arg0, int arg1);
extern "C" void* __clear(void* arg0, int arg1);

struct Struct_ov015_0218c274 {
    unsigned int unknown_0_;
    unsigned int unknown_4_0_ : 12;
    unsigned int unknown_5_4_ : 8;
    unsigned int unknown_6_4_ : 12;
};

extern char data_ov015_0219400a[3];
extern char data_ov015_0219400d[3];
extern char data_ov015_02194010[3];
extern char data_ov015_02194013[13];

// USA: func_ov015_0218c274
extern "C" ARM void func_ov015_0218c274(struct Struct_ov015_0218bcb0* arg0, char* arg1, int arg2) {
    short var0 = (short)arg0->unknown_20_[8];
    struct Struct_0201099c_9* var1 = func_020dedd0((struct Struct_0201099c_10*)((char*)arg0->unknown_0_ + 0x4c), var0);
    short var2 = (short)arg0->unknown_20_[0];
    struct Struct_0201099c_9* var3 = func_020dedd0((struct Struct_0201099c_10*)((char*)arg0->unknown_0_ + 0x4c), var2);

    int var4 = 0;
    int var5 = var4;
    if (var3 != 0) {
        struct Struct_ov015_0218c274* var6 = *(struct Struct_ov015_0218c274**)var3;
        var4 = var6->unknown_5_4_;
    }
    if (var1 != 0) {
        struct Struct_ov015_0218c274* var7 = *(struct Struct_ov015_0218c274**)var1;
        var5 = var7->unknown_5_4_;
    }

    char var8[4];
    __clear(var8, 4);

    char var9;
    if (arg0->unknown_1c_ == 1) {
        strcpy(var8, data_ov015_0219400a);
        var9 = (arg0->unknown_3b_ == 0) ? 'm' : 'w';
    } else {
        strcpy(var8, data_ov015_0219400d);
        var9 = (arg0->unknown_48_ == 0) ? 'n' : 'b';
        if (arg2 != 0) {
            var9 = 'f';
        }
    }
    if (var9 == 'n' || var9 == 'f') {
        if (arg0->unknown_3b_ == 1) {
            strcpy(var8, data_ov015_02194010);
        }
    }

    sprintf(arg1, data_ov015_02194013, var8, var4, var5, var9);
}
