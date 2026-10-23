#include <globaldefs.h>

#if defined(jpn)
enum { kSaveHalfwordOffset = 0x27f4, kSaveSecondHalfwordOffset = 0x27f6 };
#else
enum { kSaveHalfwordOffset = 0x27b4, kSaveSecondHalfwordOffset = 0x27b6 };
#endif

struct SearchStruct0202c1a4;
extern "C" signed char func_0202c1a4(struct SearchStruct0202c1a4* obj);
extern "C" void* func_02012fe4(void);

struct Obj_021d1c84 { unsigned char pad[4]; unsigned char field4; unsigned char field5; };

// USA: func_ov017_021d1c84
extern "C" ARM void func_ov017_021d1c84(int unused0, Obj_021d1c84* obj, int unused1, int unused2, struct SearchStruct0202c1a4* search) {
	if (func_0202c1a4(search) == 0) return;
	unsigned char* base = (unsigned char*)func_02012fe4();
	*(unsigned short*)(base + kSaveHalfwordOffset) = obj->field4;
	*(unsigned short*)(base + kSaveSecondHalfwordOffset) = obj->field5;
}
