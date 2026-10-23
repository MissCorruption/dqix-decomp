#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"


// USA: func_ov017_021c235c
extern "C" ARM void func_ov017_021c235c(char* arg0) {
	int var0 = (int)BackgroundLoader::GetInstance();
	short var1 = *(short*)(arg0 + 8);
	if (var1 > -1) ((BackgroundLoader*)(var0))->RemoveTask((int)(var1));
}
