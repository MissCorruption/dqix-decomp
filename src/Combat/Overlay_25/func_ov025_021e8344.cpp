#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "std_library_functions.h"
#include "GameState/GameState.h"

#if defined(jpn)
struct Struct_ov025_021ef988_36 { char unknown_0_[4]; void* unknown_c_; };
#else
struct Struct_ov025_021ef988_36 { char unknown_0_[0xc]; void* unknown_c_; };
#endif
extern struct Struct_ov025_021ef988_36 data_ov025_021ef988;
extern char data_ov025_021ef87f;

extern "C" void* func_ov025_021e8a54(char* arg0);
extern "C" int func_ov025_021e25a4(char* arg0);
extern "C" void func_ov025_021eb05c(void* arg0, int arg1);

struct Struct_ov025_021e8344 { char unknown_0_[0x10]; void* unknown_10_; };
struct Struct_ov025_021e8344_2 { char unknown_0_[0x49c]; unsigned char unknown_49c_0_ : 1; };

// USA: func_ov025_021e8344
extern "C" ARM int func_ov025_021e8344(void* arg0, struct Struct_ov025_021e8344* arg1) {
#if defined(jpn)
 enum {Enum_ov025_021e8344_336=0x144};
#else
 enum {Enum_ov025_021e8344_336=0x150};
#endif
    char var0[0x50];
    (int)BackgroundLoader::GetInstance();
    func_ov025_021e8a54((char*)data_ov025_021ef988.unknown_c_);
    GameState* var1 = GameState::GetInstance();
    int var2 = *(unsigned short*)((char*)arg1->unknown_10_ + 0x20);
    GameObject* var3 = func_0200ff1c(var1, var2);
    struct Struct_ov025_021e8344_2* var4 = *(struct Struct_ov025_021e8344_2**)((char*)var3 + Enum_ov025_021e8344_336);
    char var5 = 'm';
    if (var4->unknown_49c_0_ == 1) {
        var5 = 'w';
    }
    sprintf(var0, &data_ov025_021ef87f, var5);
    int var6 = func_ov025_021e25a4(var0);
    func_ov025_021eb05c(data_ov025_021ef988.unknown_c_, var6);
    return 1;
}
