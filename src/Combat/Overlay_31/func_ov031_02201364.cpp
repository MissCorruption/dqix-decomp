#include <globaldefs.h>

struct Sub_02201364 {
	char pad[0x22];
	unsigned short f22;
	unsigned short f24;
	unsigned short f26;
	unsigned short f28;
};

struct Arg3_02201364 {
	char pad_a[0xa];
	unsigned short fa;
	char pad_b[0x1c - 0xc];
	unsigned int f1c;
	char pad_c[0x4c - 0x20];
	struct Sub_02201364* f4c;
};

struct Global_02201364 { char pad[4]; unsigned short f4; char pad2[0x14 - 6]; };
inline Global_02201364& GetGlobal_02201364() { static Global_02201364 s; return s; }
struct Table_02111304_02201364 { char pad[4]; unsigned int f4; };

extern Table_02111304_02201364 data_02111304;

extern "C" unsigned int func_ov031_022005b4(void* p, unsigned int len, unsigned int seed);
short NormalizeChecksum_02200668(unsigned int value);
extern "C" void func_ov031_0220116c(void* p, unsigned int len, unsigned int a, unsigned int b, unsigned int c, unsigned int d);

// USA: func_ov031_02201364
extern "C" ARM void func_ov031_02201364(void* a, unsigned int b, struct Arg3_02201364* c) {
	struct Sub_02201364* s = c->f4c;
	s->f22 = 8;
	s->f26 = data_02111304.f4;
	unsigned short cur = GetGlobal_02201364().f4;
	s->f24 = 0;
	c->fa = cur;
	GetGlobal_02201364().f4 = cur + 1;
	s->f28 = cur;
	unsigned int t = func_ov031_022005b4((void*)&s->f22, 8u, 0u);
	unsigned short n = (unsigned short)func_ov031_022005b4(a, b, t);
	short m = NormalizeChecksum_02200668(n);
	s->f24 = (unsigned short)((m >> 8) | (m << 8));
	func_ov031_0220116c(&s->f22, 8, (unsigned int)a, b, c->f1c, 1);
}