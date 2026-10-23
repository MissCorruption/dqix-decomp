#include <globaldefs.h>

struct UnkStruct0205c508;
extern "C" void func_0205c508(struct UnkStruct0205c508* s, int* out1, int* out2);

extern "C" int func_ov000_0217542c(void* obj);
extern "C" int func_02041c08(char* dst, int a1, int a2, int a3, int a4, int a5);
extern "C" int func_02041ea4(char* dst, int cursor);
extern "C" int func_ov000_02171674(void* obj, int index);
extern "C" int func_02041b70(char* dst, int n, const char* name);
struct Container020e0310;
extern "C" int func_020e0434(struct Container020e0310* c, int key);
extern "C" int func_02042058(char* dst, const char* src);

struct Entry02178f28 {
    char pad[0x20];
    signed char cursor;
};

// USA: func_ov000_02178f28
extern "C" ARM void func_ov000_02178f28(char* obj, struct Entry02178f28* entry, char* dst) {
    if (entry != NULL && dst != NULL) {
        int a, b;
        func_0205c508((struct UnkStruct0205c508*)(obj + 0x1dc), &a, &b);
        signed char first = a;
        signed char last = b;
        signed char cursor = entry->cursor;
        if (func_ov000_0217542c(obj)) {
            func_02041c08(dst, cursor - first, 8, 5, 5, 5);
        }
        func_02041ea4(dst, cursor - first);
        for (signed char i = first; i < last; i++) {
            const char** name = (const char**)func_ov000_02171674(entry, i);
            if (name == NULL) continue;
            func_02041b70(dst, i - first, *name);
            if (i == last - 1) continue;
            func_02042058(dst, (const char*)func_020e0434((struct Container020e0310*)(obj + 0xb8), 0));
        }
    }
}
