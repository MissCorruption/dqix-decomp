#include <globaldefs.h>

struct Global0224c980_022036a8 { unsigned short f0; unsigned short f2; };
struct Soc022036a8 {
	unsigned char pad0[0x8];
	unsigned char state;
	unsigned char pad9[0x2c - 0x9];
	unsigned short f2c;
	unsigned short f2e;
	unsigned char pad30[0x34 - 0x30];
	unsigned int f34;
};

extern Global0224c980_022036a8 data_ov031_0224c980;

extern "C" void func_ov031_02201550(unsigned char* buf, unsigned int len, Soc022036a8* soc, int flags, int opt);
void CycleCurrentPriorityContexts();

// USA: func_ov031_022036a8
extern "C" ARM int func_ov031_022036a8(unsigned char* buf, unsigned int len, Soc022036a8* soc, int flag) {
	unsigned int n;
	unsigned int win;
	unsigned int prev = soc->f34;
	int cnt;
	if (flag != 0) {
		win = 1;
	} else {
		win = soc->f2c;
	}
	cnt = prev * 2 + 4;
	while (len != 0 && soc->state == 4) {
		unsigned int cur;
		n = soc->f2e;
		if (n >= win) n = win;
		if (data_ov031_0224c980.f2 < n) n = data_ov031_0224c980.f2;
		if (flag == 0) n &= ~1;
		if (len < n) n = len;
		cur = soc->f34;
		cnt += cur - prev;
		prev = cur;
		if (cnt-- == 0) n = 0;
		if (n == 0) break;
		win -= n;
		func_ov031_02201550(buf, n, soc, 0x18, 0);
		CycleCurrentPriorityContexts();
		buf += n;
		len -= n;
	}
	return n;
}
