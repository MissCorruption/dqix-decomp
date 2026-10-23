#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

#if defined(jpn)
enum { Enum_ov003_02163d7c_1788 = 0x4ec };
enum { Enum_ov003_02163d7c_1844 = 0x524 };
enum { Enum_ov003_02163d7c_1024 = 0x200 };
enum { Enum_ov003_02163d7c_162 = 0xca };
enum { Enum_ov003_02163d7c_205 = 0xc9 };
enum { Enum_ov003_02163d7c_206 = 0xca };
enum { Enum_ov003_02163d7c_207 = 0xcb };
enum { Enum_ov003_02163d7c_1187 = 0x2cb };
enum { Enum_ov003_02163d7c_1124 = 0x28c };
#else
enum { Enum_ov003_02163d7c_1788 = 0x6fc };
enum { Enum_ov003_02163d7c_1844 = 0x734 };
enum { Enum_ov003_02163d7c_1024 = 0x400 };
enum { Enum_ov003_02163d7c_162 = 0xa2 };
enum { Enum_ov003_02163d7c_205 = 0xcd };
enum { Enum_ov003_02163d7c_206 = 0xce };
enum { Enum_ov003_02163d7c_207 = 0xcf };
enum { Enum_ov003_02163d7c_1187 = 0x4a3 };
enum { Enum_ov003_02163d7c_1124 = 0x464 };
#endif

struct Struct_0209a678_2 {
    char unknown_0_[0x14];
    unsigned char unknown_14_0_ : 1;
};

struct Struct_0201bdac_2;
struct Struct_0201bdac;
extern "C" void func_020469b4(Struct_0201bdac_2*, Struct_0201bdac*);
extern "C" int func_0202b7d8(int*);
extern "C" void func_ov017_02195530(unsigned char*);
struct Struct_02052e2c;
extern "C" Struct_0209a678_2* func_02052e2c(Struct_02052e2c*);
extern "C" char* func_02012fe4();
extern "C" char* func_0202ae18();
extern "C" int func_0202c508(char*);
extern "C" void func_ov003_02161480();
extern "C" void func_ov017_021bbae4(char*, unsigned int, int);

// USA: func_ov003_02163d7c
extern "C" ARM void func_ov003_02163d7c(char* arg0) {
    func_ov003_02161480();
    GameState* var0 = GameState::GetInstance();
    char* var1 = func_02012fe4();
    GameResources* var2 = GetGameResources();
    char* var3 = *(char**)((char*)var2 + 0x3000 + Enum_ov003_02163d7c_1788);
    char* var4 = *(char**)((char*)var2 + 0x3000 + Enum_ov003_02163d7c_1844);
    Struct_0209a678_2* var5 = func_02052e2c((Struct_02052e2c*)(var0->GetGameObjectByIndex(*(signed char*)(arg0 + Enum_ov003_02163d7c_1024 + Enum_ov003_02163d7c_162))));
    char* var6 = func_0202ae18();
    func_ov017_021bbae4(var4, *(unsigned int*)(var1 + 0x8), 1);
    var4[Enum_ov003_02163d7c_205] = *(signed char*)(arg0 + Enum_ov003_02163d7c_1024 + Enum_ov003_02163d7c_162);
    var4[Enum_ov003_02163d7c_206] = var5->unknown_14_0_;
    var4[Enum_ov003_02163d7c_207] = 0;
    func_020469b4((Struct_0201bdac_2*)var3, (Struct_0201bdac*)var4);
    arg0[Enum_ov003_02163d7c_1187] = 0x10;
    *(unsigned int*)(arg0 + Enum_ov003_02163d7c_1124) &= ~0x8000;
    if (!func_0202b7d8((int*)var6)) {
        return;
    }
    if (!func_0202c508(var6)) {
        return;
    }
    func_ov017_02195530((unsigned char*)var2);
}
