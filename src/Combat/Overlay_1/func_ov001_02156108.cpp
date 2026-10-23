#include <globaldefs.h>
#include "Resource/FontBankLoader.h"
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

#if defined(jpn)
enum { globalOffset = 0x4c };
#else
enum { globalOffset = 0x8c };
#endif

extern "C" char* func_020421a0(void);
extern "C" void func_0208beb4(unsigned char* obj);
extern "C" void func_0208bb78(void* obj, int count);
struct StructAllocGroup0208ba54;
extern "C" void func_0208ba54(struct StructAllocGroup0208ba54*);
extern "C" int func_ov001_02153948(unsigned short arg);

struct Obj02156108 {
    char pad0[0xa];
    unsigned short field0xa;
    char pad1[0x42];
    unsigned short field0x4e;
    unsigned short flags0x50;
#if defined(jpn)
    char pad2[0xa8];
#else
    char pad2[0xac];
#endif
    unsigned char field0xfe;
    char pad3[0x21];
    void* field0x120;
};

// USA: func_ov001_02156108
extern "C" ARM int func_ov001_02156108(struct Obj02156108* self) {
    GameState* battle = GameState::GetInstance();
    char* g6 = func_020421a0();
    unsigned int* obj17 = (unsigned int*)((int)GetGameResources());

    if ((self->flags0x50 & 0x2) || (self->flags0x50 & 0x8)) {
        void* ptr = self->field0x120;
        if (ptr) {
            if (*(short*)((char*)ptr + 0xd2) >= 0) {
                func_0208beb4((unsigned char*)ptr);
                unsigned int scaleCount = battle->GetTickCount();
                func_0208bb78(self->field0x120, scaleCount);
                return self->field0xa;
            }
            func_0208ba54((struct StructAllocGroup0208ba54*)ptr);
        }
        *(int*)(g6 + globalOffset) = 0;
        self->field0x120 = 0;
    }

    if (TestFlags00((GameResources*)obj17, 0x1000) == 0) {
        FontBankLoader* val = func_02094a00();
        func_02094b40(val);
        func_02094ab0(val);
        func_02094b34(val, 0x6f, 0x1388, 1, 1);
    }
    self->field0xfe = 0;
    func_ov001_02153948(self->field0x4e);
    return 0xb;
}
