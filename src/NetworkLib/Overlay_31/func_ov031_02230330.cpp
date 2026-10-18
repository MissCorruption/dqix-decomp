#include <globaldefs.h>

struct Point_02230330 { unsigned short x, y; };
struct Box_02230330 { Point_02230330 pos; Point_02230330 size; };
struct Ctx_02230330 {
	unsigned char unk0;
	unsigned char unk1;
	unsigned char unk2;
	unsigned char unk3;
	unsigned short field4;
};

extern "C" int FastIntDivide(int numer, unsigned int denom);
extern "C" int func_ov031_0223d49c(Box_02230330* p);
extern "C" int func_ov031_0223d634(Box_02230330* box);

extern Box_02230330 data_ov031_022493b8;
extern Ctx_02230330 data_ov031_02290ca0;
// .rodata of this file: four separate objects read off one section-base literal
extern const unsigned char data_ov031_02248f5c[4] = {2, 3, 7, 8};
extern const Box_02230330 data_ov031_02248f60 = {{204, 52}, {28, 24}};
extern const Box_02230330 data_ov031_02248f68 = {{143, 52}, {44, 24}};
extern const Box_02230330 data_ov031_02248f70 = {{192, 52}, {44, 24}};
extern unsigned char data_ov031_0224903c[];
extern Box_02230330 data_ov031_02248fea[3];

// USA: func_ov031_02230330
extern "C" ARM int func_ov031_02230330(void) {
	Box_02230330 box;

	if (!func_ov031_0223d49c(&data_ov031_022493b8)) return 0xe;

	{
		int div = FastIntDivide(data_ov031_02290ca0.field4, 0x1d);
		int i = 0;
		box = data_ov031_02248f60;
		do {
			if (div != 2 && div != 6) {
				if (func_ov031_0223d634(&box)) return data_ov031_0224903c[div];
			}
			box.pos.y += 0x1d;
			i++;
			div++;
		} while (i < 4);
	}
	{
		int div = FastIntDivide(data_ov031_02290ca0.field4, 0x1d);
		int i = 0;
		do {
			if (div == 2) {
				int off = i * 0x1d;
				box = data_ov031_02248f70;
				box.pos.y += off;
				if (func_ov031_0223d634(&box)) return 2;
				box = data_ov031_02248f68;
				box.pos.y += off;
				if (func_ov031_0223d634(&box)) return 3;
				break;
			}
			i++;
			div++;
		} while (i < 4);
	}
	{
		int div = FastIntDivide(data_ov031_02290ca0.field4, 0x1d);
		int i = 0;
		do {
			if (div == 6) {
				int off = i * 0x1d;
				box = data_ov031_02248f70;
				box.pos.y += off;
				if (func_ov031_0223d634(&box)) return 7;
				box = data_ov031_02248f68;
				box.pos.y += off;
				if (func_ov031_0223d634(&box)) return 8;
				break;
			}
			i++;
			div++;
		} while (i < 4);
	}
	{
		Box_02230330* p = data_ov031_02248fea;
		int i = 0;
		do {
			if (func_ov031_0223d49c(p)) return i + 0xb;
			i++;
			p++;
		} while (i < 3);
	}
	return 0xe;
}
