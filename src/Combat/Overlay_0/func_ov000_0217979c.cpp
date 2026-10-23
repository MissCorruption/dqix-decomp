#include <globaldefs.h>

struct UnkStruct0205c508;
extern "C" void func_0205c508(struct UnkStruct0205c508* s, int* out1, int* out2);
struct Container020e0310;
extern "C" char* func_020e0434(struct Container020e0310* c, int key);
extern "C" int func_ov000_0217542c(void* obj);
extern "C" int func_02041c08(char* dst, int a1, int a2, int a3, int a4, int a5);
extern "C" int func_02041ea4(char* dst, int cursor);
extern "C" void* func_ov000_02171b9c(void* obj, int idx);
extern "C" int func_02041b70(char* dst, int n, const char* name);
extern "C" void __clear(void* buf, int n);
extern "C" int func_02042058(char* dst, const char* src);
#if defined(jpn)
extern "C" int func_02042158(char* dst, int w);
#define func_02041acc func_02042158
#else
extern "C" int func_02041acc(char* dst, int w);
#endif
extern "C" void func_0206819c(const char* src, char* dst, int flag);

#if defined(jpn)
#define data_ov000_02184069 data_ov000_021851a9
#endif
extern char data_ov000_02184069[];

struct ListItem0217979c {
    int field_0x0;
    const char* name;
    unsigned int kind : 4;
};

struct ItemList0217979c {
    char pad0[0x22];
    signed char cursor;
};

// USA: func_ov000_0217979c
extern "C" ARM void func_ov000_0217979c(char* obj, struct ItemList0217979c* list, char* dst) {
    if (list == NULL || dst == NULL) {
        return;
    }
    int first;
    int last;
    func_0205c508((struct UnkStruct0205c508*)(obj + 0x1dc), &first, &last);
    signed char start = first;
    signed char end = last;
    signed char cursor = list->cursor;
#if !defined(jpn)
    char* prefix = func_020e0434((struct Container020e0310*)(obj + 0xb8), 0x13);
    char* separator = func_020e0434((struct Container020e0310*)(obj + 0xb8), 0);
#endif
    if (func_ov000_0217542c(obj)) {
        func_02041c08(dst, cursor - start, 8, 5, 5, 5);
    }
    func_02041ea4(dst, cursor - start);
    for (signed char i = start; i < end; i++) {
        struct ListItem0217979c* item = (struct ListItem0217979c*)func_ov000_02171b9c(list, i);
        if (item == NULL) {
            func_02041b70(dst, i - start, data_ov000_02184069);
            continue;
        }
        char text[0x80];
        __clear(text, 0x80);
        int narrow = item->kind <= 7;
        if (narrow) {
#if defined(jpn)
            func_02042058(text, func_020e0434((struct Container020e0310*)(obj + 0xb8), 0x13));
#else
            func_02042058(text, prefix);
            func_02041acc(text, 3);
#endif
        } else {
            func_02041acc(text, 8);
        }
#if defined(jpn)
        func_02042058(text, item->name);
#else
        char name[0x100];
        __clear(name, 0x100);
        func_0206819c(item->name, name, 0);
        func_02042058(text, name);
#endif
        func_02041b70(dst, i - start, text);
        if (i != end - 1) {
#if defined(jpn)
            func_02042058(dst, func_020e0434((struct Container020e0310*)(obj + 0xb8), 0));
#else
            func_02042058(dst, separator);
#endif
        }
    }
}
