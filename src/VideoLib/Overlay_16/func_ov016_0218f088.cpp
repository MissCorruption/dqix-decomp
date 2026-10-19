#include <globaldefs.h>

struct Stream0218f088 {
	char* cursor;			// 0x00
	char pad_4[0x3b0];
	int value;				// 0x3b4
};

struct Obj0218f088 {
	char pad_0[8];
	signed char tag0;					// 0x08
	signed char tag1;					// 0x09
	char pad_a[0x2a];
	Stream0218f088* stream;				// 0x34
	int (*advance)(Stream0218f088*);	// 0x38
	char pad_3c[0x28];
	int* table;							// 0x64
	char pad_68[0x34];
	unsigned int count;					// 0x9c
	unsigned int limit;					// 0xa0
	#if !defined(jpn)
	int wideFlag;
#endif
	unsigned int wrap;					// 0xa8
	int idx[6];							// 0xac
	char pad_c4[8];
	int fieldcc;						// 0xcc
	int fieldd0;						// 0xd0
};

// USA: func_ov016_0218f088
extern "C" ARM int func_ov016_0218f088(Obj0218f088* o) {
	int adj;
	int i;

	if (o->count > o->limit) {
		return 0;
	}

	if ((*(unsigned short*)o->stream->cursor & 0x8000) != 0) {
#if !defined(jpn)
		o->wideFlag = 1;
#endif
		adj = 4;
	} else {
#if !defined(jpn)
		o->wideFlag = 0;
#endif
		adj = 0;
	}

	o->stream->cursor += o->advance(o->stream);

	if (o->tag0 == 0x4e && o->tag1 == 0x33) {
		o->stream->cursor += adj;
	}

	o->table[o->idx[0]] = o->stream->value;

	o->fieldcc = 0;
	o->fieldd0 = 0;

	for (i = 0; i < 6; i++) {
		o->idx[i]++;
		if (o->wrap == o->idx[i]) {
			o->idx[i] = 0;
		}
	}

	o->limit = o->limit + 1;
	return 1;
}
