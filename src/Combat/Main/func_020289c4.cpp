#include <globaldefs.h>
#if defined(jpn)
#define SUBOBJECT_OFFSET(x) ((x) - 4)
#else
#define SUBOBJECT_OFFSET(x) (x)
#endif

struct Struct_0201a300_5;
struct Struct_020287b4_2;
struct Struct_020287b4_4;

extern "C" ARM void func_020280b0(struct Struct_0201a300_5* arg0);
extern "C" ARM void func_0209bffc(void* arg0);
extern "C" ARM void func_0209bc84(void* arg0);
extern "C" ARM void func_0209af34(struct Struct_020287b4_2* arg0);
extern "C" ARM void* func_0206efc4(void* arg0);
extern "C" ARM void func_0206ee60(struct Struct_020287b4_4* arg0);
extern "C" ARM void func_020a8e88(void* arg0);

struct Struct_020288e0 {
    unsigned short unknown_0_;
    unsigned short unknown_2_0_ : 2;
    unsigned short unknown_2_2_ : 1;
    unsigned short unknown_2_3_ : 1;
    unsigned short unknown_2_4_ : 12;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned int unknown_8_;
    unsigned char unknown_c_;
    signed char unknown_d_;
};

// USA: func_020289c4
extern "C" ARM void func_020289c4(struct Struct_020288e0* arg0) {
    arg0->unknown_2_2_ = 0;
    arg0->unknown_2_3_ = 0;
    arg0->unknown_0_ = 0;
    arg0->unknown_8_ = 0;
    arg0->unknown_6_ = 0;
    arg0->unknown_c_ = 0;
    arg0->unknown_2_4_ = 0;
    arg0->unknown_4_ = 0;
    arg0->unknown_d_ = -1;
    func_020280b0((struct Struct_0201a300_5*)((char*)arg0 + SUBOBJECT_OFFSET(0x18)));
    func_0209bffc((char*)arg0 + SUBOBJECT_OFFSET(0x44));
    func_0209bc84((char*)arg0 + SUBOBJECT_OFFSET(0x60));
    func_0209af34((struct Struct_020287b4_2*)((char*)arg0 + SUBOBJECT_OFFSET(0x124)));
    func_0206efc4((char*)arg0 + SUBOBJECT_OFFSET(0x2f8));
    func_0206ee60((struct Struct_020287b4_4*)((char*)arg0 + SUBOBJECT_OFFSET(0x304)));
    func_020a8e88((char*)arg0 + SUBOBJECT_OFFSET(0x30c));
}
