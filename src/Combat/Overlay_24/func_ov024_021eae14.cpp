#include <globaldefs.h>
#include <GameState/GameState.h>
#include <Combat/Overlay_0/GetCombatantByID.h>

struct BattleContext { char pad[0x10]; int battle; };
struct BattleStatus {
    char pad0[0x3b];
    unsigned char refresh : 1;
    unsigned char otherFlags : 7;
    char pad1[0x1c];
    unsigned int knownBuffs : 21;
    signed int field21 : 3;
    signed int field24 : 3;
    signed int field27 : 3;
};
struct FlagObj_021de25c;
struct FlagObj_021da9b0;
struct FlagObj_021da9c8;
struct FlagObj_021df6ec;
struct FlagObj_021dd010;
struct FlagObj_021df704;
struct Combatant_20885b4;
struct Combatant_2088644;
struct S88514;
extern "C" int func_020882f8(unsigned char*);
extern "C" void func_02088390(void*);
extern "C" int func_ov024_021de25c(FlagObj_021de25c*);
extern "C" void func_020883fc(void*);
extern "C" int func_ov024_021da9b0(FlagObj_021da9b0*);
extern "C" void func_020882dc(void*);
extern "C" int func_ov024_021da9c8(FlagObj_021da9c8*);
extern "C" void func_020884f8(unsigned char*);
extern "C" int func_020885b4(Combatant_20885b4*);
extern "C" void func_02088644(Combatant_2088644*);
extern "C" int func_02088514(S88514*);
extern "C" void func_02088598(unsigned char*);
extern "C" int func_ov024_021df6ec(FlagObj_021df6ec*);
extern "C" void func_02088874(unsigned char*);
extern "C" int func_ov024_021dd010(FlagObj_021dd010*);
extern "C" void func_020888c4(unsigned char*);
extern "C" int func_ov024_021df704(FlagObj_021df704*);
extern "C" void func_02088d4c(unsigned char*);
extern "C" void func_02087838(void*);
extern "C" void func_0208792c(void*);
extern "C" void func_02087a20(void*);
extern "C" void func_02087b14(void*);
extern "C" void func_02087c08(void*);
extern "C" void func_02087cfc(void*);
extern "C" void func_02087df0(void*);
extern "C" void func_02087efc(unsigned char*);
extern "C" void func_02087ff0(void*);
extern "C" void func_020880e4(void*);
void ApplyCombatantBuffs(int, int);

// USA: func_ov024_021eae14
extern "C" ARM int func_ov024_021eae14(BattleContext* context, int id) {
    GameObject* combatant = GetCombatantByID(context->battle, id);
    if (!combatant) return 0;
    int count = 0;
    int refresh = 0;
    if (func_020882f8((unsigned char*)combatant->currentStats_)) {
        func_02088390(combatant->currentStats_); count++; refresh = 1;
    }
    if (func_ov024_021de25c((FlagObj_021de25c*)combatant)) {
        func_020883fc(combatant->currentStats_); count++; refresh = 1;
    }
    if (func_ov024_021da9b0((FlagObj_021da9b0*)combatant)) {
        func_020882dc(combatant->currentStats_); count++; refresh = 1;
    }
    if (func_ov024_021da9c8((FlagObj_021da9c8*)combatant)) {
        func_020884f8((unsigned char*)combatant->currentStats_); count++; refresh = 1;
    }
    if (func_020885b4((Combatant_20885b4*)combatant->currentStats_)) {
        func_02088644((Combatant_2088644*)combatant->currentStats_); count++;
    }
    if (func_02088514((S88514*)combatant->currentStats_)) {
        func_02088598((unsigned char*)combatant->currentStats_); count++;
    }
    if (func_ov024_021df6ec((FlagObj_021df6ec*)combatant)) {
        func_02088874((unsigned char*)combatant->currentStats_); count++;
    }
    if (func_ov024_021dd010((FlagObj_021dd010*)combatant)) {
        func_020888c4((unsigned char*)combatant->currentStats_); count++;
    }
    if (func_ov024_021df704((FlagObj_021df704*)combatant)) {
        func_02088d4c((unsigned char*)combatant->currentStats_); count++;
    }
    if (combatant->currentStats_->attackBuff < 0) { func_02087838(combatant->currentStats_); count++; }
    if (combatant->currentStats_->defenseBuff < 0) { func_0208792c(combatant->currentStats_); count++; }
    if (combatant->currentStats_->agilityBuff < 0) { func_02087a20(combatant->currentStats_); count++; }
    if (combatant->currentStats_->charmBuff < 0) { func_02087b14(combatant->currentStats_); count++; }
    if (combatant->currentStats_->magicalMightBuff < 0) { func_02087c08(combatant->currentStats_); count++; }
    if (combatant->currentStats_->magicalMendingBuff < 0) { func_02087cfc(combatant->currentStats_); count++; }
    if (combatant->currentStats_->unkBuff18 < 0) { func_02087df0(combatant->currentStats_); count++; }
    if (((BattleStatus*)combatant->currentStats_)->field21 < 0) { func_02087efc((unsigned char*)combatant->currentStats_); count++; }
    if (((BattleStatus*)combatant->currentStats_)->field27 < 0) { func_02087ff0(combatant->currentStats_); count++; }
    if (((BattleStatus*)combatant->currentStats_)->field24 < 0) { func_020880e4(combatant->currentStats_); count++; }
    if (refresh) ((BattleStatus*)combatant->currentStats_)->refresh = 1;
    ApplyCombatantBuffs(context->battle, id);
    return count;
}
