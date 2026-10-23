#include <globaldefs.h>
#include "Resource/Script.h"
#include "Combat/CombatScriptContext.h"

#if defined(jpn)
#define func_02026b3c func_020264a0
#endif

struct Struct_0201f8d0 { Script::Parameter unknown_0_; Script::Parameter unknown_8_; };
struct Struct_0201f8d0_2;
struct Struct_0201f8d0_3;
#if defined(jpn)
extern "C" void func_020264a0(struct Struct_0201f8d0_3* arg0, unsigned int arg1, unsigned short arg2, const char* arg3);
#endif

extern "C" void func_02026644(char* arg0);
extern "C" void func_02026b0c(struct Struct_0201f8d0_2* arg0, int arg1);
#if !defined(jpn)
extern "C" void func_02026b3c(Struct_0201f8d0_3*, unsigned int, unsigned short, const char*);
#endif

// USA: func_0201f8d0
extern "C" ARM int func_0201f8d0(struct Struct_0201f8d0* arg0, int arg1) {
    int var0 = arg1 / 2;
    void* var1 = data_020fdc4c.unknown_10_;
    func_02026644((char*)var1);
    var1 = data_020fdc4c.unknown_10_;
    func_02026b0c((struct Struct_0201f8d0_2*)var1, var0 & 0xff);
    struct Struct_0201f8d0* var2 = arg0;
    for (int var3 = 0; var3 < var0; var3++) {
        int var4 = var2->unknown_0_.ToInt();
        const Script::Parameter* var5 = &var2->unknown_8_;
        var2++;
        const char* var6 = var5->ToString();
        var1 = data_020fdc4c.unknown_10_;
        func_02026b3c((struct Struct_0201f8d0_3*)var1, (unsigned char)var3, var4, var6);
    }
    return 1;
}
