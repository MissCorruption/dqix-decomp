#include <globaldefs.h>

#if defined(jpn)
enum { kRegionValue4E9_4E5 = 0x4e5 };
enum { kRegionValueE4_E0 = 0xe0 };
enum { kRegionValue59F_59B = 0x59b };
enum { kRegionValue4ED_4E9 = 0x4e9 };
enum { kRegionValue4EA_4E6 = 0x4e6 };
#else
enum { kRegionValue4E9_4E5 = 0x4e9 };
enum { kRegionValueE4_E0 = 0xe4 };
enum { kRegionValue59F_59B = 0x59f };
enum { kRegionValue4ED_4E9 = 0x4ed };
enum { kRegionValue4EA_4E6 = 0x4ea };
#endif


extern "C" void func_ov003_02169594(void* obj);
extern "C" int func_ov003_0216950c(void* obj);
extern "C" void func_ov003_0216a974(void* obj, int mode, int flag);
extern "C" void func_ov003_0216aa28(void* obj);

extern "C" void func_0205cef8(void* obj);
extern "C" void func_0205cf04(void* obj);
extern "C" void func_0205cf10(void* obj);

struct Struct0205cf1c;
extern "C" void func_0205cf1c(struct Struct0205cf1c* s);

struct Struct_0205c570;
extern "C" int func_0205d794(struct Struct_0205c570* s);

struct Obj0205eaa0;
extern "C" void func_0205eaa0(struct Obj0205eaa0* obj, int a, int b);

extern "C" int func_ov003_02169554(void* obj);

extern int data_02108760;

// USA: func_ov003_02169b30
extern "C" ARM int func_ov003_02169b30(void* p) {
    char* obj = (char*)p;
    unsigned char state = *(unsigned char*)(obj + kRegionValue4E9_4E5);
    if (state == 0) {
        func_ov003_02169594(obj);
        func_0205cef8(obj + kRegionValueE4_E0);
        func_0205cf04(obj + kRegionValueE4_E0);
        *(unsigned char*)(obj + kRegionValue4E9_4E5) = *(unsigned char*)(obj + kRegionValue4E9_4E5) + 1;
    } else if (state == 1) {
        *(unsigned char*)(obj + kRegionValue59F_59B) |= 1;
        int e = func_0205d794((struct Struct_0205c570*)(obj + kRegionValueE4_E0));
        *(unsigned char*)(obj + kRegionValue4ED_4E9) = (unsigned char)e;
        if (func_ov003_0216950c(obj) != 0) {
            func_ov003_0216a974(obj, 1, 1);
            *(unsigned char*)(obj + kRegionValue59F_59B) &= ~1;
            func_ov003_0216aa28(obj);
            *(unsigned char*)(obj + kRegionValue4EA_4E6) = 0;
            func_0205eaa0((struct Obj0205eaa0*)&data_02108760, 1, 0);
            func_0205cf10(obj + kRegionValueE4_E0);
            func_0205cf1c((struct Struct0205cf1c*)(obj + kRegionValueE4_E0));
            *(unsigned char*)(obj + kRegionValue4E9_4E5) = 0;
            return *(signed char*)(obj + kRegionValue4ED_4E9);
        } else {
            if (func_ov003_02169554(obj) != 0) {
                *(unsigned char*)(obj + kRegionValue59F_59B) &= ~1;
                func_0205cf10(obj + kRegionValueE4_E0);
                func_0205cf1c((struct Struct0205cf1c*)(obj + kRegionValueE4_E0));
                *(unsigned char*)(obj + kRegionValue4E9_4E5) = 0;
                return -2;
            }
        }
    }
    return -1;
}
