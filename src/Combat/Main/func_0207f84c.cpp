#include <globaldefs.h>
#include "Combat/MenuNodeChain.h"

struct Struct0207f510;
struct ArrayHeader0207ef60;
extern "C" void func_0207f510(Struct0207f510*);
extern "C" void func_0207ef60(ArrayHeader0207ef60*);

// USA: func_0207f84c
extern "C" ARM void func_0207f84c(Manager0207f7f0* self) {
    self->field0 = 0;
    func_0207f510((Struct0207f510*)self->sub4);
    func_0207ef60((ArrayHeader0207ef60*)self->arrC);
    self->field14 = 0;
    self->field18 = 0;
#if defined(jpn)
    self->field1c = -1;
#else
    self->tasks[0] = self->tasks[1] = self->tasks[2] = self->field1c = -1;
#endif
    self->lists = 0;
    self->nodes = 0;
    self->field34 = 8;
    self->field36 = -1;
    self->mode = 0;
    self->count = 0;
    self->active = 0;
    self->field3b = 0x10;
    self->field3c = 0x10;
}
