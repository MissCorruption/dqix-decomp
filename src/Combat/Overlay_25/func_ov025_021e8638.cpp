#include <globaldefs.h>
#include "Resource/GameResources.h"

struct List02160094;
struct ListNode02160094;

extern "C" struct ListNode02160094* func_ov000_02160094(struct List02160094* list, int index);
extern "C" void func_ov017_0219230c(void* a, int b, int c);

struct Obj021e8638 {
    char pad[0x8];
    signed char field8;
};

// USA: func_ov025_021e8638
extern "C" ARM int func_ov025_021e8638(struct Obj021e8638* obj, struct List02160094* list) {
    void* w = GetGameResources();
    struct ListNode02160094* node = func_ov000_02160094(list, 0);
    func_ov017_0219230c(w, *(unsigned short*)((char*)node + 0x20), obj->field8);
    return 1;
}
