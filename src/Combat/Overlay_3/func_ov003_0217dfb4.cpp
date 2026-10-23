#include "Combat/TryApplyElemFields.h"
#include <globaldefs.h>
#if defined(jpn)
enum { kMenuPrefix=0x10 };
extern "C" void func_02046380(void*);
struct StoreStruct;
extern "C" void func_020465c0(StoreStruct*,int,int);
extern "C" void func_020465f0(unsigned char*,int,unsigned char);
extern "C" void func_020465d8(unsigned char*,int,unsigned char);
extern "C" void func_02042428(char*, int);
#else
enum { kMenuPrefix=0x14 };
#endif

struct Struct_0205c570;
struct Struct_0205d81c;
struct StructA0205d5d0;
struct Container020e0310;

struct ListWindow0217dfb4 {
    char pad0[0x68];
    int page;
};

struct ListMenu0217dfb4 {
    char pad0[kMenuPrefix];
    int mode;
    unsigned char items[0x30 - 0x18];
    unsigned char itemCount;
    char pad31;
    unsigned char field32;
    char pad33[0x90 - 0x33];
    struct ListWindow0217dfb4* window;
    char pad94[0xcc - 0x94];
    char names[4];
};

extern "C" void* func_02012fe4(void);
extern "C" int func_020421a0();
extern "C" void __clear(void* buf, int n);
extern "C" int func_0205d794(struct Struct_0205c570* s);
extern "C" int func_02041c08(char* dst, int a1, int a2, int a3, int a4, int a5);
extern "C" int func_020e0434(struct Container020e0310* c, int key);
extern "C" int func_02041b70(char* dst, int n, const char* name);
extern "C" int func_02042058(char* dst, const char* src);
extern "C" unsigned char* func_0205d81c(struct Struct_0205d81c* s, int key);
extern "C" void func_02050400(unsigned char* elem, int state);
extern "C" void func_0205042c(unsigned char* elem, unsigned char value);
extern "C" void func_02050440(unsigned char* elem, int value);
extern const char data_ov003_02180c7f[];

// USA: func_ov003_0217dfb4
extern "C" ARM void func_ov003_0217dfb4(struct ListMenu0217dfb4* menu) {
    char buf[0x400];
    func_02012fe4();
#if defined(jpn)
    int global = func_020421a0();
#else
    func_020421a0();
#endif
    __clear(buf, 0x400);
    int end;
    int i;
    int page = menu->window->page;
    end = (page + 1) * 6;
    if (end > menu->itemCount) {
        end = menu->itemCount;
    }
    if (menu->mode == 2) {
        func_02041c08(buf, func_0205d794((struct Struct_0205c570*)menu->window) % 6, 8, 5, 5, 5);
    }
    for (i = page * 6; i < end; i++) {
        const char* name = (const char*)func_020e0434((struct Container020e0310*)menu->names, (short)(menu->items[i] + 100));
        func_02041b70(buf, i % 6, name);
        if (i != end - 1) {
            func_02042058(buf, data_ov003_02180c7f);
        }
    }
    if (menu->field32 > 1) {
#if defined(jpn)
        func_02046380((void*)global);
        func_020465c0((StoreStruct*)global, 0, page + 1);
        func_020465c0((StoreStruct*)global, 1, menu->field32);
        func_020465f0((unsigned char*)global, 0, 2);
        func_020465f0((unsigned char*)global, 1, 2);
        func_020465d8((unsigned char*)global, 0, 1);
        func_020465d8((unsigned char*)global, 1, 0);
        func_02042428(buf, 8);
        func_02042058(buf, (const char*)func_020e0434((Container020e0310*)menu->names, 0xc8));
#else
        unsigned char* elem = func_0205d81c((struct Struct_0205d81c*)menu->window, 0);
        if (elem != NULL) {
            func_02050400(elem, 1);
            func_0205042c(elem, page);
            func_02050440(elem, menu->field32);
        }
#endif
    }
#if defined(jpn)
    func_0205d5d0((struct StructA0205d5d0*)menu->window, 0, (int)buf, 1);
#else
    func_0205d5d0((struct StructA0205d5d0*)menu->window, 0, (int)buf, 1, 0);
#endif
}
