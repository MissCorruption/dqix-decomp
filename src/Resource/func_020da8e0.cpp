#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

struct ArchiveLoadSlot {
    int resourceID;
    int unknown04;
    int taskID;
};
struct ArchiveLoadingState {
    char unknown00[8];
    int activeResourceID;
    char unknown0c;
    unsigned char flags;
    unsigned char resourceKind;
    char unknown0f[5];
    ArchiveLoadSlot slots[4];
};
extern "C" {
void func_020daa58(void*, void*, int, int);
void func_020dab68(void*, void*, unsigned int);
void func_020da2e4(void*);
}

extern "C" ARM int func_020da8e0(void* statePointer)
{
    ArchiveLoadingState* state = (ArchiveLoadingState*)statePointer;
    BackgroundLoader* loader = BackgroundLoader::GetInstance();
    if (!loader)
        return 0;
    ArchiveLoadSlot* slot = state->slots;
    int allComplete = 1;
    for (unsigned char index = 0; index < 4; ++index, ++slot) {
        int taskID = slot->taskID;
        if (taskID != -1) {
            if (loader->GetTaskStatus(taskID) == 0) {
                allComplete = 0;
            } else {
                unsigned int length = 0;
                void* data = NULL;
                loader->GetLoadedFileByID(taskID, &data, &length);
                switch (state->resourceKind) {
                case 1:
                    func_020daa58(state, data, 3100, 3110);
                    break;
                case 2:
                    func_020daa58(state, data, 3200, 3210);
                    break;
                case 3:
                    func_020dab68(state, data, length);
                    break;
                }
                state->activeResourceID = slot->resourceID;
                state->flags |= 4;
                loader->RemoveTask(taskID);
                func_020da2e4(slot);
            }
        }
    }
    if (allComplete)
        state->flags &= ~1;
    return 1;
}
