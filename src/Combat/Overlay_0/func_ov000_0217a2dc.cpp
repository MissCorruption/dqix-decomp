#include <globaldefs.h>
#include "Resource/ActionDataTables.h"

struct Container020e0310;

extern "C" int func_020e0434(struct Container020e0310* c, int key);
extern "C" int func_02042058(char* dst, const char* src);
extern "C" int func_ov000_0217542c(void* obj);
extern "C" int func_02041c08(char* dst, int a1, int a2, int a3, int a4, int a5);

extern "C" int func_02041e70(char* dst, int palette);
extern "C" const char** func_02079e2c(char* table, int key);
extern "C" int func_02041ea4(char* dst, int cursor);
extern "C" int func_02041b70(char* dst, int n, const char* name);
extern "C" int func_020420e8(const char* text, int large);
extern "C" int func_02041a90(char* dst, int x, int y);
extern "C" int func_02041cc0(char* dst, int a1);
#if defined(jpn)
extern "C" void* func_020421a0();
extern "C" void func_02046380(void*);
extern "C" void func_02046574(void*, int, const char*);
extern "C" void __clear(void*, int);
extern "C" void func_02041f50(const char*, char*);
extern char data_ov000_021851af[];
#endif

struct ItemMenu0217a2dc {
    char pad0[0x10];
    unsigned short itemIds[5];
    signed char itemCount;
#if defined(jpn)
    char pad1B[0x1fa5 - 0x1b];
#else
    char pad1B[0x1d6d - 0x1b];
#endif
    signed char cursor;
    char pad1D6E[0x1d81 - 0x1d6e];
    unsigned char field1D81;
};

// USA: func_ov000_0217a2dc
extern "C" ARM void func_ov000_0217a2dc(struct ItemMenu0217a2dc* menu, int unused, char* dst) {
    struct Container020e0310* strings = (struct Container020e0310*)((char*)menu + 0xb8);
    const char* emptyName = (const char*)func_020e0434(strings, 0x1f);
    const char* separator = (const char*)func_020e0434(strings, 0);
    signed char cursor = menu->cursor;
    func_02042058(dst, separator);

    if (menu->field1D81) {
        if (func_ov000_0217542c(menu)) {
            func_02041c08(dst, cursor, 8, 5, 5, 5);
        }
        ActionDataTables* table = func_020797dc();
        if (table == NULL) {
            return;
        }
        for (int i = 0; i < menu->itemCount; i++) {
#if defined(jpn)
            if (i == cursor) {
                func_02041e70(dst, 5);
            } else {
                func_02041e70(dst, 3);
            }
#else
            int palette = 3;
            if (i == cursor) {
                palette = 5;
            }
            func_02041e70(dst, palette);
#endif
            if (menu->itemIds[i] == 0) {
                func_02042058(dst, emptyName);
            } else {
                const char** entry = func_02079e2c((char*)table, (short)menu->itemIds[i]);
                if (entry == NULL) {
                    continue;
                }
#if defined(jpn)
                char name[0x40];
                __clear(name, sizeof(name));
                func_02041f50(*entry, name);
                func_02042058(dst, name);
#else
                func_02042058(dst, *entry);
#endif
            }
            if (i == menu->itemCount - 1) {
                continue;
            }
            func_02042058(dst, separator);
        }
    } else {
        if (func_ov000_0217542c(menu)) {
            func_02041c08(dst, cursor, 8, 5, 5, 5);
        }
        func_02041ea4(dst, cursor);
        ActionDataTables* table = func_020797dc();
        if (table == NULL) {
            return;
        }
        for (int i = 0; i < menu->itemCount; i++) {
            if (menu->itemIds[i] == 0) {
                func_02041b70(dst, i, emptyName);
            } else {
                const char** entry = func_02079e2c((char*)table, (short)menu->itemIds[i]);
                if (entry == NULL) {
                    continue;
                }
#if defined(jpn)
                char name[0x40];
                __clear(name, sizeof(name));
                func_02041f50(*entry, name);
                func_02041b70(dst, i, name);
#else
                func_02041b70(dst, i, *entry);
#endif
            }
            if (i == menu->itemCount - 1) {
                continue;
            }
            func_02042058(dst, separator);
        }
    }

    func_02041e70(dst, 0xf);
#if defined(jpn)
    void* formatter = func_020421a0();
    func_02046380(formatter);
    func_02046574(formatter, 0,
        (const char*)func_020e0434(strings, 0x21));
    func_02042058(dst, data_ov000_021851af);
#else
    const char* title = (const char*)func_020e0434(strings, 0x21);
    func_02041a90(dst, (0xb0 - func_020420e8(title, 0)) >> 1, 5);
    func_02042058(dst, title);
    func_02041cc0(dst, 0x11);
#endif
}
