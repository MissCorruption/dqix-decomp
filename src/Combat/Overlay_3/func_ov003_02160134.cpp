#include <globaldefs.h>

#if defined(jpn)
enum { kRegionValue4A3_2CB = 0x2cb };
enum { kRegionValue324_20C = 0x20c };
enum { kRegionValue390_278 = 0x278 };
enum { kRegionValue334_21C = 0x21c };
enum { kRegionValue318_200 = 0x200 };
enum { kRegionValue464_28C = 0x28c };
enum { kRegionValue38C_274 = 0x274 };
enum { kRegionValue460_288 = 0x288 };
#else
enum { kRegionValue4A3_2CB = 0x4a3 };
enum { kRegionValue324_20C = 0x324 };
enum { kRegionValue390_278 = 0x390 };
enum { kRegionValue334_21C = 0x334 };
enum { kRegionValue318_200 = 0x318 };
enum { kRegionValue464_28C = 0x464 };
enum { kRegionValue38C_274 = 0x38c };
enum { kRegionValue460_288 = 0x460 };
#endif

struct Obj0207fcb8;
extern "C" void func_0207fcb8(struct Obj0207fcb8* obj);
struct Obj0207fd00;
extern "C" void func_0207fd00(struct Obj0207fd00* obj);
extern "C" void func_0207fe80(void* obj, int a, int b, int c);
struct Cont0207fd44;
extern "C" void func_0207fd44(struct Cont0207fd44* obj);
extern "C" void func_ov003_02166fc4(void* obj);
struct Outer020e28dc;
extern "C" int func_020e28dc(struct Outer020e28dc* o);
struct Struct020e2794;
extern "C" void func_020e2794(struct Struct020e2794* self, void* b);
extern "C" void func_ov003_0216039c(void* obj);
struct Obj02167548;
extern "C" void func_ov003_02167548(struct Obj02167548* obj);
struct Container0205a3d0;
struct Elem0205a3d0;
extern "C" void func_0205a370(struct Container0205a3d0* c, int key);
extern "C" struct Elem0205a3d0* func_0205a3d0(struct Container0205a3d0* c, int key);
struct Container0205a330;
extern "C" void func_0205a330(struct Container0205a330* c, int arg);
extern "C" void func_020e27ec(struct Container0205a3d0* c, int key, short a, short b);
extern "C" void func_0205ae8c(void*);

// USA: func_ov003_02160134
extern "C" ARM void func_ov003_02160134(char* obj) {
    if (*(unsigned char*)(obj + kRegionValue4A3_2CB) == 0) return;

    void* sub = *(void**)(obj + kRegionValue324_20C);
    if (sub != 0) {
        func_0207fcb8((struct Obj0207fcb8*)sub);
        func_0207fd00((struct Obj0207fd00*)sub);
        func_0207fe80(sub, 1, 2, 1);
        func_0207fd44((struct Cont0207fd44*)sub);
    }
    func_ov003_02166fc4(obj);

    if (*(void**)(obj + kRegionValue390_278) != 0 && func_020e28dc((struct Outer020e28dc*)*(void**)(obj + kRegionValue390_278)) != 0) {
        func_020e2794((struct Struct020e2794*)*(void**)(obj + kRegionValue390_278), obj + kRegionValue334_21C);
    }
    func_ov003_0216039c(obj);

    if (*(struct Obj02167548**)(obj + kRegionValue318_200) != 0) {
        func_ov003_02167548(*(struct Obj02167548**)(obj + kRegionValue318_200));
    }

    if (!(*(unsigned int*)(obj + kRegionValue464_28C) & 0x2000000)) return;

    struct Container0205a3d0* cont = *(struct Container0205a3d0**)(obj + kRegionValue38C_274);
    func_0205a370(cont, 1);

    cont = *(struct Container0205a3d0**)(obj + kRegionValue38C_274);
    struct Elem0205a3d0* e = func_0205a3d0(cont, 0);
    if (e != NULL) {
        *(unsigned char*)((char*)e + 0x15) &= ~8;
    }

    cont = *(struct Container0205a3d0**)(obj + kRegionValue38C_274);
    e = func_0205a3d0(cont, 1);
    if (e != NULL) {
        *(unsigned char*)((char*)e + 0x15) |= 8;
    }

    cont = *(struct Container0205a3d0**)(obj + kRegionValue38C_274);
    int arg = *(int*)(obj + kRegionValue460_288);
    func_0205a330((struct Container0205a330*)cont, arg);

    cont = *(struct Container0205a3d0**)(obj + kRegionValue38C_274);
    func_020e27ec(cont, 1, 0xd7, 0x96);

    func_0205ae8c(obj + kRegionValue334_21C);
}
