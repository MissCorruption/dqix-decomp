#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201c1c8 { int unknown_0_; int unknown_4_; };

struct Struct_0209ad40;
struct Struct_0209ad40_2;
extern "C" void func_0209b988(struct Struct_0209ad40_2 *arg0, int arg1, int arg2,
                       struct Struct_0209ad40 *arg3);

struct Struct_0209ad40_3;
extern "C" struct Struct_0209ad40_3* func_0209b9c0(struct Struct_0209ad40_3* arg0, int arg1);

struct Struct_0209ad40_4 {
    unsigned int unknown_0_;
    struct {
        unsigned short unknown_0_0_ : 8;
        unsigned short unknown_1_0_ : 8;
    } unknown_4_;
};

extern void* data_02109bac;

// USA: func_0209ad40
extern "C" ARM int func_0209ad40(struct Struct_0201c1c8* arg0) {
    char* var0 = (char*)data_02109bac;
    if (*(int*)(var0 + 0x8) == 0) return 1;

    char* var1 = *(char**)(var0 + 0x0);
    int var2 = *(int*)(var1 + 0x1c8);
    int var3 = *(int*)(var1 + 0x1cc);

    struct Struct_0209ad40_4 var4;
    var4.unknown_0_ = (unsigned int)((Script::Parameter*)arg0)->ToInt();
    int var5 = ((Script::Parameter*)&arg0[1])->ToInt();

    var4.unknown_4_.unknown_0_0_ = (unsigned char)var5;
    var4.unknown_4_.unknown_1_0_ = (unsigned char)(var5 >> 8);

    var1 = *(char**)((char*)data_02109bac + 0x0);
    func_0209b988((struct Struct_0209ad40_2*)var1, var2, var3, (struct Struct_0209ad40*)&var4);

    *(int*)(*(char**)((char*)data_02109bac + 0x0) + 0x1cc) = var3 + 1;

    var1 = *(char**)((char*)data_02109bac + 0x0);
    struct Struct_0209ad40_3* var6 = func_0209b9c0((struct Struct_0209ad40_3*)var1, var2);
    if (var6 != 0) {
        unsigned char* var7 = (unsigned char*)var6 + 2;
        *var7 = *var7 + 1;
    }
    return 1;
}
