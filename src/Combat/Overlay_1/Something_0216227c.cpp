#include <globaldefs.h>
#include "Resource/Brightness.h"

extern "C" void func_ov028_021d9714(void);
void PopStack1AndTrigger_020a1f4c(int flag);

// USA: func_ov001_0216227c  (semantic: Something_0216227c)
extern "C" ARM int func_ov001_0216227c(void) {
    ClearFlags00(GetGameResources(), 0x1000);
    func_ov028_021d9714();
    PopStack1AndTrigger_020a1f4c(1);
    return 1;
}
