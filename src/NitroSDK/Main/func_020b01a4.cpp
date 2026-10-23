#include <globaldefs.h>

struct Reloc020b01e0;
extern "C" void func_020b01e0(struct Reloc020b01e0*);

struct Hdr02b0288;
struct Entry02b0288;
extern "C" struct Entry02b0288* func_020b0288(struct Hdr02b0288*, unsigned int);

// USA: func_020b01a4
extern "C" ARM int func_020b01a4(void* file, void** out) {
    struct Entry02b0288* chunk = func_020b0288((struct Hdr02b0288*)file, 0x43484152);
    if (chunk == 0) {
        *out = 0;
        return 0;
    }
    func_020b01e0((struct Reloc020b01e0*)((char*)chunk + 8));
    *out = (char*)chunk + 8;
    return 1;
}
