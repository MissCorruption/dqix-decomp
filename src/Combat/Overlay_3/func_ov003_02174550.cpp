#include <globaldefs.h>
#if defined(jpn)
enum { kRegion104e = 0xfca };
enum { kRegion104f = 0xfcb };
enum { kRegion103f = 0xfbb };
enum { kRegionff8 = 0xf74 };
enum { kRegion88c = 0x808 };
enum { kRegion1046 = 0xfc2 };
enum { kRegion103e = 0xfba };
enum { kRegion89c = 0x818 };
#else
enum { kRegion104e = 0x104e };
enum { kRegion104f = 0x104f };
enum { kRegion103f = 0x103f };
enum { kRegionff8 = 0xff8 };
enum { kRegion88c = 0x88c };
enum { kRegion1046 = 0x1046 };
enum { kRegion103e = 0x103e };
enum { kRegion89c = 0x89c };
#endif


struct Obj0208203c;
struct Cont0207fe44;
struct Outer020e28dc;
struct Obj020e25e8;

extern "C" int func_020421a0();
extern "C" void func_02043204(char* obj);
extern "C" void func_0208203c(struct Obj0208203c* obj);
extern "C" void func_0207fe44(struct Cont0207fe44* obj);
extern "C" void func_ov003_021749c0(char* base);
extern "C" int func_020e28dc(struct Outer020e28dc* o);
extern "C" void func_020e25e8(struct Obj020e25e8* obj);
extern "C" void func_ov003_02175cb0(char* base, int flag);

// USA: func_ov003_02174550
extern "C" ARM void func_ov003_02174550(char* base) {
    if (*(unsigned char*)(base + kRegion104e) != 0) return;
    *(unsigned char*)(base + kRegion104e) = 1;

    func_02043204((char*)func_020421a0());
    func_0208203c((struct Obj0208203c*)(base + kRegion88c));

    *(int*)(base + kRegionff8) = 0;
    func_0207fe44(*(struct Cont0207fe44**)(base + kRegion89c));

    *(unsigned char*)(base + kRegion103e) = 9;
    *(unsigned char*)(base + kRegion103f) = 0;
    if (*(unsigned short*)(base + kRegion1046) & 0x80) {
        func_ov003_021749c0(base);
    }

    if (*(struct Outer020e28dc**)base != NULL && func_020e28dc(*(struct Outer020e28dc**)base)) {
        func_020e25e8((struct Obj020e25e8*)(*(void**)base));
    }

    if (*(unsigned char*)(base + kRegion104f) != 0) {
        func_ov003_02175cb0(base, 1);
    }
}
