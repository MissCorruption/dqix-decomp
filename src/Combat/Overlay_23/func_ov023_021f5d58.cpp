#include <globaldefs.h>
#if defined(jpn)
#include "Filesystem/FileIO.h"
extern const char data_ov023_021fd69d[];
extern const char data_ov023_021fd6a5[];
#endif
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

struct Struct_ov023_021fff08_11 { char unknown_0_[0xc]; void* unknown_c_; void* unknown_10_; };
extern struct Struct_ov023_021fff08_11 data_ov023_021fff08;

// USA: func_ov023_021f5d58
extern "C" ARM int func_ov023_021f5d58(unsigned char* arg0, int arg1, unsigned char* arg2) {
    if (func_ov023_021f6324(arg1, arg0) != 0) {
        return 0;
    }
    char var0[0x430];
    char var1[0x104];
    char* var2 = (char*)data_ov023_021fe3c8;
    int var3 = strlen(var2);
    func_ov031_022118a8(var1, (unsigned char*)var2, var3);
    func_ov031_02211938((unsigned char*)var1, arg0, arg1 - 4, arg2);
    char* var4 = (char*)GameState::GetInstance();
#if defined(jpn)
    data_ov023_021fff08.unknown_c_ = var4 + 0x5c0c;
#else
    data_ov023_021fff08.unknown_c_ = var4 + 0x5e6c;
#endif

    data_ov023_021fff08.unknown_10_ = 0;
#if defined(jpn)
    const void* var5;
    unsigned int var6;
    if (!GetFileInNarc(arg2, data_ov023_021fd69d, &var5, &var6, 0)) return 0;
#endif
    ((Script*)((struct Struct_0201f040*)var0))->Initialize();
    ((Script*)((struct Struct_0201f040*)var0))->SetOpcodeLookup((Script::OpcodeLookupEntry*)&data_ov023_021fe34c);
#if defined(jpn)
    ((Script*)((struct Struct_0201f040_2*)var0))->Load((struct Struct_02013fb4*)var5, var6);
#else
    ((Script*)((struct Struct_0201f040_2*)var0))->Load((struct Struct_02013fb4*)arg2, arg1 - 4);
#endif

    ((Script*)((struct Struct_0201f040_3*)var0))->Execute();
#if defined(jpn)
    char* var7 = (char*)data_ov023_021fff08.unknown_10_;
    if (var7 == 0) return 0;
    memcpy(var4 + 0x5d20, var7, strlen(var7));
    if (!GetFileInNarc(arg2, data_ov023_021fd6a5, &var5, &var6, 0)) return 0;
    memcpy(var4 + 0x5f20, var5, var6);
    *(unsigned int*)(var4 + 0x5d1c) = var6;

#else
    if (data_ov023_021fff08.unknown_10_ == 0) {
        return 0;
    }
    memset(var4 + 0x5f80, 0, 0x200);
    char* var8 = (char*)data_ov023_021fff08.unknown_10_;
    memcpy(var4 + 0x5f80, var8, strlen(var8));

#endif
    return 1;
}
