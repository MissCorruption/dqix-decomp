#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"


// USA: func_02022b90
extern "C" ARM void func_02022b90(void* arg0, int* arg1) {
    ((BackgroundLoader*)((int)BackgroundLoader::GetInstance()))->RemoveTask((int)(*arg1));
    *arg1 = -1;
}
