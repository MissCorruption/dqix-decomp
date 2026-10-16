#include <globaldefs.h>

struct SequenceParameters020be828 {
    unsigned short bankNo;
    unsigned char volume;
    unsigned char channelPrio;
    unsigned char playerPrio;
    unsigned char playerNo;
    unsigned short reserved;
};

struct ArchiveSequenceInfo020be828 {
    unsigned long fileId;
    SequenceParameters020be828 param;
};

struct SoundSequence020be828 {
    char header[0x18];
    unsigned long baseOffset;
};

struct SlotObj020bc454;
struct Node020bc5bc;
struct Obj020bc4f8;
struct Outer020bc16c;
struct Obj020bc1ac;
struct Holder;

Node020bc5bc* AcquireOrEvictSlotAndLink020bc454(SlotObj020bc454* handle, int playerNo, int prio);
void* PopSlotFirstAndLink020bc5bc(int playerNo, Node020bc5bc* player);
extern "C" int func_020bded0(int bankNo, unsigned long loadFlag, void* heap, int setAddress, void** data);
extern "C" int func_020bddec(int seqNo, unsigned long loadFlag, void* heap, int setAddress,
                             SoundSequence020be828** data);
void CallFunc020bc79c_020bc4ec(void* player);
void HandleCommandType2Event020bc4f8(Obj020bc4f8* player, int seqBase, int seqOffset, int bank);
void SetInnerByte0x40(Outer020bc16c* handle, unsigned char volume);
void CallFunc020d1e88OnNodeField3c(Obj020bc1ac* handle, int prio);
void SetSubFields0x34And0x38_020bc1ec(Holder* handle, int seqNo);

// USA: func_020be828
extern "C" ARM int func_020be828(void* handle, int playerNo, int bankNo, int playerPrio,
                                 const ArchiveSequenceInfo020be828* info, int seqNo) {
    Node020bc5bc* player;
    void* heap;
    SoundSequence020be828* seq;
    void* bank;
    int result;

    player = AcquireOrEvictSlotAndLink020bc454((SlotObj020bc454*)handle, playerNo, playerPrio);
    if (player == NULL)
        return 0;

    heap = PopSlotFirstAndLink020bc5bc(playerNo, player);

    result = func_020bded0(bankNo, 6, heap, 0, &bank);
    if (result != 0) {
        CallFunc020bc79c_020bc4ec(player);
        return 0;
    }

    result = func_020bddec(seqNo, 1, heap, 0, &seq);
    if (result != 0) {
        CallFunc020bc79c_020bc4ec(player);
        return 0;
    }

    HandleCommandType2Event020bc4f8((Obj020bc4f8*)player, (int)((unsigned char*)seq + seq->baseOffset), 0,
                                    (int)bank);

    SetInnerByte0x40((Outer020bc16c*)handle, info->param.volume);
    CallFunc020d1e88OnNodeField3c((Obj020bc1ac*)handle, info->param.channelPrio);
    SetSubFields0x34And0x38_020bc1ec((Holder*)handle, seqNo);
    return 1;
}
