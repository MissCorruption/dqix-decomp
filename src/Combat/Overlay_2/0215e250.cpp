#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
#define RG(u, j) (j)
extern "C" int func_02042638(char* buf, int a, int b);
#define func_02041fac func_02042638
#else
#define RG(u, j) (u)
#endif

extern "C" void func_020dc4d0(signed char* out, signed char* outCount);
struct Obj02061bd8;
extern "C" int func_02061bd8(struct Obj02061bd8* obj);

struct Container020e0310;
extern "C" int func_020e0434(struct Container020e0310* c, int key);
extern "C" int func_02041c08(char* dst, int a1, int a2, int a3, int a4, int a5);
extern "C" int func_02041ea4(char* dst, int cursor);
extern "C" int func_02041fac(char* buf, int a, int b);
extern "C" int func_02041e70(char* dst, int palette);
extern "C" int func_02041b70(char* dst, int n, const char* name);
extern "C" int func_02042058(char* dst, const char* src);
extern "C" int func_020e51cc(int value);
extern "C" int func_ov002_02159774(void* base, int id, int a2, int a3, int a4);

// USA: func_ov002_0215e250
extern "C" ARM void func_ov002_0215e250(unsigned char* base, char* dst, int flag) {
    if (dst == NULL) return;

    GameState* bs = GameState::GetInstance();
    int cursor = *(short*)(base + RG(0x1bf6, 0x1abe));

    signed char idArr[7];
    signed char count;
    func_020dc4d0(idArr, &count);

    signed char matched = 0;
    for (int i = 0; i < count; i++) {
        GameObject* c = func_0200ff1c(bs, idArr[i]);
        if (c != NULL) {
            if (func_02061bd8((struct Obj02061bd8*)c) != 0) {
                matched++;
            }
        }
    }
    count = count - matched;

    int idx = 0;
    if (flag) {
        func_02041c08(dst, cursor, 8, 5, 5, 5);
    }
    func_02041ea4(dst, cursor);

    int field = func_020e0434((struct Container020e0310*)(base + RG(0x20, 0x8)), 2);
    func_02041fac(dst, field, 0x16);

    for (int i2 = 0; i2 < count; i2++) {
        GameObject* c800 = bs->GetPartyMemberByIndex(idArr[idx]);
        if (c800 != NULL) {
            GameObject* c100 = func_0200ff1c(bs, idArr[idx]);
            if (func_02061bd8((struct Obj02061bd8*)c100) != 0) {
                for (int attempt = 0; attempt < 4; attempt++) {
                    idx = (idx + 1) % 4;
                    if (idx == 0) break;
                    GameObject* c3 = func_0200ff1c(bs, idArr[idx]);
                    if (c3 == NULL) continue;
                    if (func_02061bd8((struct Obj02061bd8*)c3) != 0) continue;
                    bs->GetPartyMemberByIndex(idArr[idx]);
                    break;
                }
            }

            int pal = func_ov002_02159774(base, idArr[idx], 0, 1, 1);
            func_02041e70(dst, pal);
            func_02041b70(dst, i2, (const char*)(base + RG(0x1ab0, 0x1a08) + idArr[idx] * RG(0x3c, 0x18)));
            func_02041e70(dst, 0xf);
            func_02042058(dst, *(const char**)(base + 0x1000 + RG(0xbdc, 0xaa4)));

            idx++;
        }
    }

#if defined(jpn)
    func_02041b70(dst, count, (const char*)func_020e0434((struct Container020e0310*)(base + 0x8), 0x76d));
#else
    func_02041b70(dst, count, (const char*)func_020e51cc(0x1a));
#endif
}
