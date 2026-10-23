#include <globaldefs.h>
#include "Combat/Main/CopyRecord0200fbb4.h"
#include "GameState/GameState.h"

struct S02046b1c;
extern "C" int func_020100a8(GameState* battleStruct);
extern "C" int func_02046b1c(struct S02046b1c* p);
extern "C" void func_02070378(char*);
struct FieldFlagBlock;
extern "C" void func_02011b24(struct FieldFlagBlock* block);

struct Evt021cf5d4 {
    unsigned char pad0[4];
    unsigned short field4;
    signed char field6;
    unsigned char field7;
};

struct S3f8_cf5d4 {
    short field0;
    char field2;
    char pad[0x70 - 3];
};

// USA: func_ov017_021cf5d4
extern "C" ARM void func_ov017_021cf5d4(void* unused0, struct Evt021cf5d4* evt, GameState* battle, unsigned char* table) {
#if defined(jpn)
 enum {regionalOffset0=0x4ec};
#else
 enum {regionalOffset0=0x6fc};
#endif
    int v = func_020100a8(battle);
    if (evt->field6 != v) {
        return;
    }
    struct S02046b1c* list = *(struct S02046b1c**)(table + 0x3000 + regionalOffset0);
    if (func_02046b1c(list) != 0) {
        return;
    }
    struct S3f8_cf5d4 buf;
    func_02070378((char*)&buf);
    buf.field0 = evt->field4;
    buf.field2 = 1;
    if (evt->field7 != 0) {
        func_02011b24((struct FieldFlagBlock*)battle);
    }
    func_0200fcfc(battle, &buf);
}
