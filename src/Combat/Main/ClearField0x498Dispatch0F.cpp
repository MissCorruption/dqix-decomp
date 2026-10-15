#include <globaldefs.h>
struct Desc021b790c;

int LookupAndForEachNode020649b0(void*, int, void*);

// USA: func_02064a08
ARM void ClearField0x498Dispatch0F_02064a08(void* obj, Desc021b790c* arg) {
    *(int*)((char*)obj + 0x498) = 0;
    LookupAndForEachNode020649b0(obj, 0xf, (void*)arg);
}
