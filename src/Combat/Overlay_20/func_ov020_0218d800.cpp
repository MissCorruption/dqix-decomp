#include <globaldefs.h>

#if defined(jpn)
#define func_020c39c8 func_020c5494
#endif

#if defined(jpn)
#define func_020c39a0 func_020c546c
#endif

#if defined(jpn)
enum { kSecondFadeOffset = 0x484 };
#else
enum { kSecondFadeOffset = 0x4f4 };
#endif

extern "C" void func_020c39a0(short* out, int value);
extern "C" int func_020c39c8(volatile unsigned short* p);

struct MasterBrightnessFade {
    float currentBrightness;
    int targetBrightness;
    int remainingMilliseconds;
};

struct FieldGroup4f4_0218d800 {
    char unknown0[kSecondFadeOffset];
    MasterBrightnessFade subFade;
};

// USA: func_ov020_0218d800
extern "C" ARM void func_ov020_0218d800(struct FieldGroup4f4_0218d800* display, int targetBrightness, int durationMilliseconds) {
    if (durationMilliseconds == 0) {
        func_020c39a0((short*)0x400106c, targetBrightness);
        display->subFade.currentBrightness = (float)targetBrightness;
        display->subFade.targetBrightness = targetBrightness;
        display->subFade.remainingMilliseconds = 0;
    } else {
        int currentBrightness = func_020c39c8((volatile unsigned short*)0x400106c);
        display->subFade.currentBrightness = (float)currentBrightness;
        display->subFade.targetBrightness = targetBrightness;
        display->subFade.remainingMilliseconds = durationMilliseconds;
    }
}
