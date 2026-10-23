#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_0200fd48(GameState* battleStruct, int id);
extern "C" void func_02059cc8(unsigned char* obj);

struct MainBlock0205859c {
    int listHead;
    int listCount;
    unsigned char slots[0x10 * 0xd4];
    int current;
    void* tail;
    int pendingCount;
};

// USA: func_0205859c
extern "C" ARM void func_0205859c(struct MainBlock0205859c* self) {
    GameState* bs = GameState::GetInstance();
    int i, j;
    for (i = 0; i < 0x10; i++) {
        func_0200fd48(bs, i + 0xd0);
    }
    for (j = 0; j < 0x10; j++) {
        func_02059cc8(self->slots + j * 0xd4);
    }
    self->current = 0;
    if (self->tail != NULL) {
        *(int*)((char*)self->tail + 0x1ec) = 0;
        self->listCount = self->pendingCount;
    } else {
        self->listHead = 0;
        self->listCount = 0;
    }
}
