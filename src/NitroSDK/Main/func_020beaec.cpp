#include <globaldefs.h>

struct Obj020bda58;
struct Ctx020bf484;
typedef void (*NNSSndHeapDisposeCallback)(void* mem, unsigned int size, unsigned int data1, unsigned int data2);
extern "C" void* func_020bd6ac(int index);
extern "C" void* func_020bda58(struct Obj020bda58* heap, unsigned int size, NNSSndHeapDisposeCallback callback, int data1, int data2);
extern "C" void func_020bf484(int expected, void* unused1, struct Ctx020bf484* obj);
extern "C" void func_020bf1a0(void* player);

struct StrmPlayerInfo020beaec {
    unsigned char numChannels;
    unsigned char chNoList[16];
    unsigned char padding[7];
};

struct StrmPlayer020beaec {
    char pad0[0x124];
    unsigned char numChannels;
    unsigned char reserved;
    unsigned char chNoList[6];
    void* buffer;
    unsigned int bufSize;
    char pad1[0x174 - 0x134];
};

extern struct StrmPlayer020beaec data_02110a4c[4];

// USA: func_020beaec
extern "C" ARM int func_020beaec(struct Obj020bda58* heap)
{
    int playerNo;
    const struct StrmPlayerInfo020beaec* playerInfo;
    struct StrmPlayer020beaec* player;
    void* buffer;
    unsigned int bufSize;
    int i;

    for (playerNo = 0; playerNo < 4; ++playerNo) {
        player = &data_02110a4c[playerNo];

        playerInfo = (const struct StrmPlayerInfo020beaec*)func_020bd6ac(playerNo);
        if (playerInfo == NULL)
            continue;

        player->numChannels = playerInfo->numChannels;
        for (i = 0; i < playerInfo->numChannels; i++) {
            player->chNoList[i] = playerInfo->chNoList[i];
        }

        if (heap != NULL) {
            bufSize = 512 * 4 * player->numChannels;
            buffer = func_020bda58(heap, bufSize, (NNSSndHeapDisposeCallback)func_020bf484, (int)player, 0);
            if (buffer == NULL)
                return 0;

            func_020bf1a0(player);

            player->buffer = buffer;
            player->bufSize = bufSize;
        }
    }

    return 1;
}
