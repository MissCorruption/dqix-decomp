#include <globaldefs.h>
#include "GameState/GameState.h"
#include "World/Zone3D.h"
#include "Filesystem/BackgroundLoader.h"
#include "Resource/Brightness.h"
#include "Combat/Main/CopyRecord0200fbb4.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct Vec3 { int x, y, z; };
struct Bounds { Vector3fix upper, lower; };
struct ListHead02046b38;
struct ListNode02046b38;
struct HeadNode02046b24;
struct TailList020469b4;
struct TailNode020469b4;
struct Entry0219ca88 {
    int kind;
    Bounds bounds;
    int destination;
    Vector3fix destinationPosition;
    Vector3fix unknown2c, unknown38, unknown44;
    short destinationAngle, boundsAngle;
    int radiusSquared;
    Vector3fix pivot;
    unsigned char unknown64[8];
    int unknown6c;
};
#if defined(jpn)
enum { ActorFlagsOffset = 0x180 };
#else
enum { ActorFlagsOffset = 0x18c };
#endif
struct Event0219ca88 { unsigned char kind, index; unsigned short id; unsigned char unknown4; Entry0219ca88* entry; int unknownC; unsigned short angle, unknown12; };
struct Header0219ca88 { unsigned int field0, field4, field8, id; unsigned char padding10[0x24]; };

extern "C" Zone3D* func_02012fe4();
extern "C" void* func_0200fd0c(GameState*);
extern "C" void* func_020100bc(GameState*);
extern "C" void* func_0205ec34(void*);
extern "C" int func_02046b38(ListHead02046b38*, ListNode02046b38*);
extern "C" int func_02046b24(HeadNode02046b24**);
extern "C" int func_02046b08(void**);
extern "C" void func_ov017_0219bed0(void*);
extern "C" unsigned char func_0200fb9c(char*);
extern "C" int func_0201201c(void*);
extern "C" int func_020100a8(GameState*);
extern "C" int func_020321e0(const Vector3fix*, Bounds*, int, const Vector3fix*, int);
extern "C" void* func_ov017_0219c6f4(void*);
extern "C" unsigned char func_02039820(void*);
extern "C" void func_ov017_0219a674(unsigned char*);
extern "C" short func_ov017_021a4754(Vector3fix*, int, Vector3fix*);
extern "C" void func_ov017_0219b33c(GameResources*, Event0219ca88*);
extern "C" void func_ov017_0219e310(unsigned char*, int);
extern "C" void func_020469b4(TailList020469b4*, TailNode020469b4*);
extern "C" int func_020649b0(void*, int, void*);
extern "C" void func_0206f81c(void*);

// USA: func_ov017_0219ca88
extern "C" ARM void func_ov017_0219ca88(GameResources* resources) {
    GameState* game = GameState::GetInstance();
    GameObject* actor = game->GetUnknownGameObject();
    Zone3D* container = func_02012fe4();
    unsigned char* state = static_cast<unsigned char*>(func_0200fd0c(game));
    BackgroundLoader::GetInstance();
    Vector3fix* actorPosition;
    int handled = 0;
    void* lookup = func_0205ec34(func_020100bc(game));
    if (func_02046b38((ListHead02046b38*)resources->unknown_ptr_array_36fc[0], (ListNode02046b38*)resources->unknown_ptr_array_36fc[4])) return;
    if (func_02046b24((HeadNode02046b24**)resources->unknown_ptr_array_36fc[0]) == 4) return;
    if (func_02046b24((HeadNode02046b24**)resources->unknown_ptr_array_36fc[0]) == 10) return;
    if (TestFlags08(resources, 8)) {
        if (static_cast<unsigned char*>(resources->unknown_ptr_array_36fc[5])[3]) return;
        if (IsMainBrightnessTransitionActive(resources)) return;
        ClearFlags08(resources, 8);
    }
    if (func_02046b38((ListHead02046b38*)resources->unknown_ptr_array_36fc[0], (ListNode02046b38*)resources->unknown_ptr_array_371c[0])) return;
    if (func_02046b08((void**)resources->unknown_ptr_array_36fc[0]) && !IsBrightnessTransitionActive(resources) && ((unsigned char*)resources->unknown_42e3)[6]) {
        if (state[2]) state[0xa] = 0;
        else func_ov017_0219bed0((void*)1);
        resources->unknown_42e3[6] = 0;
    }
    int eligible = 1;
    if (func_0200fb9c((char*)game) != 6 && func_0201201c(game) != 5) {
        if (*reinterpret_cast<unsigned int*>(reinterpret_cast<char*>(actor) + ActorFlagsOffset) & 1) eligible = 0;
        else if (state[2]) eligible = 0;
        if (eligible) {
            actorPosition = (Vector3fix*)&actor->obj3D_.position_;
            Vector3fix position = *actorPosition;
            for (int entryIndex = 0; entryIndex < container->substruct_6c_.arraySize68_; ++entryIndex) {
                func_020100a8(game);
                Entry0219ca88* entry = (Entry0219ca88*)func_0201e548(&container->substruct_6c_, entryIndex);
                if (func_020321e0(&position, &entry->bounds, entry->boundsAngle, &entry->pivot, entry->radiusSquared)) {
                    func_ov017_0219c6f4(entry);
                    handled = 1;
                }
                if (handled && entry->kind == 1) {
                    handled = 0;
                    if (!func_02039820(actor)) continue;
                    Event0219ca88 event;
                    func_ov017_0219a674((unsigned char*)&event);
                    event.kind = 8;
                    event.entry = entry;
                    event.angle = func_ov017_021a4754(actorPosition, (short)actor->obj3D_.rotation_.y, &entry->pivot);
                    func_ov017_0219b33c(resources, &event);
                }
                if (handled) {
                    if (!static_cast<unsigned char*>(resources->unknown_ptr_array_36fc[5])[3]) break;
                    SetFlags08(resources, 8);
                    return;
                }
            }
        }
    }
    if (state[2]) {
        state[2] = 0;
        handled = 1;
    }
    if (!handled) return;
    func_0200fcfc(game, state);
    func_ov017_0219e310((unsigned char*)resources->unknown_ptr_array_36fc[4], 0);
    func_020469b4((TailList020469b4*)resources->unknown_ptr_array_36fc[0], (TailNode020469b4*)resources->unknown_ptr_array_36fc[4]);
    if (!state[0xa]) {
        Header0219ca88 header;
        header.id = container->currentZoneID_;
        if (func_020649b0(lookup, 6, &header)) func_0206f81c(&header);
    }
}
