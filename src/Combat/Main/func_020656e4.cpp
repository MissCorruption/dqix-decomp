#include <globaldefs.h>
#include "Resource/MessageSystem.h"
#include "Resource/MessageUpdate.h"
#include "Combat/EntryGetterTypes.h"

extern "C" void* func_0203cf4c(void);

struct EntryList_203dce4;
struct Entry_203dce4;
extern "C" struct Entry_203dce4* func_0203dce4(struct EntryList_203dce4* list, int id);

// USA: func_020656e4
ARM int MessageSystem::func_020656e4(int unusedDelta) {
    if (!pendingValueActive) return 0;

    struct Entry_203dce4* entry = func_0203dce4(
        (struct EntryList_203dce4*)func_0203cf4c(),
        selectedEntry);
    if (entry == NULL) return 0;

    int result = 1;
    func_02040af0(entry,
        pendingValue);

    if (func_020409e0(entry) ==
        func_02040a20(entry)) {
        pendingValueActive = 0;
        result = 0;
    }
    return result;
}
