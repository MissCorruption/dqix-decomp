#if defined(jpn)
enum { RegionOffset600 = 0x620, RegionOffset2cc = 0x27c };
#else
enum { RegionOffset600 = 0x600, RegionOffset2cc = 0x2cc };
#endif

#include <globaldefs.h>
#include "World/ZoneLootableRecord.h"
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "Resource/GameResources.h"

struct Struct0218d618;
extern "C" int func_ov017_0218d618(struct Struct0218d618* p);

extern "C" void* func_02012fe4(void);
extern "C" int func_020100a8(GameState* battleStruct);
extern "C" void* func_02012d88(AllocatorUnion* alloc, unsigned int size);
extern AllocatorUnion data_02114e20;

struct Foo02048004;
extern "C" void func_02047230(struct Foo02048004* obj);

struct State0207dfc8;
extern "C" void func_0207dfc8(struct State0207dfc8* src, struct State0207dfc8* dst);
extern "C" void func_0207df90(char* obj);
extern "C" void func_0207dfac(char* obj);
extern "C" void func_02047b30(void* a, int b, int c, int d);

// USA: func_ov017_021b5dc4
extern "C" ARM int func_ov017_021b5dc4(char* self) {
    if (*(unsigned char*)(self + 0x54) != 0) {
        if (!func_ov017_0218d618((struct Struct0218d618*)((char*)GetGameResources())))
            return 3;
    } else {
        BackgroundLoader* loader = BackgroundLoader::GetInstance();
        if (loader->GetTaskStatus(*(int*)(self + 0x28)) != 0) {
            if (loader->GetDetailedTaskStatus(*(int*)(self + 0x28)) == BackgroundLoader::TaskStatus_Complete) {
                void* outPtr;
                unsigned int outSize;
                loader->GetLoadedFileByID(*(int*)(self + 0x28), &outPtr, &outSize);
                void* allocated = func_02012d88(&data_02114e20, 0x100);
                if (outSize != 0 && allocated != 0) {
                    ((SafeAllocator*)(self + 0x40))->CreateTypeA(allocated, 0x100);
                    GameState* battle = GameState::GetInstance();
                    char* base = (char*)func_02012fe4();
                    int idx = func_020100a8(battle);
                    char* p = base + RegionOffset600 + idx * 0x88;
                    *(int*)(self + 0x20) = (int)p;
                    func_02047230((struct Foo02048004*)*(int*)(self + 0x20));
                    func_0204719c((struct Foo02048004*)*(int*)(self + 0x20));
                    unsigned char local[0x70];
                    short* mid = (short*)(((char*)GetGameResources()) + RegionOffset2cc);
                    func_0207dfc8((struct State0207dfc8*)((char*)mid + 0x230), (struct State0207dfc8*)local);
                    func_0207df90((char*)local);
                    func_02047b30((void*)*(int*)(self + 0x20), (int)outPtr, (int)outSize, (int)(self + 0x40));
                    func_0207dfac((char*)local);
                }
            }
            loader->RemoveTask(*(int*)(self + 0x28));
            *(int*)(self + 0x28) = -1;
        }
    }
    return (*(int*)(self + 0x28) < 0) ? 4 : 3;
}
