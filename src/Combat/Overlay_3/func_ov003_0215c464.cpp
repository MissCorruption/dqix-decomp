#include <globaldefs.h>

struct Container0205a3d0;
struct Elem0205a3d0;
extern "C" struct Elem0205a3d0* func_0205a3d0(struct Container0205a3d0* c, int key);
extern "C" void func_0205a370(struct Container0205a3d0* c, int key);
extern "C" void func_020e27ec(struct Container0205a3d0* c, int key, short a, short b);
extern "C" void func_0205a42c(struct Container0205a3d0* c, int key, int val);

struct Container0205a330;
extern "C" void func_0205a330(struct Container0205a330* c, int arg);

extern "C" void func_0205ae8c(void* obj);

// USA: func_ov003_0215c464
extern "C" ARM void func_ov003_0215c464(char* obj) {
	struct Elem0205a3d0* e;

	if (*(unsigned char*)(obj + 0x59f) & 2) {
		struct Container0205a3d0* cont = *(struct Container0205a3d0**)(obj + 0xd4);
		if (cont != NULL) {
			func_0205a370(cont, 1);
			e = func_0205a3d0(cont, 1);
			if (e != NULL) {
				*(unsigned char*)((char*)e + 0x15) |= 8;
			}
			func_0205a330((struct Container0205a330*)cont, *(int*)(obj + 0x574));
			func_020e27ec(cont, 1, 0xd7, 0x96);
			func_0205a42c(cont, 1, 6);
		}
		func_0205ae8c(obj + 0x98);
		return;
	}

	{
		struct Container0205a3d0* cont = *(struct Container0205a3d0**)(obj + 0xd4);
		if (cont == NULL) return;
		e = func_0205a3d0(cont, 1);
		if (e != NULL) {
			*(unsigned char*)((char*)e + 0x15) &= ~8;
		}
	}
}
