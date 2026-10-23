#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

#if defined(jpn)
extern "C" void* func_ov001_021590c4(void* arg0);
#else
extern "C" void* func_ov001_021590c4(void* arg0);
#endif

struct Struct_ov001_02165880_30 { char unknown_0_[0x24]; void* unknown_24_; };
extern Struct_ov001_02165880_30 data_ov001_02165880;

// USA: func_ov001_0215d8b4
extern "C" ARM int func_ov001_0215d8b4(void) {
    func_ov001_021590c4(data_ov001_02165880.unknown_24_);
    return 1;
}
