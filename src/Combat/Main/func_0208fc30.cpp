#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Grotto/Main/ActiveGrottoClass.h"
#include "Resource/GameResources.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

#if defined(jpn)
#define func_0206df6c func_0206f0c0
#endif
#if defined(jpn)
#include "std_library_functions.h"
extern const char data_020f1438[];
#endif

struct Struct_0208fa8c { unsigned short unknown_0_; unsigned short unknown_2_; };
struct Struct_0201bdac_2;
struct Struct_0201bdac;
struct Struct_0205faf4_7;
struct Struct_0205faf4_8 { unsigned int unknown_0_0_:14, unknown_1_6_:1; };
struct Struct_0208fc30 { char unknown_0_[8]; unsigned short unknown_8_; };

extern "C" Struct_0208fa8c* func_02012fe4();
extern "C" int* func_0202ae18();
extern "C" unsigned char* func_0205ec34();
extern "C" int func_0202c508(void* arg0);
extern "C" void func_ov017_021baedc(void* arg0, int arg1);
extern "C" struct Struct_0205faf4_7* func_02094d6c();
extern "C" struct Struct_0205faf4_8* func_02096134(struct Struct_0205faf4_7*, int);
extern "C" void func_020469b4(struct Struct_0201bdac_2*, struct Struct_0201bdac*);
extern "C" int func_0206dfb0(int, unsigned char*, int);
extern "C" void func_0206df6c(void*, unsigned char*, int, int);
extern "C" void func_ov017_021beba4(char*);
extern "C" int func_0201b588(int);
extern "C" void* func_0200fd0c(GameState* arg0);

// JPN: func_02090544
// USA: func_0208fc30
extern "C" ARM void func_0208fc30(ActiveGrottoClass* arg0) {
#if defined(jpn)
    unsigned char* var2;
    GameResources* var3;
    bool var11;
    int* var1;
    const char* var0;
    int var6;
    struct Struct_0201bdac_2* var7;
    int var5;
    void* var10;
#else
    int* var1;
    unsigned char* var2;
    GameResources* var3;
    GrottoStruct* var4;
    int var5;
    int var6;
    struct Struct_0201bdac_2* var7;
#endif
    Struct_0208fa8c* var8 = func_02012fe4();
    var5 = var8->unknown_0_;
    var6 = var8->unknown_2_;
    var1 = func_0202ae18();
    var2 = func_0205ec34();
    GameState* var9 = GameState::GetInstance();
    func_0200fd0c(var9);
    var3 = GetGameResources();
    var7 = (struct Struct_0201bdac_2*)var3->unknown_ptr_array_36fc[0];
#if !defined(jpn)
    var4 = var9->GetGrottoStruct();
#endif

    if (func_0201b588(var5) && !func_0201b588(var6) &&
        (var6 < 0x7530 || var6 > 0x9c3f)) {
#if defined(jpn)
        var11 = false;
#else
        void* var10;
        bool var11 = false;
#endif
        if (func_0202c508(var1)) {
            var10 = var3->unknown_ptr_array_371c[6];
            func_ov017_021baedc(var10, 1);
            struct Struct_0205faf4_7* var12 = func_02094d6c();
#if defined(jpn)
            var0 = "\x96\xb2";
            const char* var13 = arg0->GetPopupName();
            if (strstr(var13, var0) != NULL &&
#else
            if (*(unsigned short*)var4->unk_a == 6 &&
#endif
                func_0206dfb0((int)var2, var2 + 0x8c, 0x12) &&
                !func_0206dfb0((int)var2, var2 + 0x8c, 0x2d) &&
                !func_02096134(var12, 0xae)->unknown_1_6_) {
                ((struct Struct_0208fc30*)var10)->unknown_8_ = 0x5105;
                func_020469b4(var7, (struct Struct_0201bdac*)var10);
                var11 = true;
                func_0206df6c(var2, var2 + 0x8c, 0x2d, 1);
            } else if (arg0->GetActiveGrottoEnviron() == 2 &&
                       func_0206dfb0((int)var2, var2 + 0x8c, 0x13) &&
                       !func_0206dfb0((int)var2, var2 + 0x8c, 0x2e) &&
                       !func_02096134(var12, 0xc1)->unknown_1_6_) {
                ((struct Struct_0208fc30*)var10)->unknown_8_ = 0x51c3;
                func_020469b4(var7, (struct Struct_0201bdac*)var10);
                var11 = true;
                func_0206df6c(var2, var2 + 0x8c, 0x2e, 1);
            }
        }
        if (!var11 && (unsigned char)arg0->unknown_260_[0] == 0) {
            void* var14 = var3->unknown_ptr_array_3afc[28];
            func_ov017_021beba4((char*)var14);
            func_020469b4(var7, (struct Struct_0201bdac*)var14);
        }
    } else {
        if ((unsigned char)arg0->unknown_260_[1] != 0) {
            void* var15 = var3->unknown_ptr_array_3afc[28];
            func_ov017_021beba4((char*)var15);
            func_020469b4(var7, (struct Struct_0201bdac*)var15);
            arg0->unknown_260_[1] = 0;
        }
    }
}
