#if defined(jpn)
enum { RegionOffset70c = 0x4fc, RegionOffset6fc = 0x4ec };
#else
enum { RegionOffset70c = 0x70c, RegionOffset6fc = 0x6fc };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

struct Field3f8Struct;
extern "C" Field3f8Struct* func_0200fd0c(GameState* bs);
extern "C" void func_02046a8c(void* list, void* node);
extern "C" unsigned char func_ov017_0219bcac(unsigned char v);
extern "C" void func_ov017_0219e310(unsigned char* node, int v);
struct HeadList020469f8;
struct HeadNode020469f8;
extern "C" void func_020469f8(struct HeadList020469f8* list, struct HeadNode020469f8* node);
struct List02046a3c;
struct Node02046a3c;
extern "C" void func_02046a3c(struct List02046a3c* list, struct Node02046a3c* node);
struct TailList020469b4;
struct TailNode020469b4;
extern "C" void func_020469b4(struct TailList020469b4* list, struct TailNode020469b4* node);

struct NodeHdr0219bd1c {
    char pad[2];
    unsigned char flag2;
    unsigned char flag3;
};

struct Field3f8Struct0219bd1c {
    char pad0[2];
    unsigned char clearedByte;
    char pad1[0x6e - 3];
    unsigned char sbByte;
};

// USA: func_ov017_0219bd1c
extern "C" ARM void func_ov017_0219bd1c(int prepend, unsigned char sb, int insertAfterHead, unsigned char combatantFlag) {
    GameState* bs = GameState::GetInstance();
    void* ctxRaw = GetGameResources();
    char* ctx = (char*)ctxRaw + 0x3000;
    struct Field3f8Struct0219bd1c* field;
    void* list = *(void**)(ctx + RegionOffset6fc);
    struct NodeHdr0219bd1c* node = *(struct NodeHdr0219bd1c**)(ctx + RegionOffset70c);
    field = (struct Field3f8Struct0219bd1c*)func_0200fd0c(bs);
    if (node->flag3) return;
    if (node->flag2) {
        func_02046a8c(list, node);
    }
    func_ov017_0219bcac(combatantFlag);
    field->clearedByte = 0;
    field->sbByte = sb;
    func_ov017_0219e310((unsigned char*)node, 0);
    if (prepend) {
        func_020469f8((struct HeadList020469f8*)list, (struct HeadNode020469f8*)node);
    } else if (insertAfterHead) {
        func_02046a3c((struct List02046a3c*)list, (struct Node02046a3c*)node);
    } else {
        func_020469b4((struct TailList020469b4*)list, (struct TailNode020469b4*)node);
    }
    ClearFlags00((GameResources*)ctxRaw, 4);
}
