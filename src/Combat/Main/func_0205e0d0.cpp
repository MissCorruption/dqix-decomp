#include <globaldefs.h>
#include "std_library_functions.h"
#include "Resource/Script.h"

struct Struct_0201c3a4;

extern void* data_02108740[];

// USA: func_0205e0d0
extern "C" ARM int func_0205e0d0(struct Struct_0201c3a4* arg0) {
    char* var0 = (char*)(void*)((Script::Parameter*)arg0)->ToString();
    if (var0 != NULL) strcpy((char*)data_02108740[1] + 0xa, var0);
    return 1;
}
