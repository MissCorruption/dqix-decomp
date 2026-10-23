#include <globaldefs.h>
#include "GameState/GameState.h"

struct SearchStruct0202c1a4;
extern "C" signed char func_0202c1a4(struct SearchStruct0202c1a4* obj);
extern "C" int func_02012fe4(void);
extern "C" void func_02098efc(char* obj, int offset, const void* src, unsigned int length);
extern "C" void* func_0202ae24(void);
struct BitArrayObj0205e804;
extern "C" void func_0205e804(struct BitArrayObj0205e804* obj, int index);

struct Evt021d3dcc {
    char pad[0x11];
    unsigned char lowNibble : 4;
    unsigned char midTag : 3;
    unsigned char topFlag : 1;
    unsigned short field12;
};

// USA: func_ov017_021d3dcc
extern "C" ARM void func_ov017_021d3dcc(int p0, struct Evt021d3dcc* evt, GameState* battleStruct, int p3, struct SearchStruct0202c1a4* search) {
#if defined(jpn)
 enum {regionalOffset0=0x860};
#else
 enum {regionalOffset0=0x840};
#endif
    if (func_0202c1a4(search) != evt->midTag) {
        return;
    }
    char* base = (char*)func_02012fe4();
    char* p1 = base + regionalOffset0;
    func_02098efc(p1, evt->field12, (const void*)((char*)evt + 4), evt->lowNibble);
    if (!evt->topFlag) {
        return;
    }
    p1[0x1000 + 0xb62] = 1;
    struct BitArrayObj0205e804* bits = (struct BitArrayObj0205e804*)func_0202ae24();
    func_0205e804(bits, 0xb9);
}
