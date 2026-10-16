#include <globaldefs.h>
#include "GameState/GameState.h"

GameObject* GetCombatantWithFlag0x100_0200ff1c(GameState* battleStruct, int combatantId);
int ClassifyFlag0x800RatioTier02027bd0(int id);
void CleanInvalidateCacheRange(const void* addr, unsigned int size);
extern "C" int LoadToSubObjStandardPalette(int arg0, int arg1, unsigned int arg2);

extern unsigned char data_020e703e[];
extern unsigned short data_020e7044[] __attribute__((aligned(4)));

struct Global020fdc4c_020276dc {
    unsigned short field0;
    char pad[0x12];
};
extern struct Global020fdc4c_020276dc data_020fdc4c;
// The ROM loads 0x020fdc4c from two pool words: the store goes through one, both calls' address argument
// through the other. Reached here through the next object of the block (see func_02020c18).
extern char data_020fdc50[];

// Two-bit palette tier of each of the four combatants.
struct PaletteTiers020276dc {
    unsigned char tiers;
};

// USA: func_020276dc
extern "C" ARM void func_020276dc(PaletteTiers020276dc* self) {
    GameState* gs = GameState::GetInstance();
    unsigned i;
    unsigned short buf[4];
    for (i = 0; i < 4; i++) {
        int cur;
        int sh;
        int have;
        unsigned char want;

        int k;

        if (GetCombatantWithFlag0x100_0200ff1c(gs, i) == 0) continue;
        want = data_020e703e[ClassifyFlag0x800RatioTier02027bd0(i)];
        cur = self->tiers;
        sh = i << 1;
        have = (cur >> sh) & 3;
        if (have == want) continue;

        self->tiers &= ~(3 << sh);
        self->tiers |= want << sh;
        {
            const unsigned short* s = data_020e7044;
            unsigned short* d = buf;
            k = 4;
            do { *d++ = *s++; } while (--k);
        }
        data_020fdc4c.field0 = buf[want];
        CleanInvalidateCacheRange(data_020fdc50 - 4, 2);
        LoadToSubObjStandardPalette((int)(data_020fdc50 - 4), i * 32 + 0x1e, 2);
    }
}
