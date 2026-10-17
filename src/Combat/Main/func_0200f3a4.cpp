#include <globaldefs.h>
#include "System/Memory.h"
#include "System/Timing.h"
#include "Util/Random.h"
#include "std_library_functions.h"
#include "GameState/GameState.h"

extern "C" void func_020c99c8(void* out);
void InitBigManagerStruct0208660c(char* base);
struct PartyExtension;
extern "C" void func_02082828(PartyExtension* ext);
void ClearSubstructBytes_0200fb40(void* obj);
struct Pair0209a338;
void ClearFirstTwoWords0209a338(Pair0209a338* p);
struct S_02010124;
void InitFields02010124(S_02010124* obj);
void ResetState_020118fc(void* obj);
void* GetDataPtr02114e04_020d6c00();
struct S02046730;
void ClearField0x0_02046730(S02046730* p);
struct State0200fad4;
void ClearFlagsAndValue0200fad4(State0200fad4* s);

struct DayCycleConfig020f33b4 {
    unsigned char initialized;
    float dayLength;
    float unk8;
    float startTime;
    float unk10;
    float unk14;
};
extern DayCycleConfig020f33b4 data_020f33b4;

struct Flags0x569c {
    unsigned int f0_11 : 12;
    unsigned int f12_15 : 4;
    unsigned int f16_20 : 5;
    unsigned int f21_24 : 4;
    unsigned int bit25 : 1;
    unsigned int bit26 : 1;
    unsigned int bit27 : 1;
    unsigned int bit28 : 1;
    unsigned int bit29 : 1;
    unsigned int bit30 : 1;
    unsigned int bit31 : 1;
};

struct Flags0x56a0 {
    unsigned int f0_8 : 9;
    unsigned int f9_18 : 10;
    unsigned int f19_29 : 11;
    unsigned int bit30 : 1;
    unsigned int bit31 : 1;
};

struct LoopWordFlags {
    unsigned int low7 : 7;
    unsigned int upper25 : 25;
};

struct HalfFlags0x12 {
    unsigned short low14 : 14;
    unsigned short bit14 : 1;
    unsigned short bit15 : 1;
};

struct Entry7200 {
    char a[6];
    char b[0xb];
    unsigned char c11;
    HalfFlags0x12 hw;
    char d[0x18];
};

struct HalfFlags0x78 {
    unsigned short low13 : 13;
    unsigned short high3 : 3;
};

struct ByteFlags0x7ff0 {
    unsigned char bit0 : 1;
    unsigned char bit1 : 1;
    unsigned char bit2 : 1;
    unsigned char bit3 : 1;
    unsigned char bit4 : 1;
    unsigned char rest : 3;
};

