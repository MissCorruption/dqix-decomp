#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Input/Input.h"

#if defined(jpn)
enum { kRegionValue1EA_1E6 = 0x1e6 };
enum { kRegionValue1E6_1E2 = 0x1e2 };
#else
enum { kRegionValue1EA_1E6 = 0x1ea };
enum { kRegionValue1E6_1E2 = 0x1e6 };
#endif

struct IntField0x23c_020a27c4;
extern "C" int func_020100f8(char* obj);
extern "C" int func_020a27c4(struct IntField0x23c_020a27c4* obj);
extern "C" int func_ov003_021550dc(void* obj);
extern "C" int func_ov003_02155208(void* self);

struct Obj0205eaa0;
extern "C" void func_0205eaa0(struct Obj0205eaa0* obj, int a, int b);

struct Obj2081;
extern "C" void func_0207fdcc(struct Obj2081* obj, int key);

struct Obj0208203c;
extern "C" void func_0208203c(struct Obj0208203c* obj);

struct Obj020e25e8;
extern "C" void func_020e25e8(struct Obj020e25e8* obj);

extern struct Obj0205eaa0 data_02108760;

// USA: func_ov003_02155618
extern "C" ARM int func_ov003_02155618(char* obj) {
    *(void**)(obj + 8) = obj + kRegionValue1EA_1E6;
    int result = 0;
    int flagB = result;

    GameState* battle = GameState::GetInstance();
    struct IntField0x23c_020a27c4* p = (struct IntField0x23c_020a27c4*)func_020100f8((char*)battle);
    if (p != 0 && ((*((unsigned char*)p + 0x244) & 2) != 0 || func_020a27c4(p) == 0)) {
        flagB = (g_keyManager.TestKeysPressed(0x200) != 0) ? 1 : 0;
    }

    if (func_ov003_021550dc(obj) != 0 || flagB != 0) {
        func_0205eaa0(&data_02108760, 1, 0);
        result = -1;
        if (*(short*)(obj + kRegionValue1EA_1E6) == 6) {
            result = 1;
        }
    } else {
        if (func_ov003_02155208(obj) != 0) {
            result = -1;
        }
    }

    if (result != 0) {
        func_0207fdcc(*(struct Obj2081**)(obj + 0x18), *(short*)(obj + kRegionValue1E6_1E2));
        func_0208203c((struct Obj0208203c*)(obj + 0x80));
        *(void**)(obj + 8) = 0;
    }

    if (*(void**)(obj + 0x1c) != 0 && result != 0) {
        func_020e25e8(*(struct Obj020e25e8**)(obj + 0x1c));
    }

    return result;
}
