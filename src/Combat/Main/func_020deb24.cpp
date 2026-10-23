#include <globaldefs.h>

struct Struct_020deb08;
extern "C" short func_020deb08(struct Struct_020deb08* arg0);

struct Struct_0205faf4_9 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    int unknown_8_;
    void* unknown_c_;
};

// USA: func_020deb24
extern "C" ARM void* func_020deb24(struct Struct_0205faf4_9* arg0, int arg1) {
    int var0 = func_020deb08((struct Struct_020deb08*)arg0);
    if (arg1 < 0 || arg1 >= var0) {
        return NULL;
    }
    return (char*)arg0->unknown_c_ + arg1 * 0x20;
}
