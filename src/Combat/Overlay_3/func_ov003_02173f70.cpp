#include <globaldefs.h>
#include "Combat/MapDisplay.h"

struct EntryManager020e2490;
struct Node0207f7f0 { Node0207f7f0* prev; char pad_04[0xdc]; };
struct Manager0207f7f0 {
    char pad_00[0x2c];
    void* menu;
    Node0207f7f0* nodes;
    char pad_34[4];
    unsigned char mode;
    unsigned char count;
    unsigned char layout;
    char pad_3b[5];
};
struct BattleMenuAllocation {
    EntryManager020e2490* manager;
    SafeAllocator* allocators;
    char pad_08[0x814 - 8];
    void* entryData;
    Struct0205a198* activeEntries;
    char pad_81c[8];
    unsigned short entryCount;
    char pad_826[2];
    unsigned char state;
    char pad_829[3];
    void* data;
    Struct0205a198* entries;
    char pad_834[0x89c - 0x834];
    Manager0207f7f0* menuManager;
    char menu[0x40];
    Node0207f7f0 nodes[8];
};

unsigned int data_ov003_02180cc8;
static unsigned int allocatorSizesInitialized02173f70;
extern unsigned int data_ov003_02180a8c[6];
extern unsigned int data_ov003_02180a8c_dup;
void InitEntryManager020e2490(EntryManager020e2490*, int, int, void*, SafeAllocator*, int, unsigned char);
void InitNodeChain0207f7f0(Manager0207f7f0*, Node0207f7f0*, int);
void Init0205a198(Struct0205a198*);
extern "C" void func_0207f84c(Manager0207f7f0*);

// USA: func_ov003_02173f70
extern "C" ARM void func_ov003_02173f70(BattleMenuAllocation* self, SafeAllocator* allocator) {
    if (allocator == NULL) return;
    self->allocators = static_cast<SafeAllocator*>(allocator->Allocate(0x78));
    self->entries = static_cast<Struct0205a198*>(allocator->Allocate(0x528));
    self->menuManager = static_cast<Manager0207f7f0*>(allocator->Allocate(0x40));
    self->data = allocator->Allocate(8);
    self->manager = static_cast<EntryManager020e2490*>(allocator->Allocate(0x24));
    InitEntryManager020e2490(self->manager, 0, 1, self->data, allocator, 4, 0x40);
    if (!(allocatorSizesInitialized02173f70 & 1)) {
        data_ov003_02180a8c_dup = 0x16a66;
        allocatorSizesInitialized02173f70 |= 1;
    }
    for (unsigned char i = 0; i < 6; i++) {
        unsigned int size = data_ov003_02180a8c[i];
        SafeAllocator* allocators = self->allocators;
        allocators[i].ResetAllocatorPointer();
        allocators[i].CreateTypeA(allocator->Allocate(size), size);
        allocators[i].Reset();
    }
    func_0207f84c(self->menuManager);
    Manager0207f7f0* menu = self->menuManager;
    menu->menu = self->menu;
    menu->mode = 2;
    InitNodeChain0207f7f0(self->menuManager, self->nodes, 8);
    self->menuManager->layout = 2;
    for (unsigned char i = 0; i < 33; i++) Init0205a198(&self->entries[i]);
    self->state = 0;
    self->activeEntries = self->entries;
    self->entryCount = 33;
    self->entryData = self->data;
}
