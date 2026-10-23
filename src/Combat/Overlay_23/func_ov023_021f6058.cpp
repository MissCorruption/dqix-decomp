#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"
#include "Resource/Script.h"

extern "C" unsigned long long func_ov023_021f6324(int arg0, unsigned char* arg1);
extern "C" void func_ov031_022118a8(void* arg0, unsigned char* arg1, int arg2);
extern "C" void func_ov031_02211938(unsigned char* ctx, const unsigned char* in, int len, unsigned char* out);
extern unsigned char data_ov023_021fe3c8[];

struct Struct_0201f040;
struct Struct_0201f040_2;
struct Struct_02013fb4;
struct Struct_0201f040_3;
extern int data_ov023_021fe34c;

struct Struct_ov023_021fff08_13 { char unknown_0_[0x8]; char* unknown_8_; char* unknown_c_; };
extern struct Struct_ov023_021fff08_13 data_ov023_021fff08;

struct Struct_ov023_021f6058 {
    char unknown_0_[0x10c];
    unsigned short unknown_10c_0_ : 13;
    unsigned short unknown_10d_5_ : 3;
};

// USA: func_ov023_021f6058
extern "C" ARM int func_ov023_021f6058(unsigned char* arg0, int arg1, unsigned char* arg2) {
#if defined(jpn)
 enum {Enum_ov023_021f6058_24172=0x5c0c, Enum_ov023_021f6058_25472=0x6120};
#else
 enum {Enum_ov023_021f6058_24172=0x5e6c, Enum_ov023_021f6058_25472=0x6380};
#endif
    char var0[0x430];
    if (func_ov023_021f6324(arg1, arg0) != 0) {
        return 0;
    }
    char var1[0x104];
    char* var2 = (char*)data_ov023_021fe3c8;
    int var3 = strlen(var2);
    func_ov031_022118a8(var1, (unsigned char*)var2, var3);
    func_ov031_02211938((unsigned char*)var1, arg0, arg1 - 4, arg2);
    char* var4 = (char*)GameState::GetInstance();
    Struct_ov023_021f6058* var5 = (Struct_ov023_021f6058*)(var4 + Enum_ov023_021f6058_24172);
    arg0 = (unsigned char*)var4 + Enum_ov023_021f6058_25472;
    data_ov023_021fff08.unknown_c_ = (char*)var5;
    data_ov023_021fff08.unknown_8_ = (char*)arg0;
    var5->unknown_10c_0_ &= ~0x240;
    ((Script*)((struct Struct_0201f040*)var0))->Initialize();
    ((Script*)((struct Struct_0201f040*)var0))->SetOpcodeLookup((Script::OpcodeLookupEntry*)&data_ov023_021fe34c);
    ((Script*)((struct Struct_0201f040_2*)var0))->Load((struct Struct_02013fb4*)arg2, arg1 - 4);
    ((Script*)((struct Struct_0201f040_3*)var0))->Execute();
    return 1;
}
