#include <globaldefs.h>

struct Container020e0310;

extern "C" int func_ov000_0217542c(void* obj);
extern "C" int func_02041c08(char* dst, int a1, int a2, int a3, int a4, int a5);
extern "C" int func_02041ea4(char* dst, int cursor);
extern "C" int func_020e0434(struct Container020e0310* c, int key);
extern "C" int func_02042058(char* dst, const char* src);
extern "C" int func_02041dd0(char* buf, int index);
#if defined(jpn)
extern "C" void func_0203bdf4(char* obj, int arg1);
#define func_0203c248 func_0203bdf4
#else
extern "C" void func_0203c248(char* obj, int arg1);
#endif
extern "C" int func_02041b70(char* dst, int n, const char* name);
extern "C" void __clear(void* buf, int n);

struct Member02179a70 {
    char pad[0x4c];
    int field_0x4c;
#if defined(jpn)
    char pad2[0x88 - 0x50];
    char name[0x488 - 0x88];
#else
    char pad2[0x68 - 0x50];
    char name[0x448 - 0x68];
#endif
};

extern "C" int func_ov000_02170c7c(struct Member02179a70* obj);

struct Party02179a70 {
    char pad[0x74];
    signed char order[4];
    signed char count;
    char pad2[0xb8 - 0x79];
    char strings[0x958 - 0xb8];
    struct Member02179a70 members[1];
};

struct Cursor02179a70 {
    char pad[0x21];
    signed char cursor;
};

// USA: func_ov000_02179a70
extern "C" ARM void func_ov000_02179a70(struct Party02179a70* party, struct Cursor02179a70* src, int unused, char* dst) {
    if (src == NULL) return;

    signed char cursor = src->cursor;
    int n = 0;

    if (func_ov000_0217542c(party)) {
        func_02041c08(dst, cursor, 8, 5, 5, 5);
    }
    func_02041ea4(dst, cursor);

    struct Member02179a70* m;
    for (int i = 0; i < party->count; i++) {
        m = &party->members[party->order[i]];
        if (m->field_0x4c >= 0) {
            if (n != 0) {
                func_02042058(dst, (const char*)func_020e0434((struct Container020e0310*)party->strings, 0));
            }
            func_02041dd0(dst, func_ov000_02170c7c(m));
#if defined(jpn)
            char name[0x20];
#else
            char name[0x80];
#endif
            __clear(name, sizeof(name));
            func_0203c248(m->name, (int)name);
            func_02041b70(dst, n, name);
            n++;
        }
    }
}
