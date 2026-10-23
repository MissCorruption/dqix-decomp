#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x1f00
#define REGION_OFFSET_1 0xa6
#else
#define REGION_OFFSET_0 0x1d00
#define REGION_OFFSET_1 0x6e
#endif

struct UnkStruct0205c508;
struct Container020e0310;

extern "C" void func_0205c508(struct UnkStruct0205c508* s, int* out1, int* out2);
extern "C" int func_020e0434(struct Container020e0310* c, int key);
extern "C" int func_ov000_0217542c(void* obj);
extern "C" int func_02041c08(char* dst, int a1, int a2, int a3, int a4, int a5);
extern "C" int func_02041ea4(char* dst, int cursor);
extern "C" int func_ov000_0218158c(void* obj, int n);
extern "C" int func_02041b70(char* dst, int n, const char* name);
extern "C" int func_02042058(char* dst, const char* src);

// USA: func_ov000_02177f74
extern "C" ARM void func_ov000_02177f74(void* base, char* dst) {
    int first;
    int last;
    func_0205c508((struct UnkStruct0205c508*)((char*)base + 0x1dc), &first, &last);
    signed char start = first;
    signed char end = last;
    struct Container020e0310* c = (struct Container020e0310*)((char*)base + 0xb8);
    int sep = func_020e0434(c, 0);
    signed char cursor = *(signed char*)((char*)base + REGION_OFFSET_0 + REGION_OFFSET_1);
    int n = 0;

    if (func_ov000_0217542c(base)) {
        func_02041c08(dst, cursor - start, 8, 5, 5, 5);
    }
    func_02041ea4(dst, cursor - start);

    for (signed char i = start; i < end; i++) {
        short bit = func_ov000_0218158c(base, i);
        short key = bit + 7;
        int name = func_020e0434(c, key);
        func_02041b70(dst, n, (const char*)name);
        if (i != end - 1) {
            func_02042058(dst, (const char*)sep);
        }
        n++;
    }
}
