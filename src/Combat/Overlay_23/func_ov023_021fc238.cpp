#include <globaldefs.h>

struct Struct_020e6d5c_7 { unsigned int unknown_0_; unsigned int unknown_4_; };
extern struct Struct_020e6d5c_7 data_020e6d5c;

struct Struct_ov023_021fd9c4 { unsigned int unknown_0_[8]; };
extern struct Struct_ov023_021fd9c4 data_ov023_021fd9c4;

struct Struct_ov023_021fc238 { unsigned int unknown_0_; unsigned int unknown_4_; };

// USA: func_ov023_021fc238
extern "C" ARM int func_ov023_021fc238(void* arg0, void* arg1) {
    struct Struct_ov023_021fd9c4 var0;
    var0 = data_ov023_021fd9c4;
    unsigned int var1 = data_020e6d5c.unknown_4_;
    unsigned int var2 = data_020e6d5c.unknown_0_;
    var0.unknown_0_[7] = var1;
    var0.unknown_0_[6] = var2;
    struct Struct_ov023_021fc238* var3 = (struct Struct_ov023_021fc238*)&var0;

    int var4 = *(int*)((char*)arg0 + 0x1c);
    struct Struct_ov023_021fc238* var5 = &var3[var4];
    void* var6 = (char*)arg0 + ((int)var5->unknown_4_ >> 1);
    void* var7;
    if (var5->unknown_4_ & 1) {
        var7 = *(void**)((char*)*(void**)var6 + var5->unknown_0_);
    } else {
        var7 = (void*)var5->unknown_0_;
    }
    int var8 = ((int(*)(void*, void*))var7)(var6, arg1);
    *(int*)((char*)arg0 + 0x1c) = var8;
    return var8;
}
