#include <globaldefs.h>
#if defined(jpn)
enum { kRegionalFieldOffset = 0x5a68 };
#else
enum { kRegionalFieldOffset = 0x5cc8 };
#endif

#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" void* func_020d6c00(void);
struct FlagWord02046708;
extern "C" int func_02046708(struct FlagWord02046708* word, unsigned int mask);
extern "C" int func_0202b284(int unused, int threshold);
extern "C" void func_020466e4(unsigned int* p, unsigned int mask);
extern "C" void func_ov017_021c37a4(void);
struct GameResources;
void SetBrightness(GameResources*, int, int);
struct StateBits5ccc_11544;
extern "C" void func_02011544(struct StateBits5ccc_11544* state);

// USA: func_0202b1f4
extern "C" ARM int func_0202b1f4(int* outPtr) {
    GameState* battleStruct = GameState::GetInstance();
    int ctx = ((int)GetGameResources());
    struct FlagWord02046708* flagWord = (struct FlagWord02046708*)func_020d6c00();
    if (func_02046708(flagWord, 0x1000000)) {
        return 3;
    }
    int result = func_0202b284((int)outPtr, 1);
    if ((unsigned int)((result + 0xfe) & 0xff) > 1) {
        return result;
    }
    func_020466e4((unsigned int*)flagWord, 0x1000000);
    func_ov017_021c37a4();
    SetBrightness((GameResources*)ctx, -16, 10);
    *(unsigned char*)((char*)battleStruct + kRegionalFieldOffset) = 4;
    func_02011544((struct StateBits5ccc_11544*)battleStruct);
    *outPtr = 3;
    return 3;
}
