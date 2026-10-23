#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201c1c8;
struct Struct_0209cb74;
extern "C" void func_0209ccec(struct Struct_0209cb74*, int);
extern int data_02109be0;

// USA: func_0209cb74
extern "C" ARM int func_0209cb74(struct Struct_0201c1c8* arg0) {
    func_0209ccec((struct Struct_0209cb74*)&data_02109be0, ((Script::Parameter*)arg0)->ToInt());
    return 1;
}
