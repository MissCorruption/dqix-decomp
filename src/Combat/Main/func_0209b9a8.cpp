#include <globaldefs.h>

struct StoreWordToRowArrayRow { char pad[0x34]; unsigned int arr[6]; };

// USA: func_0209b9a8
extern "C" ARM void func_0209b9a8(struct StoreWordToRowArrayRow *base, int i, int j, unsigned int *src) {
    base[i].arr[j] = *src;
}
