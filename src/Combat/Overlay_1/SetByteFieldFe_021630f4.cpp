#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" int func_ov017_021d60f4(int a);

// USA: func_ov001_021630f4
ARM int SetByteFieldFe_021630f4(int a) {
#if defined(jpn)
    enum { queueOffset = 0x524, fieldOffset = 0xfa };
#else
    enum { queueOffset = 0x734, fieldOffset = 0xfe };
#endif
	char* p = *(char**)((char*)GetGameResources() + 0x3000 + queueOffset);
	*(unsigned char*)(p + fieldOffset) = func_ov017_021d60f4(a) != 0 ? 1 : 0;
	return 1;
}
