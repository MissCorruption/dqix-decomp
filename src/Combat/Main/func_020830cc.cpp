#include <globaldefs.h>

#include "std_library_functions.h"

#if defined(jpn)
enum { kTripleOffset = 0x7b8 };
#else
enum { kTripleOffset = 0x850 };
#endif

struct Words02082fa8 { unsigned int a, b, c; };

struct PackedTriple02082cdc {
    unsigned int a : 10;
    unsigned int b : 10;
    unsigned int c : 10;
    unsigned int hi : 2;
};

struct SlotRecord020830cc {
    unsigned char hdr00;
    unsigned char lo01 : 4;
    unsigned char bit01_4 : 1;
    unsigned char hi01 : 3;
    unsigned char name02[13];
    unsigned char val0f[13];
    unsigned int w1c[13];
    unsigned int w50;
    unsigned short h54;
    unsigned char pad56[2];
    struct Words02082fa8 tr58[13];
    unsigned short h_f4;
    unsigned char b_f6[27];
    unsigned char b_111[9];
    unsigned char b_11a[0x24];
    unsigned char flags13e;
    unsigned char lo13f : 3;
    unsigned char hi13f : 5;
    unsigned char b140[0xc];
    struct PackedTriple02082cdc stats[5];
    unsigned char b160[0x1c];
    unsigned char b17c[0xc0];
};

struct SlotState020830cc {
    struct PackedTriple02082cdc stats[4];
    unsigned char pad010[0x8];
    unsigned int w18;
    unsigned short h1c;
    unsigned short h1e;
    unsigned char pad020[0x1c];
    char name3c[0x30];
    unsigned short h6c;
    unsigned short h6e;
    unsigned short h70;
    unsigned short h72;
    unsigned char pad074[4];
    unsigned int w78_lo : 30;
    unsigned int bit30 : 1;
    unsigned int w78_top : 1;
    unsigned char pad07c[0x0c];
    unsigned char pad088[0xb0];
    unsigned int w138[13];
    unsigned short h16c[13];
    unsigned char b186[13];
    unsigned char pad193[0x2d1];
    unsigned char b464[27];
    unsigned char pad47f[9];
    unsigned char b488[0x1c];
    unsigned char b4a4[0xc0];
    unsigned short h564;
    unsigned char pad566[4];
    unsigned char b56a;
    unsigned char b56b_lo : 4;
    unsigned char b56b_hi : 4;
    unsigned char pad56c[kTripleOffset - 0x56c];
    struct Words02082fa8 tr850[13];
    unsigned char b8ec[0x24];
    unsigned char b910[9];
    unsigned char pad919[0x94c - 0x919];
    unsigned int w94c;
    unsigned int w950;
    unsigned short h954;
};

extern "C" void func_02082fa8(struct Words02082fa8*, struct Words02082fa8*);
extern "C" void __clear(void*, unsigned int);
extern "C" void func_020426bc(void*, char*, int);

// USA: func_020830cc
extern "C" ARM void func_020830cc(struct SlotState020830cc* src, struct SlotRecord020830cc* dst) {
    dst->lo01 = src->b56a;
    unsigned int bit = src->w950;
    dst->h54 |= 1 << bit;
    dst->w50 = bit;
    dst->h54 = src->h954;
    for (int i = 0; i < 13; i++) {
        dst->name02[i] = src->h16c[i];
        dst->val0f[i] = src->b186[i];
        dst->w1c[i] = src->w138[i];
    }
    for (int i = 0; i < 13; i++) {
        func_02082fa8(&dst->tr58[i], &src->tr850[i]);
    }
    dst->h_f4 = src->h564;
    for (int j = 0; j < 27; j++) {
        dst->b_f6[j] = src->b464[j];
    }
    memcpy(dst->b_111, src->b910, 9);
    memcpy(dst->b_11a, src->b8ec, 0x24);
    unsigned int flags = src->w18;
    unsigned char* fp = &dst->flags13e;
    if (flags & 1) {
        *fp |= 1;
    }
    if (flags & 2) {
        *fp |= 2;
    }
    if (flags & 4) {
        *fp |= 4;
    }
#if defined(jpn)
    memcpy(dst->b140, src->name3c, 0xc);
#else
    char local[0xc];
    __clear(local, 0xc);
    func_020426bc(src->name3c, local, 1);
    memcpy(dst->b140, local, 0xc);
#endif
    dst->bit01_4 = (unsigned short)src->bit30;
    struct PackedTriple02082cdc* s = dst->stats;
    s[0].a = src->stats[0].a;
    s[0].b = src->stats[0].b;
    s[0].c = src->stats[0].c;
    s[1].a = src->stats[1].a;
    s[1].b = src->stats[1].b;
    s[1].c = src->stats[1].c;
    s[2].a = src->stats[2].a;
    s[2].b = src->h1c;
    s[2].c = src->h1e;
    s[3].a = src->h6c;
    s[3].b = src->h6e;
    s[3].c = src->h70;
    s[4].a = src->h72;
    s[4].b = src->stats[3].a;
    memcpy(dst->b160, src->b488, 0x1c);
    dst->hi01 = src->b56b_lo;
    dst->lo13f = src->b56b_hi;
    memcpy(dst->b17c, src->b4a4, 0xc0);
    dst->hi13f = src->w94c;
}
