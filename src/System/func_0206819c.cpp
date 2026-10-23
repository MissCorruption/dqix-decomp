#include <globaldefs.h>

#include "std_library_functions.h"

struct Entry0204254c {
    int val;
    char pad4;
    signed char field5 : 6;
    signed char unused6 : 1;
    signed char uppercase : 1;
    char pad6[2];
};

extern "C" Entry0204254c *func_0204254c(int key, int tableIdx);
extern "C" void func_02067f5c(signed char *text, int count);

// USA: func_0206819c
extern "C" ARM void func_0206819c(const char *source, char *destination, int tableIndex) {
    if (source == NULL) return;
    sprintf(destination, source);
    if (*source == 0) return;
    Entry0204254c *entry = func_0204254c(reinterpret_cast<int>(source), tableIndex);
    if (entry == NULL || !entry->uppercase) return;
    func_02067f5c(reinterpret_cast<signed char *>(destination), entry->field5);
}
