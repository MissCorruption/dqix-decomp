#include <globaldefs.h>
#if defined(jpn)
#define REGION_FIELD 0x4108
#else
#define REGION_FIELD 0x4328
#endif

// USA: func_ov017_0218d268
extern "C" ARM int func_ov017_0218d268(void* obj) {
	return *(int*)((char*)obj + REGION_FIELD);
}
