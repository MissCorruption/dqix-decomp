#include <globaldefs.h>

#if defined(jpn)
#define func_ov011_02184740 func_ov011_02185840
#endif

struct Struct_ov011_02184740;
extern "C" ARM void func_ov023_021f698c(struct Struct_ov011_02184740* arg0);

// USA: func_ov011_02184740
extern "C" ARM void func_ov011_02184740(void* arg0) {
    func_ov023_021f698c((struct Struct_ov011_02184740*)((char*)arg0 + 0x118));
}
