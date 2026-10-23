#include <globaldefs.h>
#include <Graphics/Vector.h>

static inline fix32_t inline_02061c04_5(fix32_t arg0, fix32_t arg1) {
    long long var0 = (long long)arg0 * arg1;
    return (fix32_t)((var0 + 0x800) >> 12);
}

// USA: func_ov005_021538fc
extern "C" ARM void func_ov005_021538fc(void* arg0, fix32_t* arg1, fix32_t* arg2, fix32_t arg3, fix32_t arg4) {
    fix32_t var0 = *arg1 - *arg2;
    if (fix32abs(var0) < arg4) {
        *arg2 = *arg1;
        return;
    }
    *arg2 += inline_02061c04_5(var0, arg3);
}
