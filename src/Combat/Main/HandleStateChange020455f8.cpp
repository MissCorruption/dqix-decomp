#include <globaldefs.h>
#include "Resource/MessageSystem.h"

struct Obj0205eaa0;
void DispatchWithShortB4_0205eaa0(struct Obj0205eaa0* obj, int a, int b);

extern int data_02108760;
extern int data_02107820;

// USA: func_020455f8
ARM void MessageSystem::HandleStateChange020455f8() {
    if (b19b3 == 1 || b19b2 == 0) {
        return;
    }
    switch (state) {
        case 0:
            DispatchWithShortB4_0205eaa0((struct Obj0205eaa0*)&data_02108760, 0xa, (int)&data_02107820);
            break;
        case 1:
            DispatchWithShortB4_0205eaa0((struct Obj0205eaa0*)&data_02108760, 0xc, (int)&data_02107820);
            break;
        case 2:
            DispatchWithShortB4_0205eaa0((struct Obj0205eaa0*)&data_02108760, 0xb, (int)&data_02107820);
            break;
    }
    b19b3 = 1;
}
