#include <globaldefs.h>

struct Container020e0310;
extern "C" int func_02041c08(char* dst, int a1, int a2, int a3, int a4, int a5);
extern "C" int func_02041ea4(char* dst, int cursor);
extern "C" int func_020e0434(struct Container020e0310* c, int key);
extern "C" int func_02041b70(char* dst, int n, const char* name);
extern "C" int func_02042058(char* dst, const char* src);

extern char data_ov003_0217fe7f;

// USA: func_ov003_0215be70
extern "C" ARM void func_ov003_0215be70(char* base, char* dst, int flag) {
	int i;
	struct Container020e0310* c;
	signed char cursor;

	if (dst == NULL) return;

	cursor = *(signed char*)(base + 0x586);
	if (flag) {
		func_02041c08(dst, cursor, 8, 5, 5, 5);
	}
	func_02041ea4(dst, cursor);

	c = (struct Container020e0310*)(base + 0x64);
	for (i = 0; i < 2; i++) {
		int name = func_020e0434(c, (short)(i + 0x14));
		func_02041b70(dst, i, (const char*)name);
		if (i != 1) {
			func_02042058(dst, &data_ov003_0217fe7f);
		}
	}
}
