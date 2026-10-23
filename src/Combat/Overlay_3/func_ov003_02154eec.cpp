#include <globaldefs.h>

#if defined(jpn)
enum { kRegionValue1F8_1F4 = 0x1f4 };
enum { kRegionValue204_200 = 0x200 };
#else
enum { kRegionValue1F8_1F4 = 0x1f8 };
enum { kRegionValue204_200 = 0x204 };
#endif

struct Obj0207fcb8;
extern "C" unsigned int func_0207fcb8(Obj0207fcb8*);
struct Outer020e28dc;
extern "C" unsigned int func_020e28dc(Outer020e28dc*);
struct Struct020e2794;
extern "C" unsigned int func_020e2794(Struct020e2794*, void*);
struct Cont0207fd44;
extern "C" unsigned int func_0207fd44(Cont0207fd44*);
extern "C" unsigned int func_ov023_021eb4b8(void*);
struct Obj0207fd00;
extern "C" unsigned int func_0207fd00(Obj0207fd00*);
extern "C" unsigned int func_0207fe80(unsigned int, unsigned int, unsigned int, unsigned int);
extern "C" unsigned int func_ov003_0215501c(unsigned int);

// USA: func_ov003_02154eec
extern "C" ARM void func_ov003_02154eec(unsigned int self) {
    if (*(unsigned char*)((char*)self + kRegionValue1F8_1F4) == 0) { return; }
    if (*(unsigned int*)((char*)self + kRegionValue204_200) != 0) {
        func_ov023_021eb4b8((void*)(*(unsigned int*)((char*)self + kRegionValue204_200)));
    } else {
        unsigned int obj = *(unsigned int*)((char*)self + 0x18);
        if (obj != 0) {
            func_0207fcb8((Obj0207fcb8*)obj);
            func_0207fd00((Obj0207fd00*)obj);
            func_0207fe80(obj, 2, 1, 1);
            func_0207fd44((Cont0207fd44*)obj);
        }
    }
    if (*(unsigned int*)((char*)self + 0x1c) != 0 && func_020e28dc((Outer020e28dc*)(*(unsigned int*)((char*)self + 0x1c))) != 0) {
        func_020e2794((Struct020e2794*)(*(unsigned int*)((char*)self + 0x1c)), (void*)(self + 0x2c));
        return;
    }
    func_ov003_0215501c(self);
}
