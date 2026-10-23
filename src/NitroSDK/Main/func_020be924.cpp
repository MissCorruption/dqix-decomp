#include <globaldefs.h>

struct SequenceParameters020be924 {
    unsigned short bankNo;
    unsigned char volume;
    unsigned char channelPrio;
    unsigned char playerPrio;
    unsigned char playerNo;
    unsigned short reserved;
};

struct SequenceArchiveEntry020be924 {
    unsigned long offset;
    SequenceParameters020be924 param;
};

struct SequenceArchive020be924 {
    char header[0x18];
    unsigned long baseOffset;
};

struct SlotObj020bc454;
struct Node020bc5bc;
struct Obj020bc4f8;
struct Outer020bc16c;
struct Obj020bc1ac;
struct Foo;

extern "C" Node020bc5bc* func_020bc454(SlotObj020bc454* handle, int playerNo, int prio);
extern "C" void* func_020bc5bc(int playerNo, Node020bc5bc* player);
extern "C" int func_020bded0(int bankNo, unsigned long loadFlag, void* heap, int setAddress, void** data);
extern "C" void func_020bc4ec(void* player);
extern "C" void func_020bc4f8(Obj020bc4f8* player, int seqBase, int seqOffset, int bank);
extern "C" void func_020bc16c(Outer020bc16c* handle, unsigned char volume);
extern "C" void func_020bc1ac(Obj020bc1ac* handle, int prio);
extern "C" void func_020bc210(Foo* handle, int seqArcNo, int index);

// USA: func_020be924
extern "C" ARM int func_020be924(void* handle, int playerNo, int bankNo, int playerPrio,
                                 const SequenceArchiveEntry020be924* sound, const SequenceArchive020be924* seqArc,
                                 int seqArcNo, int index) {
    Node020bc5bc* player;
    void* heap;
    void* bank;
    int result;

    player = func_020bc454((SlotObj020bc454*)handle, playerNo, playerPrio);
    if (player == NULL)
        return 0;

    heap = func_020bc5bc(playerNo, player);

    result = func_020bded0(bankNo, 6, heap, 0, &bank);
    if (result != 0) {
        func_020bc4ec(player);
        return 0;
    }

    func_020bc4f8((Obj020bc4f8*)player, (int)((unsigned char*)seqArc + seqArc->baseOffset),
                                    sound->offset, (int)bank);

    func_020bc16c((Outer020bc16c*)handle, sound->param.volume);
    func_020bc1ac((Obj020bc1ac*)handle, sound->param.channelPrio);
    func_020bc210((Foo*)handle, seqArcNo, index);
    return 1;
}
