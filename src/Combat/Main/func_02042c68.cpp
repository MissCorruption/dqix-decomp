#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void func_0205c790(char* arg0);

struct Struct_0204166c;
extern "C" void func_0204166c(struct Struct_0204166c* arg0);

struct Struct_020e2bd8;
extern "C" void func_020e2bd8(struct Struct_020e2bd8* arg0, int arg1, int arg2);

struct Struct_02042c68;
extern "C" void func_02042fcc(struct Struct_02042c68* arg0);

extern "C" void func_0202f1a4(char* arg0);

struct Struct_02042b98_3;
extern "C" void func_02042c24(struct Struct_02042b98_3* arg0, int arg1, int arg2);

struct Struct_02042b98;
extern "C" void func_02042c3c(struct Struct_02042b98* arg0, int arg1, int arg2);

extern "C" void func_02043124(void* arg0);

struct Struct_02042c68_2;
extern "C" void func_02045824(struct Struct_02042c68_2* arg0, int arg1, int arg2);

struct Struct_02042b98_2;
extern "C" void func_02042c54(struct Struct_02042b98_2* arg0, int arg1, int arg2, int arg3, int arg4);

extern "C" void func_020bc078(int* arg0);

extern int data_02107820;

#if defined(jpn)
#define REGION_OFFSET(jpnOffset, usaOffset) jpnOffset
#else
#define REGION_OFFSET(jpnOffset, usaOffset) usaOffset
#endif

