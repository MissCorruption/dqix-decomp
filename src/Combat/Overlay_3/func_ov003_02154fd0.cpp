#include <globaldefs.h>
#if defined(jpn)
enum { kRegion1f8 = 0x1f4 };
enum { kRegion204 = 0x200 };
#else
enum { kRegion1f8 = 0x1f8 };
enum { kRegion204 = 0x204 };
#endif

extern "C" void func_ov023_021eb4f4(char* obj);

struct Cont0207fd88;
extern "C" void func_0207fd88(struct Cont0207fd88* obj);

struct SelfState020e2834;
extern "C" void func_020e2834(struct SelfState020e2834* self);

// USA: func_ov003_02154fd0
extern "C" ARM void func_ov003_02154fd0(char* obj) {
    if (*(unsigned char*)(obj + kRegion1f8) == 0) return;
    char* p204 = *(char**)(obj + kRegion204);
    if (p204 != 0) {
        func_ov023_021eb4f4(p204);
    } else {
        struct Cont0207fd88* p18 = *(struct Cont0207fd88**)(obj + 0x18);
        if (p18 != 0) {
            func_0207fd88(p18);
        }
    }
    struct SelfState020e2834* p1c = *(struct SelfState020e2834**)(obj + 0x1c);
    if (p1c != 0) {
        func_020e2834(p1c);
    }
}
