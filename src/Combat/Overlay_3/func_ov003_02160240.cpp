#include <globaldefs.h>

#if defined(jpn)
enum { kRegionValue4A3_2CB = 0x2cb };
enum { kRegionValue324_20C = 0x20c };
enum { kRegionValue318_200 = 0x200 };
enum { kRegionValue390_278 = 0x278 };
#else
enum { kRegionValue4A3_2CB = 0x4a3 };
enum { kRegionValue324_20C = 0x324 };
enum { kRegionValue318_200 = 0x318 };
enum { kRegionValue390_278 = 0x390 };
#endif

struct Cont0207fd88;
extern "C" void func_0207fd88(struct Cont0207fd88* obj);
extern "C" void func_ov003_0216720c(char* obj);
extern "C" void func_ov003_0216757c(char* obj);
extern "C" void func_020e2d24(int* obj, int a, int b);
struct Outer020e28dc;
extern "C" int func_020e28dc(struct Outer020e28dc* o);
struct Entry020e2cc4;
extern "C" void func_020e2cc4(struct Entry020e2cc4* obj, int enabled);
struct SelfState020e2834;
extern "C" void func_020e2834(struct SelfState020e2834* self);

// USA: func_ov003_02160240
extern "C" ARM void func_ov003_02160240(char* obj) {
    if (*(unsigned char*)(obj + kRegionValue4A3_2CB) == 0) return;
    if (*(struct Cont0207fd88**)(obj + kRegionValue324_20C) != 0) {
        func_0207fd88(*(struct Cont0207fd88**)(obj + kRegionValue324_20C));
    }
    func_ov003_0216720c(obj);
    if (*(char**)(obj + kRegionValue318_200) != 0) {
        func_ov003_0216757c(*(char**)(obj + kRegionValue318_200));
    }
    if (*(void**)(obj + kRegionValue390_278) == 0) return;
    unsigned char* r4 = *(unsigned char**)((char*)(*(void**)(obj + kRegionValue390_278)) + 0x10);
    int flag;
    func_020e2d24((int*)(r4 + 0x28), 0x19, 1);
    flag = func_020e28dc((struct Outer020e28dc*)*(void**)(obj + kRegionValue390_278));
    func_020e2cc4((struct Entry020e2cc4*)(r4 + 0x28), flag);
    func_020e2834((struct SelfState020e2834*)*(void**)(obj + kRegionValue390_278));
}
