#include <globaldefs.h>

typedef unsigned short u16;

extern "C" void func_020b1ff8(void *areaBase, int areaWidth, int areaHeight, int scnWidth, int charNo, int cplt);

// USA: func_020b1f48
extern "C" ARM void func_020b1f48(void *scnBase, int areaWidth, int areaHeight, int areaLeft, int areaTop, int scnWidth, int charNo, int cplt) {
    if (scnWidth <= 32) {
        void *areaBase = (u16 *)scnBase + (scnWidth * areaTop + areaLeft);
        func_020b1ff8(areaBase, areaWidth, areaHeight, scnWidth, charNo, cplt);
    } else {
        const int areaRight = areaLeft + areaWidth;
        const int areaBottom = areaTop + areaHeight;
        const u16 cplt_sft = (u16)(cplt << 12);
        u16 *const pScrBase = (u16 *)scnBase;
        int x, y;

        for (y = areaTop; y < areaBottom; ++y) {
            const int py = (y < 32) ? y : y + 32;
            u16 *pScr = pScrBase + py * 32;

            for (x = areaLeft; x < areaRight; ++x) {
                const int px = (x < 32) ? x : x + 32 * 31;
                *(pScr + px) = (u16)(cplt_sft | charNo++);
            }
        }
    }
}
