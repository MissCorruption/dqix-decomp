#include <globaldefs.h>
#include "Resource/MessageUpdate.h"

extern "C" void func_02043124(char* obj);

// USA: func_02043204
extern "C" ARM void func_02043204(char* obj) {
    MessageSystem* window = (MessageSystem*)obj;
    func_02043040(window);
    func_02043124(obj);
    func_020430b0(window);
}
