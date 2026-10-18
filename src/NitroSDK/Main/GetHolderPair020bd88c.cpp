#include <globaldefs.h>

struct Holder020bd88c {
	char _pad[0x7c];
	int f7c;
	int f80;
};

extern struct Holder020bd88c* data_02110370;

struct OutPair020bd88c {
	int a;
	int b;
};

// USA: func_020bd88c
ARM void GetHolderPair020bd88c(OutPair020bd88c* out) {
	Holder020bd88c* h = data_02110370;
	int a = h->f7c;
	int b = h->f80;
	out->a = a;
	out->a = a;
	out->b = b;
}