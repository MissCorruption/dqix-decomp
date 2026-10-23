#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"
#include "NitroSDK/OverlayId.h"
#include "Input/Input.h"

#if defined(jpn)
#define func_020c39c8 func_020c5494
#endif

#if defined(jpn)
enum { Field36d0 = 0x34c0, Field36d4 = 0x34c4, Field36fc = 0x34ec, Field3700 = 0x34f0, Field371c = 0x350c, Field3720 = 0x3510, Field3b4c = 0x392c, Field3b50 = 0x3930, Field3b70 = 0x3950, Field3b74 = 0x3954, Field41c0 = 0x3fa0, Field41c4 = 0x3fa4, Field42e4 = 0x40c4, CombatantFlagOffset = 0x180 };
#else
enum { Field36d0 = 0x36d0, Field36d4 = 0x36d4, Field36fc = 0x36fc, Field3700 = 0x3700, Field371c = 0x371c, Field3720 = 0x3720, Field3b4c = 0x3b4c, Field3b50 = 0x3b50, Field3b70 = 0x3b70, Field3b74 = 0x3b74, Field41c0 = 0x41c0, Field41c4 = 0x41c4, Field42e4 = 0x42e4, CombatantFlagOffset = 0x18c };
#endif

struct SearchStruct;
struct FlagWord02046708;
struct BitField0203402c;
struct Struct0200fb08;
struct Obj021befe4;
struct Obj0205eaa0;
struct Obj020397cc;
struct S021b2ba0;
struct TailList020469b4;
struct TailNode020469b4;
struct SetFlagStruct;
struct FlagBlob02027bac;
struct SafeAllocator;

extern "C" int func_020421a0();
extern "C" SearchStruct* func_0202ae18(void);
extern "C" void* func_02012fe4(void);
extern "C" FlagWord02046708* func_020d6c00();
extern "C" unsigned char* func_0200fd0c(GameState* gs);
extern "C" int func_02046b08(void** list);
extern "C" int func_02039820(void* obj);
extern "C" int func_020535c8(signed char* obj);
extern "C" int func_02046708(FlagWord02046708* flags, unsigned int mask);
extern "C" int func_0203402c(BitField0203402c* obj);
extern "C" int func_020c39c8(volatile unsigned short* reg);
extern "C" int func_0200fb08(Struct0200fb08* obj);
extern "C" int func_0202c508(SearchStruct* search);
extern "C" int func_0202c540(SearchStruct* search);
extern "C" void func_ov017_021befe4(Obj021befe4* obj);
extern "C" void func_020469b4(TailList020469b4* list, TailNode020469b4* node);
extern "C" void func_020397cc(Obj020397cc* obj, int flag);
extern "C" void func_0205eaa0(Obj0205eaa0* obj, int a, int b);
extern "C" void func_ov017_021a5568(void* node);
extern "C" int func_02039d7c(char* obj);
extern "C" void func_ov017_021b2174(unsigned char* obj);
extern "C" void func_ov017_021b2ba0(S021b2ba0* obj, char* name);
extern "C" void func_ov017_021b2bd0(void* obj, int handler, int overlayId);
extern "C" void func_020dc2d0(int mode);
extern "C" void func_020213fc(SetFlagStruct* obj, int value);
extern "C" void func_02027bac(FlagBlob02027bac* obj, unsigned char value);
extern "C" void func_ov004_0216ae2c(SafeAllocator* allocator, void* arg);
extern char data_02108760;
extern char data_ov017_021d76dc;

struct Thresholds021d6a80 {
    short values[5];
};

extern Thresholds021d6a80 data_ov017_021d6a80;

struct Unknown021a51a4 {
    char pad0[0xac];
    short fac;
    char pad1[0xb2 - 0xae];
    short fb2;
    char pad2[CombatantFlagOffset - 0xb4];
    int f18c;
};

struct Node021a51a4 {
    char pad0[0x24];
    unsigned char f24;
    char pad1[0x28 - 0x25];
    int f28;
    int f2c;
};

struct Grotto021a51a4 {
    char pad0[0xc];
    unsigned char kind : 4;
};

struct Res021a51a4 {
    char pad0[Field36d0];
    SetFlagStruct* flags;
    char pad1[Field36fc - Field36d4];
    TailList020469b4* list;
    char pad2[Field371c - Field3700];
    Node021a51a4* node;
    char pad3[Field3b4c - Field3720];
    unsigned char* dialog;
    char pad4[Field3b70 - Field3b50];
    Obj021befe4* state53;
    char pad5[Field41c0 - Field3b74];
    int f41c0;
    char pad6[Field42e4 - Field41c4];
    unsigned char pending;
};

