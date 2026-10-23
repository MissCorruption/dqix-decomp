#include <globaldefs.h>

extern "C" int func_020d424c(int, int);
extern "C" int func_020d40bc(int, int, int);
struct Fields020d5158;
extern "C" int func_020d5158(struct Fields020d5158* o);
extern "C" void func_020d404c(int index, int value);
void CleanCacheRange(const void* addr, unsigned int size);

struct Ctx020d507c {
    int field0;
    unsigned short field4;
    unsigned char pad1[0x14 - 0x6];
    unsigned short field14;
    unsigned char pad2[0x34 - 0x16];
    unsigned short field34;
    unsigned short field36;
};


// USA: func_020d507c
extern "C" ARM int func_020d507c(int a, struct Ctx020d507c* b) {
    int result = func_020d424c(1, 2);
    if (result != 0) {
        return result;
    }
    if (b == NULL) {
        return 6;
    }
    if (b->field4 != 0 && b->field0 == 0) {
        return 6;
    }

    int extra1 = (b->field14 != 0) ? 0x2a : 0;
    if (b->field34 + extra1 > 0x200 || b->field36 + ((b->field14 != 0) ? 6 : 0) > 0x200) {
        return 6;
    }

    func_020d5158((struct Fields020d5158*)b);
    func_020d404c(7, a);
    CleanCacheRange(b, 0x40);
    if (b->field4 != 0) {
        CleanCacheRange((void*)b->field0, b->field4);
    }
    result = func_020d40bc(7, 1, (int)b);
    if (result == 0) {
        result = 2;
    }
    return result;
}
