#include "Combat/TryApplyElemFields.h"
#include <globaldefs.h>
#if defined(jpn)
enum { kRegion960 = 0x800 };
enum { kRegion3ba = 0x3d2 };
enum { kRegion3bb = 0x3d3 };
enum { kRegion7c = 0x94 };
enum { kRegion148 = 0x160 };
enum { kRegion98 = 0xb0 };
#else
enum { kRegion960 = 0x960 };
enum { kRegion3ba = 0x3ba };
enum { kRegion3bb = 0x3bb };
enum { kRegion7c = 0x7c };
enum { kRegion148 = 0x148 };
enum { kRegion98 = 0x98 };
#endif

#include "std_library_functions.h"
#include "Input/Input.h"

struct StructA0205d5d0;
#if defined(jpn)
#endif
#if !defined(jpn)
#endif
extern "C" void func_ov003_0215e13c(char* base, char* dst, int flag);
extern "C" void func_ov003_0215de6c(char* base, void* buf);

struct MenuCursor_0215db2c {
    char unk_0[0x30];
    int index;
};

struct MenuList_0215db2c {
    int unk_0;
    struct MenuCursor_0215db2c cursors[1];
};

static inline struct MenuCursor_0215db2c* GetCursor(struct MenuList_0215db2c* list) { SDK_NULL_ASSERT(list); return list->cursors; }

// USA: func_ov003_0215db2c
extern "C" ARM void func_ov003_0215db2c(char* self) {
    unsigned char mode = *(unsigned char*)(self + kRegion3ba);
    if (mode != 0) {
        int flag = 0;
        if (mode == 2 && g_touchInput.isRepeatValid_ != 0 && g_touchInput.currentReading_.isHeld != 0) {
            if (GetCursor((struct MenuList_0215db2c*)(self + kRegion98))->index < 0) {
                return;
            }
            flag = 1;
        }
        memset(*(void**)(self + kRegion7c), 0, kRegion960);
        unsigned char page = *(unsigned char*)(self + kRegion148);
        if (page == 1) {
            func_ov003_0215e13c(self, *(char**)(self + kRegion7c), flag);
        }
        if (page != 0) {
#if defined(jpn)
            func_0205d5d0((struct StructA0205d5d0*)(self + kRegion98), page, *(int*)(self + kRegion7c), 1);
#else
            func_0205d5d0((struct StructA0205d5d0*)(self + kRegion98), page, *(int*)(self + kRegion7c), 1, 0);
#endif
        }
    }
    if (*(unsigned char*)(self + kRegion3bb) != 0) {
        memset(*(void**)(self + kRegion7c), 0, kRegion960);
        func_ov003_0215de6c(self, *(void**)(self + kRegion7c));
#if defined(jpn)
        func_0205d5d0((struct StructA0205d5d0*)(self + kRegion98), 0, *(int*)(self + kRegion7c), 1);
#else
        func_0205d5d0((struct StructA0205d5d0*)(self + kRegion98), 0, *(int*)(self + kRegion7c), 1, 0);
#endif
        *(unsigned char*)(self + kRegion3bb) = 0;
    }
}
