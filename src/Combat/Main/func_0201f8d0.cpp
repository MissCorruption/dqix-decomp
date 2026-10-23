#include <globaldefs.h>
#include "Resource/Script.h"
#include "Combat/CombatScriptContext.h"

#if defined(jpn)
#define func_02026b3c func_020264a0
#endif

struct Entry0201f8d0 { Script::Parameter key; Script::Parameter value; };
struct Obj02026b0c;
struct Obj02026b3c;
#if defined(jpn)
extern "C" void func_020264a0(struct Obj02026b3c* obj, unsigned int index, unsigned short id, const char* name);
#endif

extern "C" void func_02026644(char* obj);
extern "C" void func_02026b0c(struct Obj02026b0c* p, int n);
#if !defined(jpn)
extern "C" void func_02026b3c(Obj02026b3c*, unsigned int, unsigned short, const char*);
#endif

// USA: func_0201f8d0
extern "C" ARM int func_0201f8d0(struct Entry0201f8d0* list, int n) {
    int count = n / 2;
    void* obj = data_020fdc4c.currentObject;
    func_02026644((char*)obj);
    obj = data_020fdc4c.currentObject;
    func_02026b0c((struct Obj02026b0c*)obj, count & 0xff);
    struct Entry0201f8d0* p = list;
    for (int i = 0; i < count; i++) {
        int id = p->key.ToInt();
        const Script::Parameter* val = &p->value;
        p++;
        const char* name = val->ToString();
        obj = data_020fdc4c.currentObject;
        func_02026b3c((struct Obj02026b3c*)obj, (unsigned char)i, id, name);
    }
    return 1;
}
