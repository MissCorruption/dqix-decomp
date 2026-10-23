#include <globaldefs.h>

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* a, void* b, int c);

struct Sub021cbf18 {
    unsigned char valA;
    unsigned char pad;
    unsigned short valB;
};

struct LocalEvt021cbf18 {
    unsigned char tag;
    unsigned char pad0[3];
    Sub021cbf18 sub;
    unsigned char pad2[12];
};

// USA: func_ov017_021cbf18
extern "C" ARM void func_ov017_021cbf18(unsigned char a, unsigned short b) {
    LocalEvt021cbf18 buf;
    void* p = func_0202ae24();
    buf.tag = 0x80;
    Sub021cbf18* s = &buf.sub;
    s->valA = a;
    s->valB = b;
    func_0205e330(p, &buf, 0);
}
