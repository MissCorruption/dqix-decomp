#include <globaldefs.h>
#include <GameState/GameState.h>

struct Struct_ov000_021599f4 { char unknown_0_[0x5c]; unsigned char unknown_5c_[35]; unsigned char unknown_7f_[35]; };
struct Struct_ov000_02182efc { int unknown_0_; int unknown_4_; };
struct Struct_02088660;
extern "C" int func_ov000_02156038(GameObject*);
extern "C" int func_020882f8(unsigned char*);
extern "C" int func_ov000_021543f4(GameObject*);
extern "C" int func_ov000_02156404(GameObject*);
extern "C" int func_ov000_02153a8c(GameObject*);
extern "C" int func_ov000_02156b20(GameObject*);
extern "C" int func_ov000_0215985c(GameObject*);
extern "C" int func_ov000_02159874(GameObject*);
extern "C" int func_ov000_0215516c(GameObject*);
extern "C" int func_ov000_0215988c(GameObject*);
extern "C" int func_ov000_021598a4(GameObject*);
extern "C" int func_ov000_021598bc(GameObject*);
extern "C" int func_ov000_021598d4(GameObject*);
extern "C" int func_ov000_02156c94(GameObject*);
extern "C" int func_02088660(Struct_02088660*);
extern "C" int func_ov000_02156cac(GameObject*);
extern "C" int func_ov000_021598ec(GameObject*);
extern "C" int func_ov000_02159904(GameObject*);
extern "C" int func_ov000_0215991c(GameObject*);
extern "C" int func_ov000_02159934(GameObject*);
extern "C" int func_ov000_0215994c(GameObject*);
extern "C" int func_ov000_02159964(GameObject*);
extern "C" int func_ov000_0215997c(GameObject*);
extern "C" int func_ov000_02159994(GameObject*);
extern "C" int func_ov000_021599ac(GameObject*);
extern "C" int func_ov000_021599c4(GameObject*);
extern "C" int func_ov000_02156258(GameObject*);
extern "C" int func_ov000_021563ec(GameObject*);
extern "C" int func_ov000_021599dc(GameObject*);
extern int data_ov000_02182a94[3];
extern Struct_ov000_02182efc data_ov000_02182efc[26];

// USA: func_ov000_021599f4
extern "C" ARM void func_ov000_021599f4(void*, int arg1) {
    GameObject* var0 = GameState::GetInstance()->GetCombatantByIndex(arg1);
    if (!var0) return;
    unsigned char* var1 = ((Struct_ov000_021599f4*)var0->currentStats_)->unknown_5c_;
    unsigned char* var2 = ((Struct_ov000_021599f4*)var0->currentStats_)->unknown_7f_;
    unsigned char var3[3];
    var3[0] = func_ov000_02156038(var0);
    var3[1] = func_020882f8((unsigned char*)var0->currentStats_);
    var3[2] = func_ov000_021543f4(var0);
    unsigned char* var4 = var3;
    int* var5 = data_ov000_02182a94;
    for (int var6 = 0; var6 < 3; var6++, var4++, var5++) {
        if (*var4) {
            if (var1[*var5]) {
                var1[*var5]--;
                if (!var1[*var5]) {
                    var1[*var5] = 0;
                    var2[*var5] = 4;
                }
            }
            break;
        }
    }
    unsigned char var7[26];
    var7[0] = func_ov000_02156404(var0);
    var7[1] = func_ov000_02153a8c(var0);
    var7[2] = func_ov000_02156b20(var0);
    var7[3] = func_ov000_0215985c(var0);
    var7[4] = func_ov000_02159874(var0);
    var7[5] = func_ov000_0215516c(var0);
    var7[6] = func_ov000_0215988c(var0);
    var7[7] = func_ov000_021598a4(var0);
    var7[8] = func_ov000_021598bc(var0);
    var7[9] = func_ov000_021598d4(var0);
    var7[10] = func_ov000_02156c94(var0);
    var7[11] = func_02088660((Struct_02088660*)var0->currentStats_);
    var7[12] = func_ov000_02156cac(var0);
    var7[13] = func_ov000_021598ec(var0);
    var7[14] = func_ov000_02159904(var0);
    var7[15] = func_ov000_0215991c(var0);
    var7[16] = func_ov000_02159934(var0);
    var7[17] = func_ov000_0215994c(var0);
    var7[18] = func_ov000_02159964(var0);
    var7[19] = func_ov000_0215997c(var0);
    var7[20] = func_ov000_02159994(var0);
    var7[21] = func_ov000_021599ac(var0);
    var7[22] = func_ov000_021599c4(var0);
    var7[23] = func_ov000_02156258(var0);
    var7[24] = func_ov000_021563ec(var0);
    var7[25] = func_ov000_021599dc(var0);
    unsigned char* var8 = var7;
    Struct_ov000_02182efc* var9 = data_ov000_02182efc;
    for (int var10 = 0; var10 < 26; var10++, var8++, var9++) {
        if (*var8 && var1[var9->unknown_0_]) {
            var1[var9->unknown_0_]--;
            if (!var1[var9->unknown_0_]) {
                var1[var9->unknown_0_] = 0;
                var2[var9->unknown_0_] = var9->unknown_4_;
            }
        }
    }
}
