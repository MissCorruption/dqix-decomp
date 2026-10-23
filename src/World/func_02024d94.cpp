#include "GameState/GameState.h"
#include "World/Zone3D.h"
#include <globaldefs.h>
#if defined(jpn)
enum { Enum_02024d94_1004 = 0xc, Enum_02024d94_8192 = 0x2400, Enum_02024d94_12 = 0x4c };
#else
enum { Enum_02024d94_1004 = 0x3ec, Enum_02024d94_8192 = 0x2000, Enum_02024d94_12 = 12 };
#endif

extern "C" void *func_02012fe4();
extern "C" void func_02027974(void *arg0, int arg1, void *arg2);

static inline char *inline_02024d94(Zone3D *arg0) {
    return reinterpret_cast<char *>(arg0) + Enum_02024d94_1004;
}

static inline ActiveGrottoClass *inline_02024d94_2(char *arg0) {
    return reinterpret_cast<ActiveGrottoClass *>(arg0 + Enum_02024d94_8192);
}

// USA: func_02024d94
extern "C" ARM void func_02024d94(void *arg0, unsigned short arg1, Vector3i *arg2) {
    GameState *var0        = GameState::GetInstance();
    Zone3D *var1                = static_cast<Zone3D *>(func_02012fe4());
    unsigned char *var2 = reinterpret_cast<unsigned char *>(&var0->unk_6fc0[Enum_02024d94_12]) + ((arg1 % 20) - 1) * 32;

    int var3 = static_cast<int>((4.0f + static_cast<float>(arg2->x) / 4096.0f) / 8.0f);
    int var4 = static_cast<int>((4.0f + static_cast<float>(arg2->z) / 4096.0f) / 8.0f);
    if (var3 < 8) {
        var2[var4 * 2] |= 1U << var3;
    } else {
        var2[var4 * 2 + 1] |= 1U << (var3 - 8);
    }

    func_02027974(arg0, reinterpret_cast<int>(inline_02024d94_2(inline_02024d94(var1))->floorMap_.pMapAdjacencyData),
                  *reinterpret_cast<void **>(static_cast<char *>(arg0) + 0x6c));
}
