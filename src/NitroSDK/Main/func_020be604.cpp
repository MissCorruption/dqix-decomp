#include <globaldefs.h>

#if defined(jpn)
#define func_020d2d00 func_020d47cc
#endif

struct ZeroStruct020d2ce0 {
    int a;
    int b;
};
extern "C" struct ZeroStruct020d2ce0 func_020d2ce0();

extern "C" int func_020d2d00(void* list, void* buf, void* info);
extern "C" int func_020be53c(void* obj, int field2, int arg3, int arg4);

struct Entry020be604 {
    unsigned char kind;
    unsigned char pad0;
    unsigned short field2;
    unsigned short field3;
    char pad1[6];
};

// USA: func_020be604
extern "C" ARM int func_020be604(void* obj, void* list, int id, int arg3, int arg4) {
    struct ZeroStruct020d2ce0 info = func_020d2ce0();
    struct Entry020be604 buf;
    int more;
    if (list == NULL) return 0;
    more = func_020d2d00(list, &buf, &info);
    if (more) {
        do {
            if (buf.kind == 1 && id == buf.field3) {
                if (!func_020be53c(obj, buf.field2, arg3, arg4)) return 0;
            }
            more = func_020d2d00(list, &buf, &info);
        } while (more);
    }
    return 1;
}
