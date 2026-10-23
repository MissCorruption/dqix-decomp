#include <globaldefs.h>

#include "Resource/TextQueue.h"
#if defined(jpn)
enum { kObjectPointer = 0x144, kResourceWord = 0x4ec };
extern int data_020f0420[];
#else
enum { kObjectPointer = 0x150, kResourceWord = 0x6fc };
#endif

#if defined(jpn)
#define func_02052bfc func_02053fd8
#endif
#include "GameState/GameState.h"
#include "NitroSDK/Timing.h"
#include "std_library_functions.h"
#include "Resource/GameResources.h"

struct ArrayContainsByteStruct;

struct Inner0201bc94 {
    unsigned char lowBits : 4;
    unsigned char flag4 : 1;
    unsigned char highBits : 3;
};

struct Struct0201bc94 {
    unsigned short field0;
    unsigned short field2;
    unsigned short field4;
    unsigned short field6;
    Inner0201bc94* field8;
};

struct Sub150_02052bfc {
    char pad0[0x480];
    uint64_t stamp;
    char pad1[0x56c - 0x488];
    unsigned char field56c;
    unsigned char field56d;
};

struct Obj02052bfc {
    char pad0[4];
    short field4;
    char pad1[kObjectPointer - 6];
    Sub150_02052bfc* field150;
};

extern "C" int func_02086ef0(ArrayContainsByteStruct*, int);
extern "C" void* func_02010828(GameState*);
extern "C" void* func_02012fe4(void);
extern "C" long long _ll_udiv(long long a, long long b);
extern "C" int func_02046b08(void** obj);
extern "C" int func_0201bc94(Struct0201bc94* obj);
extern "C" int func_020e51cc(int value);
extern "C" void* func_020d7a50(void);
extern "C" void func_ov017_02191aac(char* obj, int mode, int idx, unsigned char mask);
extern "C" void func_ov017_021ce014(int a, unsigned short b, unsigned short c, unsigned short d);

// USA: func_02052bfc
extern "C" ARM void func_02052bfc(struct Obj02052bfc* obj) {
    if (obj->field150 == NULL) return;

    GameState* gs = GameState::GetInstance();
    GameResources* ov = GetGameResources();
    void* list = *(void**)((char*)ov + 0x3000 + kResourceWord);
    ArrayContainsByteStruct* arr = (ArrayContainsByteStruct*)func_02010828(gs);
    Struct0201bc94* entry = (Struct0201bc94*)func_02012fe4();
    unsigned char idx = obj->field4 & 0xff;

    if (!func_02086ef0(arr, idx)) return;
    if (obj->field150->field56c == 0) return;

    uint64_t diff = GetCurrentTimestamp() - obj->field150->stamp;
    long long elapsed = _ll_udiv(diff << 6, 0x1ff6210);

    if (!func_02046b08((void**)list)) return;
    if (elapsed < 0x12c && func_0201bc94(entry)) return;

    char buf[0x80];
    obj->field150->field56c = 0;
    if (idx == *(short*)((char*)gs->GetUnknownGameObject() + 4)) {
        if (obj->field150->field56d != 0) {
            #if defined(jpn)
            strcpy(buf, (char*)data_020f0420[1]);
#else
            strcpy(buf, (char*)func_020e51cc(0x33));
#endif
        }
        else {
            #if defined(jpn)
            strcpy(buf, (char*)data_020f0420[5]);
#else
            strcpy(buf, (char*)func_020e51cc(0x32));
#endif
        }
        #if defined(jpn)
        func_020d7e10(func_020d7a50(), buf, 0, 0, 1);
#else
        func_020d7e10(func_020d7a50(), buf, 0, 0, 1, 1);
#endif
    }
    func_ov017_02191aac((char*)ov, 0, idx, 2);
    func_ov017_021ce014(0, 1, 0, idx);
}
