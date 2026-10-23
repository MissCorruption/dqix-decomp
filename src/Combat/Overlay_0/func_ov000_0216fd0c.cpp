#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"


extern int data_ov000_02183fcc;
extern int data_ov000_02183fe0;
#if defined(jpn)
extern char data_ov000_02185100[];
#endif

struct Struct_ov000_0216fd0c {
	int unknown_0_;
};

// USA: func_ov000_0216fd0c
extern "C" ARM void func_ov000_0216fd0c(struct Struct_ov000_0216fd0c* arg0) {
#if defined(jpn)
    arg0->unknown_0_ = BackgroundLoader::GetInstance()->QueueLoadFile(data_ov000_02185100, (SafeAllocator*)0);
#else
	arg0->unknown_0_ = ((BackgroundLoader*)((int)BackgroundLoader::GetInstance()))->QueueLoadFileInGP2((const char*)((int)&data_ov000_02183fcc), (const char*)((int)&data_ov000_02183fe0), (SafeAllocator*)(0));
#endif
}
