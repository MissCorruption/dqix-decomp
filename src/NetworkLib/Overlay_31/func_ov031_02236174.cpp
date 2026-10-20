#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" int func_ov031_0221b158(void* p);
extern "C" void func_ov031_02236570(int v);

union Header02236174 {
	unsigned char raw[0xf0];
	struct {
		unsigned char pad0[0xc0];
		unsigned char idA[4];
		unsigned char idB[4];
		unsigned char idC[8];
		unsigned char fieldD0;
	};
};

struct Entry02236174 {
	Header02236174 header;
	unsigned char key[4];
	unsigned char slot;
	unsigned char clearIds;
	unsigned char clearIdC;
	unsigned char pad[9];
};

struct Base02236174 { Entry02236174* entries; };
extern Base02236174 data_ov031_02290cfc;

// USA: func_ov031_02236174  (semantic: CopyHeaderAndProcess_02236174)
extern "C" ARM void func_ov031_02236174(void) {
	Entry02236174* staging = &data_ov031_02290cfc.entries[4];
	Header02236174* dst = &data_ov031_02290cfc.entries[staging->slot].header;

	*dst = staging->header;

	if (staging->clearIds != 0) {
		VectorizedMemset(dst->idA, 0, 4);
		VectorizedMemset(dst->idB, 0, 4);
		dst->fieldD0 = 0;
	} else {
		VectorizedInvertedMemcpy(staging->header.idA, dst->idA, 4);
		VectorizedInvertedMemcpy(staging->header.idB, dst->idB, 4);
		dst->fieldD0 = func_ov031_0221b158(staging->key);
	}

	if (staging->clearIdC != 0) {
		VectorizedMemset(dst->idC, 0, 8);
	} else {
		VectorizedInvertedMemcpy(staging->header.idC, dst->idC, 8);
	}

	func_ov031_02236570(staging->slot);
}
