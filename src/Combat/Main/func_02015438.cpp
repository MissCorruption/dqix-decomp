#include <globaldefs.h>
#include "World/ZoneLifecycle.h"
#include "GameState/GameState.h"
#include "Graphics/LightingManager.h"
#include "Resource/GameResources.h"
#include "World/Zone3D.h"

struct HeadNode02046b24;
struct EntryList0217208;
extern "C" int func_02046b24(struct HeadNode02046b24** obj);
extern "C" void func_02015518(void* a, char* list);
extern "C" void func_020397c0(void* obj);
extern "C" void func_02013e18(Zone3D* self);
extern "C" void func_02017208(struct EntryList0217208* self);
extern "C" void func_020158cc(Zone3D* self);
extern "C" void func_020a84e0();
extern "C" void func_0201ba68(void*);
extern "C" void func_0201bdac(unsigned char*);

// USA: func_02015438
extern "C" ARM void func_02015438(Zone3D* self) {
#if defined(jpn)
    enum { headOffset = 0x4ec };
#else
    enum { headOffset = 0x6fc };
#endif
    GameState* battle = GameState::GetInstance();
    if (*(int*)&self->unk_428[0] == 0)
        return;

    if (self->unknown_424_ != 0) {
        func_02013e18(self);
        return;
    }

    char* p = (char*)self->firstBMDJStruct_41c_;
    while (p != 0) {
        func_02015518(self, p);
        p = *(char**)(p + 0x54);
    }

    unsigned char n = self->unk_830[0];
    if (n != 0) {
        n--;
        self->unk_830[0] = n;
        if ((self->unk_830[0] & 0xff) == 0) {
            void* actor = battle->GetProtagonist();
            if (actor != 0) {
                if (func_02046b24(
                        *(struct HeadNode02046b24***)((char*)GetGameResources() + 0x3000 + headOffset)) != 4) {
                    func_020397c0(actor);
                }
            }
            self->unk_830[0] = 0;
        }
    }

    func_02017208((struct EntryList0217208*)self);
    func_020158cc(self);
    LightingManager::GetInstance()->RecomputeAdvancedLighting();
    func_020a84e0();
    func_0201ba68(self);
    func_0201bdac((unsigned char*)self);
    func_0201bfd4(self);
}
