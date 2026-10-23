#include <globaldefs.h>

#include "GameState/GameState.h"
#include "NitroSDK/ColorEffects.h"
#include "NitroSDK/Matrix.h"

extern "C" void func_02012fe4();
extern "C" void* func_0202ae18();
extern "C" int func_0202c540(void* p);
extern "C" int func_02023a9c(char* base, int index);
extern "C" void func_0202756c(void *receiver, int x, int y, int index, unsigned char type, unsigned char flags,
                              unsigned short palette, unsigned char opacity, int scaleX, int scaleY);

struct MarkerEntry02023b5c {
    unsigned char unknown0[0x10];
    Vector3i position;
};

#if defined(jpn)
enum { regionalOffset = -0xac };
#else
enum { regionalOffset = 0 };
#endif

struct MarkerReceiver02023b5c {
    unsigned char unknown0[0x38];
    fix32_t scale;
    unsigned char unknown3c[0x77c - 0x3c + regionalOffset];
    int active;
    unsigned char count;
    unsigned char unknown781[3];
    MarkerEntry02023b5c entries[(0x9b4 - 0x784) / 0x1c];
    int blinkTimer;
    unsigned char unknown9b8[2];
    unsigned char visible;
};

// USA: func_02023b5c
extern "C" ARM void func_02023b5c(void *receiver, int tileX, int tileY, int xOffset, int yOffset, unsigned char flag) {
    MarkerReceiver02023b5c *self = static_cast<MarkerReceiver02023b5c *>(receiver);
    func_02012fe4();
    if (!self->active) return;
    if (func_0202c540(func_0202ae18())) return;
    self->blinkTimer = (self->blinkTimer + GameState::GetInstance()->GetEffectiveDeltaTime()) % 0x300;
    int alpha = abs((self->blinkTimer - 0x180) / 0x18) + 2;
    if (alpha > 16) alpha = 16;
    bool subScreen = true;
    unsigned char count = self->count;
    for (int i = 0; i < count; i++) {
        if (!func_02023a9c(static_cast<char *>(receiver), i)) continue;
        Vector3i position;
        position = self->entries[i].position;
        fix32_t scale = self->scale;
        int x         = static_cast<int>(static_cast<float>(FIX32_MULTIPLY(position.x, scale)) / 4096.0f) - tileX;
        int y         = static_cast<int>(static_cast<float>(FIX32_MULTIPLY(position.z, scale)) / 4096.0f) - tileY;
        if (flag) {
            y = -(static_cast<int>(static_cast<float>(FIX32_MULTIPLY(position.y, scale)) / 4096.0f) - tileY);
        }
        if (!self->visible) continue;
        ColorEffect_ConfigureAlphaBlend(subScreen ? 0x04001050 : 0x04000050, 0, 3, alpha, 16 - alpha);
        func_0202756c(receiver, (x + xOffset) << 12, (y + yOffset) << 12, 0x17,
                                 static_cast<unsigned char>(i + 0x60), 1, 0xff, 0xff, 0x1000, 0x1000);
    }
}
