#include <globaldefs.h>

struct Entry02b0288 {
    unsigned int id;
    unsigned int size;
};
struct Hdr02b0288 {
    unsigned char pad[0xc];
    unsigned short dataOffset;
    unsigned short count;
};
struct Reloc020b0278 { char pad[0xc]; unsigned int offset; };

extern "C" struct Entry02b0288* func_020b0288(struct Hdr02b0288* h, unsigned int key);
extern "C" void func_020b0278(struct Reloc020b0278* p);

// USA: func_020b01f0
extern "C" ARM int func_020b01f0(struct Hdr02b0288* h, void** out) {
    struct Entry02b0288* e = func_020b0288(h, 0x504c5454);
    if (e == NULL) {
        *out = NULL;
        return 0;
    }
    func_020b0278((struct Reloc020b0278*)((char*)e + 8));
    *out = (char*)e + 8;
    return 1;
}
