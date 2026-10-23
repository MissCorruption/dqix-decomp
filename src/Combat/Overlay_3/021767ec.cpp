#include <globaldefs.h>

#if defined(jpn)
enum { kRegionValue89C_818 = 0x818 };
enum { kRegionValue1046_FC2 = 0xfc2 };
enum { kRegionValue1014_F90 = 0xf90 };
enum { kRegionValue835_7B1 = 0x7b1 };
enum { kRegionValue848_7C4 = 0x7c4 };
enum { kRegionValue874_7F0 = 0x7f0 };
enum { kRegionValueD_C = 0xc };
enum { kRegionValue1016_F92 = 0xf92 };
#else
enum { kRegionValue89C_818 = 0x89c };
enum { kRegionValue1046_FC2 = 0x1046 };
enum { kRegionValue1014_F90 = 0x1014 };
enum { kRegionValue835_7B1 = 0x835 };
enum { kRegionValue848_7C4 = 0x848 };
enum { kRegionValue874_7F0 = 0x874 };
enum { kRegionValueD_C = 0xd };
enum { kRegionValue1016_F92 = 0x1016 };
#endif

struct Obj2081;
extern "C" void func_02080c20(struct Obj2081* obj, int key);
extern "C" void func_02080c68(void* obj, int id, int value);
extern "C" void func_02080b54(void* obj, int id);
extern "C" void func_02080608(void* obj, int id);
extern "C" void func_02081130(void* obj, int id, int flag);

struct Container020dedd0;
struct Element020de650;
extern "C" struct Element020de650* func_020dedd0(struct Container020dedd0* c, int key);
extern "C" unsigned int func_ov003_02175898(char* obj, void* s);

extern "C" void func_0208077c(void* obj, int id, short value);
extern "C" int func_02080b40(void* obj, int id);

struct Arg1_0217818c;
#if !defined(jpn)
extern "C" void func_ov003_0217818c(char* self, struct Arg1_0217818c* arg1, int id, int value);
#endif

#if !defined(jpn)
extern "C" void func_020805f4(void* obj, int value);
#endif

struct Container02080f8c;
extern "C" void func_02080f8c(struct Container02080f8c* obj, int id, int value);
struct Container02080fa8;
extern "C" void func_02080fa8(struct Container02080fa8* obj, int id, int value);

extern "C" void func_020806c4(void* obj, int id);
extern "C" int func_020813ec(void* obj, int id);

// USA: func_ov003_021767ec
extern "C" ARM int func_ov003_021767ec(char* self) {
    struct Obj2081* o = *(struct Obj2081**)(self + kRegionValue89C_818);
    short id0 = 7;
    short id1 = 13;
    short id2 = 19;

    func_02080c20(o, 3);
    func_02080c68(o, 3, 0);
    func_02080b54(o, 3);
    func_02080608(o, 3);

    unsigned short flags1046 = *(unsigned short*)(self + kRegionValue1046_FC2);
    func_02081130(o, 3, (flags1046 & 0x400) != 0);

    short mult = *(short*)(self + kRegionValue1014_F90);
    unsigned char bound;
    unsigned char idx = mult * 6;
    bound = idx + 6;

    for (; idx < bound; ) {
        int local1 = 0;
        unsigned int local2 = 0;
        unsigned char limit = *(unsigned char*)(self + kRegionValue835_7B1);
        if (idx < limit) {
            short key = *(short*)(self + kRegionValue848_7C4 + idx * 2);
            struct Element020de650* elem = func_020dedd0((struct Container020dedd0*)(self + kRegionValue874_7F0), key);
            if (elem != NULL) {
                local1 = *(unsigned int*)((char*)elem + 4);
                local2 = func_ov003_02175898(self, elem);
                func_0208077c(o, id0, kRegionValueD_C);
                func_02080b40(o, id0);
                func_02080b40(o, id1);
                func_02080b40(o, id2);
#if !defined(jpn)
                func_ov003_0217818c(self, (struct Arg1_0217818c*)elem, id1, id2);
#endif
            }
#if !defined(jpn)
            func_020805f4(o, id0);
#endif
            func_02080f8c((struct Container02080f8c*)o, id0, local1);
            func_02080fa8((struct Container02080fa8*)o, id1, local2);
            func_020806c4(o, id0);
        }
        id0 = id0 + 1;
        id1 = id1 + 1;
        id2 = id2 + 1;
        idx = idx + 1;
    }

    func_02080b40(o, 0x19);
    func_02080b40(o, 0x1a);
    func_02080b40(o, 0x1b);
    func_02080fa8((struct Container02080fa8*)o, 0x19, *(short*)(self + kRegionValue1014_F90) + 1);
    func_02080fa8((struct Container02080fa8*)o, 0x1a, *(short*)(self + kRegionValue1016_F92));
    return func_020813ec(o, 3);
}
