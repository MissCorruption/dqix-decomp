#include <globaldefs.h>

struct Vec3_0215758c {
	int x, y, z;
};

struct Self02158348 {
	int f0;
	struct Vec3_0215758c v1;
	struct Vec3_0215758c v2;
};

struct RingBuf0215758c;
extern "C" int func_ov001_0215758c(struct RingBuf0215758c* buf, struct Vec3_0215758c v1, struct Vec3_0215758c v2);

// USA: func_ov001_02158348
extern "C" ARM int func_ov001_02158348(struct Self02158348* self, char* dest) {
	func_ov001_0215758c((struct RingBuf0215758c*)(dest + 0x15c), self->v1, self->v2);
	return 0;
}
