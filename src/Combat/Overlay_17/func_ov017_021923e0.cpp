#include <globaldefs.h>

extern "C" void NSBXX_Model_SetPolygonID(void* obj, unsigned int value);

// USA: func_ov017_021923e0
extern "C" ARM void func_ov017_021923e0(void* arg0, unsigned int arg1) {
    void* var0 = *(void**)((char*)arg0 + 0x8);
    if (var0 == NULL) {
        return;
    }
    void* var1 = *(void**)((char*)var0 + 0x54);
    if (var1 == NULL) {
        return;
    }
    NSBXX_Model_SetPolygonID(var1, arg1);
}
