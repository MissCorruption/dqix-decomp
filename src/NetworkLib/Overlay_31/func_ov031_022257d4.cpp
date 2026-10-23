#include <globaldefs.h>

extern "C" void func_ov031_0223e2c0(int idx, void* obj);
extern "C" void func_ov031_0223ba20(int a);

struct Obj0223c534;
extern "C" void func_ov031_0223c534(Obj0223c534* obj);

struct FlagObj0223da58;
extern "C" int func_ov031_0223da58(FlagObj0223da58* obj);

extern "C" unsigned int func_ov031_0223cf70(void** a);

struct Tables022257d4 {
	Obj0223c534* grid[3][4];
	FlagObj0223da58* flagsA[0x2f];
	FlagObj0223da58* flagsB[4];
	int handlesA[2];
	int handlesB[4];
};

extern "C" Tables022257d4* data_ov031_02250bfc;
namespace DuplicatePool {
	extern "C" Tables022257d4* data_ov031_02250bfc;
}

// USA: func_ov031_022257d4
extern "C" ARM void func_ov031_022257d4(void* obj) {
	int i;
	int j;

	func_ov031_0223e2c0(0, obj);

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			func_ov031_0223c534(data_ov031_02250bfc->grid[i][j]);
			if (i == 0) {
				func_ov031_0223ba20(data_ov031_02250bfc->handlesB[j]);
			}
		}
	}

	for (i = 0; i < 2; i++) {
		func_ov031_0223ba20(data_ov031_02250bfc->handlesA[i]);
	}

	for (i = 0; i < 4; i++) {
		func_ov031_0223da58(data_ov031_02250bfc->flagsB[i]);
	}

	for (i = 0; i < 0x2f; i++) {
		func_ov031_0223da58(data_ov031_02250bfc->flagsA[i]);
	}

	func_ov031_0223cf70((void**)&DuplicatePool::data_ov031_02250bfc);
}
