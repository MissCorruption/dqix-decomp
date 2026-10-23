#include <globaldefs.h>

#if defined(jpn)
extern char data_02110f8c;
#else
extern char data_021112ec;
#endif

// USA: func_020c75a4
extern "C" ARM int func_020c75a4(void) {
#if defined(jpn)
    return *(int*)(&data_02110f8c);
#else
    return *(int*)(&data_021112ec);
#endif
}
