#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0xe20
#else
#define REGION_OFFSET_0 0xea4
#endif


struct Struct_020d7638;
extern "C" void func_020d7638(struct Struct_020d7638* arg0);
extern "C" void func_020d7534(void* arg0);

// USA: func_ov000_02160c60
extern "C" ARM void func_ov000_02160c60(void* arg0) {
    void* var0 = *(void**)((char*)arg0 + REGION_OFFSET_0);
    if (var0) {
        func_020d7534(var0);
        func_020d7638((struct Struct_020d7638*)*(void**)((char*)arg0 + REGION_OFFSET_0));
    }
}
