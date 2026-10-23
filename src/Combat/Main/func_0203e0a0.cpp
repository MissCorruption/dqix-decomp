#include <globaldefs.h>

#include "Combat/EntryGetterTypes.h"
#include "NitroSDK/Matrix.h"

extern "C" void *__clear(void *dst, int count);

struct EntrySnapshot {
    short x;
    short y;
    short z;
    short value;
    unsigned short key : 9;
    unsigned short disabled : 1;
    unsigned short nodeCount : 5;
    unsigned short mode : 1;
};

struct SnapshotReceiverView {
    unsigned char unknown0[0xc];
    Entry_203dce4 *entries[32];
    unsigned int count;
    unsigned char unknown90[0xe];
    EntrySnapshot snapshots[32];
    unsigned short id;
    unsigned short copiedCount;
    unsigned short unknown1e2;
    unsigned int selectedMask;
};

struct SnapshotNodeView {
    unsigned char unknown0[0xc];
    unsigned int status;
    SnapshotNodeView *next;
};

struct SnapshotInfoView {
    unsigned char unknown0[0xa];
    unsigned char unknownA0 : 3;
    unsigned char mode : 3;
    unsigned char unknownA6 : 2;
    unsigned char unknownB[0x29];
    SnapshotNodeView *first;
};

// USA: func_0203e0a0
extern "C" ARM void func_0203e0a0(void *receiver, unsigned short id) {
    SnapshotReceiverView *self = static_cast<SnapshotReceiverView *>(receiver);
    self->id                   = id;
    self->copiedCount          = 0;
    Entry_203dce4 **slot       = self->entries;
    EntrySnapshot *snapshot    = self->snapshots;
    unsigned int index         = 0;
    for (; index < self->count; ++slot, ++snapshot, ++index) {
        Entry_203dce4 *entry = *slot;
        if (entry != NULL) {
            Vector3i position;
            __clear(&position, sizeof(position));
            short value = 0;
            if (((unsigned char*)entry->child14) != NULL) {
                position = *(Vector3i *) (((unsigned char*)entry->child14) + 4);
                value    = (short) func_0203cdd0(((StructF0x60_0203cdd0*)entry->child14));
            } else if (((unsigned char*)entry->child18) != NULL) {
                position = *(Vector3i *) (((unsigned char*)entry->child18) + 0x44);
                value    = (short) *(int *) (((unsigned char*)entry->child18) + 0x54);
            } else if (((unsigned char*)entry->child1c) != NULL) {
                position = *(Vector3i *) (((unsigned char*)entry->child1c) + 0x44);
                value    = (short) *(int *) (((unsigned char*)entry->child1c) + 0x54);
            }
            int x               = position.x;
            int z               = position.z;
            int y               = position.y;
            snapshot->x         = (short) (x >> 4);
            snapshot->y         = (short) (y >> 4);
            snapshot->z         = (short) (z >> 4);
            snapshot->value     = value;
            unsigned short *key = (unsigned short *) func_02040528(&entry->flags);
            if (key != NULL) {
                snapshot->key = *key;
            }
            snapshot->disabled     = (entry->flags & 0x8000) != 0;
            snapshot->nodeCount    = 0;
            SnapshotInfoView *info = (SnapshotInfoView *) func_02040538((S02040538 *) entry);
            if (info != NULL) {
                SnapshotNodeView *node = info->first;
                while (node != NULL) {
                    if (node->status != 0) {
                        break;
                    }
                    ++snapshot->nodeCount;
                    node = node->next;
                    if (node == info->first) {
                        break;
                    }
                }
            }
            snapshot->mode = info->mode == 3;
            if (entry->flags & 0x40000) {
                self->selectedMask |= 1U << index;
            }
            ++self->copiedCount;
        }
    }
}