// USA: func_0200f3a4
extern "C" ARM void func_0200f3a4(void* obj) {
    GameState* gs = (GameState*)obj;
    char* base = (char*)obj;
    unsigned char buf[0x54];
    unsigned char v;

    func_020c99c8(buf);
    v = buf[0];
    *(unsigned char*)(base + 5) = v;
    if (v != 2 && v != 5) *(unsigned char*)(base + 5) = 1;

    memset(gs->objects_, 0, sizeof(gs->objects_));

    InitBigManagerStruct0208660c(base + 0x2a04);

    gs->unknown_3b0_ = 0;
    gs->protagonistObjectIndex_ = 0;
    for (int i = 0; i < 4; i++) {
        func_02082828((PartyExtension*)(base + 0x474 + i * 0x964));
    }

    VectorizedMemset(base + 0x3f8, 0, 0x70);
    *(unsigned char*)(base + 0x3fc) = 1;
    *(unsigned char*)(base + 0x400) = 1;
    *(unsigned char*)(base + 0x401) = 1;
    *(signed char*)(base + 0x403) = -1;
    *(int*)(base + 0x418) = -1;
    *(int*)(base + 0x41c) = -1;
    *(int*)(base + 0x420) = -1;
    *(int*)(base + 0x424) = -1;
    *(short*)(base + 0x416) = -1;
    *(unsigned char*)(base + 0x404) = 0;
    *(short*)(base + 0x464) = -1;
    *(int*)(base + 0x5ca4) = 0;
    *(int*)(base + 0x5ca8) = 0;

    gs->dayLength_ = data_020f33b4.dayLength;
    gs->daySpeed_ = 1.0f / 60.0f;
    gs->dayTimer_ = data_020f33b4.startTime;
    gs->timeOfDay_ = TimeOfDay_Day;
    gs->dayTimerRunning_ = 1;
    gs->unknown_3e0_ = 0;
    memset(&gs->mainTimestamp_, 0, sizeof(gs->mainTimestamp_));
    memset(&gs->altTimestamp_, 0, sizeof(gs->altTimestamp_));

    *(int*)(base + 0x5cb0) = 1;
    *(int*)(base + 0x5cb4) = 1;
    *(int*)(base + 0x5cb8) = 1;
    *(int*)(base + 0x5cbc) = 1;
    *(unsigned char*)(base + 0x5728) = 0;
    *(unsigned char*)(base + 0x5729) = 0;
    memset(base + 0x5cc0, 0, 8);

    *(unsigned char*)(base + 0x63d4) = 0;
    *(unsigned char*)(base + 0x5cda) = 8;
    memset(base + 0x5cdc, 0, 0x190);

    {
        unsigned long long timestamp = GetCurrentTimestamp();
        srand(timestamp & 0xffffffff);
        SeedRandom64(GetBTRandom(), timestamp);
    }

    *(int*)(base + 0x7f5c) = 0;
    *(int*)(base + 0x7f60) = 0;
    *(int*)(base + 0x7f64) = 0;
    *(int*)(base + 0x7f68) = 0;
    ClearSubstructBytes_0200fb40(base);

    ((Flags0x569c*)(base + 0x569c))->f0_11 = 0x7d0;
    ((Flags0x569c*)(base + 0x569c))->f12_15 = 1;
    ((Flags0x569c*)(base + 0x569c))->f16_20 = 1;
    ((Flags0x569c*)(base + 0x569c))->bit28 = 0;
    ((Flags0x569c*)(base + 0x569c))->f21_24 = 0;
    ((Flags0x569c*)(base + 0x569c))->bit27 = 0;
    ((Flags0x569c*)(base + 0x569c))->bit25 = 0;
    ((Flags0x569c*)(base + 0x569c))->bit26 = 0;
    ((Flags0x569c*)(base + 0x569c))->bit29 = 0;
    ((Flags0x569c*)(base + 0x569c))->bit30 = 1;
    ((Flags0x569c*)(base + 0x569c))->bit31 = 0;
    ((Flags0x56a0*)(base + 0x56a0))->f0_8 = 0x1ff;
    ((Flags0x56a0*)(base + 0x56a0))->bit30 = 0;
    ((Flags0x56a0*)(base + 0x56a0))->f9_18 = 300;
    ((Flags0x56a0*)(base + 0x56a0))->f19_29 = 706;
    *(unsigned char*)(base + 0x56a4) = 0;

    ClearFirstTwoWords0209a338((Pair0209a338*)(base + 0x572c));
    memset(base + 0x5734, 0, 0x570);

    *(short*)(base + 0x5e6c) = 0;
    for (int i = 0; i < 6; i++) {
        *(short*)(base + i * 0x28 + 0x5e70) = -1;
        {
            LoopWordFlags* w = (LoopWordFlags*)(base + 0x5e74 + i * 0x28);
            w->low7 = 0;
            w->upper25 = 0;
        }
        memset(base + 0x5e78 + i * 0x28, 0, 0xc);
        memset(base + 0x5e84 + i * 0x28, 0, 0x12);
    }

    memset(base + 0x5f60, 0, 4);

    *(short*)(base + 0x5f64) = -1;
    *(short*)(base + 0x5f66) = 0;
    *(short*)(base + 0x5f68) = 0;
    memset(base + 0x5f6c, 0, 4);

    memset(base + 0x5f70, 0, 4);
    memset(base + 0x5f74, 0, 4);

    {
        HalfFlags0x78* f = (HalfFlags0x78*)(base + 0x5f78);
        f->low13 = 0;
        f->high3 = 0;
    }
    *(int*)(base + 0x5f7c) = 0;

    memset(base + 0x5f80, 0, 0x200);
    memset(base + 0x6180, 0, 0x200);
    memset(base + 0x6380, 0, 0x54);
    memset(base + 0x5718, 0, 4);

    *(unsigned char*)(base + 0x571c) = 1;

    memset(base + 0x571d, 0, 4);

    *(unsigned char*)(base + 0x5721) = 1;

    *(unsigned int*)(base + 0x5ccc) &= ~1u;
    *(unsigned int*)(base + 0x5ccc) |= 2u;

    InitFields02010124((S_02010124*)base);

    *(unsigned char*)(base + 0x63d6) = 0;
    *(short*)(base + 0x63d8) = 0;
    *(short*)(base + 0x63da) = 0;
    *(int*)(base + 0x63e0) = 0;
    *(unsigned char*)(base + 0x63e4) = 0;
    *(unsigned char*)(base + 0x63e5) = 0;
    *(unsigned char*)(base + 0x63e6) = 1;
    *(unsigned char*)(base + 0x63e7) = 0;
    *(unsigned char*)(base + 0x63e8) = 0;
    *(unsigned char*)(base + 0x63ed) = 0;
    ResetState_020118fc(base);

    *(unsigned char*)(base + 0x6480) = 0;
    VectorizedMemset(base + 0x649e, 0, 0x40);

    *(unsigned char*)(base + 0x64de) = 0;
    *(int*)(base + 0x6474) = -1;
    *(unsigned char*)(base + 0x63dc) = 0;
    *(short*)(base + 0x71dc) = 0;
    gs->unk_7f58 = 0;
    *(short*)(base + 0x71de) = -1;
    *(short*)(base + 0x71e0) = -1;
    *(int*)(base + 0x5724) = 0;

    if (*(int*)(base + 0x7f6c) < 1) {
        *(int*)(base + 0x7f6c) = 0;
        *(unsigned char*)(base + 0x7f72) = 0;
        *(unsigned char*)(base + 0x7f73) = 0;
    }
    *(unsigned char*)(base + 0x7f70) = 0;
    *(unsigned char*)(base + 0x63d5) = 1;
    if (data_020f33b4.initialized == 0) {
        *(unsigned char*)(base + 0x7f71) = 0;
        data_020f33b4.initialized = 1;
    }

    *(int*)(base + 0x71f8) = 0;
    *(unsigned char*)(base + 0x71fc) = 0;

    for (int i = 0; i < 16; i++) {
        VectorizedMemset(((Entry7200*)(base + 0x7200 + i * 0x2c))->a, 0, 6);
        memset(((Entry7200*)(base + 0x7200 + i * 0x2c))->b, 0, 0xb);
        ((Entry7200*)(base + 0x7200 + i * 0x2c))->hw.low14 = 0;
        *(unsigned char*)(base + i * 0x2c + 0x7211) = 0;
        ((Entry7200*)(base + 0x7200 + i * 0x2c))->hw.bit14 = 0;
        VectorizedMemset(((Entry7200*)(base + 0x7200 + i * 0x2c))->d, 0, 0x18);
    }

    memset(base + 0x74de, 0, 0x20);
    memset(base + 0x74fe, 0, 6);
    memset(base + 0x71e4, 0, 0xc);

    *(int*)(base + 0x71f0) = 0;
    *(int*)(base + 0x71f4) = 0;

    ClearField0x0_02046730((S02046730*)GetDataPtr02114e04_020d6c00());

    memset(base + 0x7504, 0, 0xec);
    memset(base + 0x75f0, 0, 0x4d0);
    memset(base + 0x7ac0, 0, 0x3b4);

    *(unsigned char*)(base + 0x7e7e) = 0xff;
    *(short*)(base + 0x7e78) = 0;
    *(short*)(base + 0x7e7a) = 0;
    *(short*)(base + 0x7e7c) = 0;
    *(int*)(base + 0x7e74) = 0x452;
    *(unsigned char*)(base + 0x5cac) = 0;
    gs->currentNumTicks_ = 0;

    for (int i = 0; i < 3; i++) {
        ClearFlagsAndValue0200fad4((State0200fad4*)(base + 0x7f8c + i * 0xc));
        VectorizedMemset(base + 0x74c0 + i * 0xa, 0, 6);
        *(signed char*)(base + i * 0xa + 0x74c6) = -1;
        *(unsigned char*)(base + i * 0xa + 0x74c7) = 0;
        *(unsigned char*)(base + i * 0xa + 0x74c8) = 0;
        *(signed char*)(base + i * 0xa + 0x74c9) = -1;
    }

    memset(base + 0x7fb0, 0, 0x40);

    {
        ByteFlags0x7ff0* f = (ByteFlags0x7ff0*)(base + 0x7ff0);
        f->bit0 = 0;
        f->bit1 = 0;
        f->bit2 = 0;
        f->bit3 = 0;
        f->bit4 = 0;
    }
    *(unsigned char*)(base + 0x7ff1) = 0;
    *(unsigned char*)(base + 0x7ff2) = 0;
}
