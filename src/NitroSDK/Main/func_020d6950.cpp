#include <globaldefs.h>

#include "NitroSDK/Cache.h"

extern "C" int func_020d4204(void);
extern "C" void func_020d404c(int arg0, int arg1);
extern "C" int func_020d40bc(int, int, int, int, int);


// USA: func_020d6950
extern "C" ARM int func_020d6950(int arg0, int arg1, int arg2, int arg3) {
    int var0 = func_020d4204();
    if (var0 != 0) {
        return var0;
    }
    if ((unsigned int)arg1 > 3) {
        return 6;
    }
    if (arg1 != 0) {
        if (arg3 == 0) {
            return 6;
        }
        CleanCacheRange((const void*)arg3, 0x50);
    }
    func_020d404c(0x27, arg0);
    var0 = func_020d40bc(0x27, 3, arg1, arg3, arg2);
    if (var0 == 0) {
        var0 = 2;
    }
    return var0;
}
