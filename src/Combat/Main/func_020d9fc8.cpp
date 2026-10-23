#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"

extern "C" void func_020397c0(void* obj);
extern "C" void* func_020d6c00(void);
struct FlagWord020466f4 {
    unsigned int flags;
};
extern "C" void func_020466f4(struct FlagWord020466f4* word, unsigned int mask);

struct Struct020d9fc8 {
    char pad[0xc];
    int arr[1];
};

// USA: func_020d9fc8
extern "C" ARM void func_020d9fc8(struct Struct020d9fc8* p) {
    int x = (int)BackgroundLoader::GetInstance();
    int i;
    for (i = 0; i < 1; i++) {
        if (p->arr[i] != -1) {
            ((BackgroundLoader*)(x))->RemoveTask((int)(p->arr[i]));
            p->arr[i] = -1;
        }
    }
    func_020397c0(GameState::GetInstance()->GetUnknownGameObject());
    func_020466f4((struct FlagWord020466f4*)func_020d6c00(), 0x1e);
    *((unsigned char*)p + 1) = 1;
}
