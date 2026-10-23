#include <globaldefs.h>
#include "Resource/MessageSystem.h"
#include "Resource/MessageUpdate.h"

extern "C" void func_0205eabc(void*, void*, int);
extern int data_02108760;
extern int data_02107820;

// USA: func_02045688
ARM void MessageSystem::func_02045688() {
    if (b19b3 && b19b2) {
        func_0205eabc(&data_02108760, &data_02107820, 0);
        b19b3 = 0;
    }
}
