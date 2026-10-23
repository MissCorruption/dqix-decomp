#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201c1c8;
struct Struct_0209cb94_2;
struct Struct_0209cb94;
extern "C" void func_0209ccc8(struct Struct_0209cb94*, struct Struct_0209cb94_2*);
extern int data_02109be0;

// USA: func_0209cb94
extern "C" ARM int func_0209cb94(struct Struct_0201c1c8* arg0) {
    int var0 = ((Script::Parameter*)arg0)->ToInt();
    func_0209ccc8((struct Struct_0209cb94*)&data_02109be0, (struct Struct_0209cb94_2*)&var0);
    return 1;
}