// USA: func_ov017_021a51a4
extern "C" ARM void func_ov017_021a51a4(Res021a51a4* res) {
    GameState* gs;
    Unknown021a51a4* unknown;
    unsigned char* dialog;
    SearchStruct* search;
    FlagWord02046708* flagWord;
    unsigned char* field3f8;
    int start;
    int x;
    int y;
    unsigned char* grotto;
    int level;
    Grotto021a51a4* grottoInfo;
    gs = GameState::GetInstance();
    unknown = (Unknown021a51a4*)gs->GetUnknownGameObject();
    func_020421a0();
    search = func_0202ae18();
    grottoInfo = *(Grotto021a51a4**)((char*)func_02012fe4() + 8);
    flagWord = func_020d6c00();
    field3f8 = func_0200fd0c(gs);
    if (!func_02046b08((void**)res->list)) {
        return;
    }
    if (!func_02039820(unknown)) {
        return;
    }
    if (func_020535c8((signed char*)unknown)) {
        return;
    }
    if (unknown->f18c & 1) {
        return;
    }
    if (unknown->fac > 0) {
        return;
    }
    if (field3f8[2] != 0) {
        return;
    }
    start = 0;
    if (!func_02046708(flagWord, 0x800)) {
        if ((g_keyManager.TestKeysPressed(0x400) || res->pending == 1) && unknown->fac == 0) {
            if (!func_0203402c((BitField0203402c*)unknown)) {
                start = 1;
            }
        }
    } else {
        res->pending = start;
    }
    x = g_touchInput.pressX_;
    y = g_touchInput.pressY_;
    if (func_020c39c8((volatile unsigned short*)0x400006c) != 0) {
        return;
    }
    grotto = (unsigned char*)gs->GetGrottoStruct();
#if !defined(jpn)
    Thresholds021d6a80 thresholds = data_ov017_021d6a80;
    level = func_0200fb08((Struct0200fb08*)GameState::GetInstance());
#endif
    int touched;
    if (g_touchInput.isRepeatValid_ && g_touchInput.currentReading_.isHeld &&
#if defined(jpn)
        0xb0 <= x
#else
        thresholds.values[level - 1] <= x
#endif
         && x <= 0xf8 && y >= 0xa2 && y <= 0xb2) {
        touched = 1;
    } else {
        touched = 0;
    }
    if (func_0202c508(search) && grotto[0] != 0 && grottoInfo->kind == 0
        && (g_keyManager.TestKeysPressed(0x800) || touched)) {
        func_ov017_021befe4(res->state53);
        func_020469b4(res->list, (TailNode020469b4*)res->state53);
        return;
    }
    if (start) {
        func_020397cc((Obj020397cc*)unknown, 1);
        unknown->fb2 = 0;
        res->pending = 0;
        func_0205eaa0((Obj0205eaa0*)&data_02108760, 1, 0);
        func_ov017_021a5568(res->node);
        Node021a51a4* node = res->node;
        node->f24 = 0;
        node->f28 = 0;
        node->f2c = -1;
        func_020469b4(res->list, (TailNode020469b4*)res->node);
        return;
    }
    if (grotto[0] != 0 && func_0202c540(search) == 0 && grottoInfo->kind == 0) {
        return;
    }
    if (res->f41c0 != 0) {
        return;
    }
    if (!g_keyManager.TestKeysPressed(0x800)) {
        return;
    }
    if (res->pending != 0 || unknown->fac != 0) {
        return;
    }
    if (func_0203402c((BitField0203402c*)unknown)) {
        return;
    }
    if (func_02039d7c((char*)unknown)) {
        return;
    }
    func_020397cc((Obj020397cc*)unknown, 1);
    unknown->fb2 = 0;
    dialog = res->dialog;
    func_ov017_021b2174(dialog);
    func_ov017_021b2ba0((S021b2ba0*)dialog, &data_ov017_021d76dc);
    func_ov017_021b2bd0(dialog, (int)func_ov004_0216ae2c, OVERLAY_ID(4));
    func_020469b4(res->list, (TailNode020469b4*)dialog);
    func_020dc2d0(3);
    func_020213fc(res->flags, 1);
    func_02027bac((FlagBlob02027bac*)res->flags, 1);
}
