#if defined(jpn)
#define R(j,u) (j)
#define func_ov006_02155480 func_ov006_02156b68
#define data_ov011_021889a0 data_ov011_02189700
#define data_ov013_02187dd8 data_ov013_02188cf0
#define func_ov006_02154fe4 func_ov006_02156730
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

extern "C" void func_ov017_021d4cc0(void* arg0, void* arg1, int arg2);
extern int data_ov011_021889a0;

// USA: func_ov011_021888ec
extern "C" ARM void func_ov011_021888ec(void* arg0) {
    func_ov017_021d4cc0(arg0, &data_ov011_021889a0, R(0x6f,0x73));
}