// USA: func_02042c68
extern "C" ARM void func_02042c68(char* arg0) {
    int var0;

#if !defined(jpn)
    *(char*)(arg0 + 0x30) = -1;
    *(char*)(arg0 + 0x31) = -1;
#endif
    *(int*)(arg0 + REGION_OFFSET(0x4, 0x38)) = 0;
    *(int*)(arg0 + REGION_OFFSET(0x8, 0x3c)) = 9;
    *(int*)(arg0 + REGION_OFFSET(0x4c, 0x8c)) = 0;
    func_0205c790(arg0 + REGION_OFFSET(0x50, 0x90));

    *(int*)(arg0 + REGION_OFFSET(0x218, 0x2c8)) = 0;
    memset(arg0 + REGION_OFFSET(0x21c, 0x2cc), 0, 4);
    *(int*)(arg0 + REGION_OFFSET(0x220, 0x2d0)) = -1;
    *(int*)(arg0 + REGION_OFFSET(0x228, 0x2d8)) = 0;
    *(int*)(arg0 + REGION_OFFSET(0x22c, 0x2dc)) = 0;
    *(int*)(arg0 + REGION_OFFSET(0x230, 0x2e0)) = 0;
    *(short*)(arg0 + REGION_OFFSET(0x234, 0x2e4)) = 0;
    *(unsigned char*)(arg0 + REGION_OFFSET(0x236, 0x2e6)) = 1;
    *(unsigned char*)(arg0 + REGION_OFFSET(0x237, 0x2e7)) = 0;
    *(int*)(arg0 + REGION_OFFSET(0x238, 0x2e8)) = 0;
    memset(arg0 + REGION_OFFSET(0x37c, 0x4ac), 0, 0x400);
    *(int*)(arg0 + REGION_OFFSET(0x77c, 0x8ac)) = 0;
    memset(arg0 + REGION_OFFSET(0x780, 0x8b0), 0, 0x40);

    *(unsigned char*)(arg0 + REGION_OFFSET(0x7e2, 0x912)) = 0;
    *(unsigned char*)(arg0 + REGION_OFFSET(0x17e0, 0x19b0)) = 0;
    *(int*)(arg0 + REGION_OFFSET(0x880, 0x9b0)) = 0;
    for (var0 = 0; var0 < 0x80; var0++) {
        func_0204166c((struct Struct_0204166c*)(arg0 + REGION_OFFSET(0x888, 0x9b8) + var0 * 0x1c));
        *(unsigned char*)(arg0 + var0 + REGION_OFFSET(0x1688, 0x17b8)) = 0;
    }

    *(int*)(arg0 + REGION_OFFSET(0x824, 0x954)) = 0;
    *(int*)(arg0 + REGION_OFFSET(0x828, 0x958)) = 0;
    *(unsigned char*)(arg0 + REGION_OFFSET(0x1790, 0x1962)) = 0;
    func_020e2bd8((struct Struct_020e2bd8*)(arg0 + REGION_OFFSET(0x1794, 0x1964)), 0, 0);

    func_020e2bd8((struct Struct_020e2bd8*)(arg0 + REGION_OFFSET(0x17b8, 0x1988)), 0, 1);

    func_02042fcc((struct Struct_02042c68*)(arg0 + REGION_OFFSET(0x7e4, 0x914)));
    func_02042fcc((struct Struct_02042c68*)(arg0 + REGION_OFFSET(0x800, 0x930)));
    func_0202f1a4(arg0 + REGION_OFFSET(0x1804, 0x19e0));

    *(void**)(arg0 + REGION_OFFSET(0x1c44, 0x1e20)) = (void*)(arg0 + REGION_OFFSET(0x7e4, 0x914));
    func_02042c24((struct Struct_02042b98_3*)(arg0 + REGION_OFFSET(0x1804, 0x19e0)), 0, 0x80);
    func_02042c3c((struct Struct_02042b98*)(arg0 + REGION_OFFSET(0x1804, 0x19e0)), 0x100, 0x40);
    *(unsigned char*)(arg0 + REGION_OFFSET(0x17e1, 0x19b1)) = 1;
    *(int*)(arg0 + REGION_OFFSET(0x1c4c, 0x1e28)) = 0;
    *(unsigned char*)(arg0 + REGION_OFFSET(0x17fd, 0x19cc)) = 0;
    func_02043124(arg0);

    *(unsigned char*)(arg0 + REGION_OFFSET(0x17eb, 0x19bb)) = 1;
    *(int*)(arg0 + REGION_OFFSET(0x864, 0x994)) = -1;
    *(unsigned char*)(arg0 + REGION_OFFSET(0x17ec, 0x19bc)) = 0;
    *(unsigned char*)(arg0 + REGION_OFFSET(0x17e2, 0x19b2)) = 1;
    *(int*)(arg0 + REGION_OFFSET(0x86c, 0x99c)) = 0;
    *(unsigned char*)(arg0 + REGION_OFFSET(0x17e3, 0x19b3)) = 0;
    *(unsigned char*)(arg0 + REGION_OFFSET(0x17e4, 0x19b4)) = 0;
    *(unsigned char*)(arg0 + REGION_OFFSET(0x17e5, 0x19b5)) = 0;
    *(int*)(arg0 + REGION_OFFSET(0x870, 0x9a0)) = 0;
    *(short*)(arg0 + REGION_OFFSET(0x174c, 0x187c)) = 0x7fff;
    *(int*)(arg0 + REGION_OFFSET(0x874, 0x9a4)) = 3;
    *(int*)(arg0 + REGION_OFFSET(0x884, 0x9b4)) = 0;
    *(unsigned char*)(arg0 + REGION_OFFSET(0x17dc, 0x19ac)) = 0;
    *(unsigned char*)(arg0 + REGION_OFFSET(0x17dd, 0x19ad)) = 0;
#if defined(jpn)
    for (int var1 = 0; var1 < 4; var1++) {
        *(int*)(arg0 + 0x1738) = 0;
    }
#else
    func_02045824((struct Struct_02042c68_2*)arg0, 0, -1);
#endif

    *(unsigned char*)(arg0 + REGION_OFFSET(0x17e8, 0x19b8)) = 0;
    *(int*)(arg0 + REGION_OFFSET(0x1718, 0x1848)) = 0;
    *(int*)(arg0 + REGION_OFFSET(0x171c, 0x184c)) = 0;
    *(int*)(arg0 + REGION_OFFSET(0x1720, 0x1850)) = 0x100;
    *(int*)(arg0 + REGION_OFFSET(0x1724, 0x1854)) = 0xc0;
    func_02042c54((struct Struct_02042b98_2*)(arg0 + REGION_OFFSET(0x1718, 0x1848)), 0, 0x88, 0x100, 0xc0);

    *(unsigned char*)(arg0 + REGION_OFFSET(0x17e9, 0x19b9)) = 1;
    *(int*)(arg0 + REGION_OFFSET(0x1728, 0x1858)) = 0;
    *(int*)(arg0 + REGION_OFFSET(0x172c, 0x185c)) = 0x88;
    *(int*)(arg0 + REGION_OFFSET(0x1730, 0x1860)) = 0xc;
    *(int*)(arg0 + REGION_OFFSET(0x1734, 0x1864)) = 0x10;
    *(unsigned char*)(arg0 + REGION_OFFSET(0x17de, 0x19ae)) = 0;
    *(unsigned char*)(arg0 + REGION_OFFSET(0x17df, 0x19af)) = 0;
    *(int*)(arg0 + REGION_OFFSET(0x1738, 0x1868)) = 0;
    *(int*)(arg0 + REGION_OFFSET(0x1708, 0x1838)) = -1;
    *(int*)(arg0 + REGION_OFFSET(0x170c, 0x183c)) = 0;
#if defined(jpn)
    *(unsigned char*)(arg0 + 0x17f2) = 0;
#endif
    *(int*)(arg0 + REGION_OFFSET(0x860, 0x990)) = 0x80;
    memset(arg0 + REGION_OFFSET(0x82c, 0x95c), 0, 0x20);

    memset(arg0 + REGION_OFFSET(0x84c, 0x97c), 0, 0x10);

    *(unsigned char*)(arg0 + REGION_OFFSET(0x17f3, 0x19c2)) = 1;
    memset(arg0 + REGION_OFFSET(0x1752, 0x1882), 0xff01, REGION_OFFSET(0x20, 0x80));

#if !defined(jpn)
    memset(arg0 + 0x1902, 0, 0x40);
#endif

    *(short*)(arg0 + REGION_OFFSET(0x1772, 0x1942)) = 0;
#if !defined(jpn)
    *(short*)(arg0 + 0x1944) = 0;
#endif
    *(unsigned char*)(arg0 + REGION_OFFSET(0x17ee, 0x19be)) = 0;
    *(short*)(arg0 + REGION_OFFSET(0x1776, 0x1948)) = -1;
    *(char*)(arg0 + REGION_OFFSET(0x177b, 0x194d)) = 0x7f;
    *(char*)(arg0 + REGION_OFFSET(0x177a, 0x194c)) = *(char*)(arg0 + REGION_OFFSET(0x177b, 0x194d));
    *(char*)(arg0 + REGION_OFFSET(0x1779, 0x194b)) = *(char*)(arg0 + REGION_OFFSET(0x177a, 0x194c));
    *(char*)(arg0 + REGION_OFFSET(0x1778, 0x194a)) = *(char*)(arg0 + REGION_OFFSET(0x1779, 0x194b));
    *(unsigned char*)(arg0 + REGION_OFFSET(0x1788, 0x195a)) = REGION_OFFSET(12, 8);
    *(unsigned char*)(arg0 + REGION_OFFSET(0x1789, 0x195b)) = 0;
    *(unsigned char*)(arg0 + REGION_OFFSET(0x17ef, 0x19bf)) = 0;
#if defined(jpn)
    *(unsigned char*)(arg0 + 0x17ff) &= ~2;
#else
    *(unsigned char*)(arg0 + 0x19cf) = 0;
#endif
    *(unsigned char*)(arg0 + REGION_OFFSET(0x17fc, 0x19cb)) = 0;
    *(unsigned char*)(arg0 + REGION_OFFSET(0x17fd, 0x19cc)) = 0;
#if defined(jpn)
    *(unsigned char*)(arg0 + 0x17ff) &= ~1;
#else
    *(unsigned char*)(arg0 + 0x19ce) = 0;
#endif
    func_020bc078(&data_02107820);

#if defined(jpn)
    *(unsigned char*)(arg0 + 0x17ff) &= ~4;
#else
    *(unsigned char*)(arg0 + 0x19d0) = 0;
#endif
    *(short*)(arg0 + REGION_OFFSET(0x1800, 0x19da)) = -1;
#if !defined(jpn)
    *(unsigned char*)(arg0 + 0x19dc) = 1;
#endif
    *(unsigned char*)(arg0 + REGION_OFFSET(0x17e1, 0x19b1)) = 0;
}
