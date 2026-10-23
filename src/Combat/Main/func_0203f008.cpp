#include <globaldefs.h>

struct List02040468;
struct Element02040468;
extern "C" struct Element02040468* func_02040468(struct List02040468* list, int index);

struct Actor0203f008 {
    struct List02040468* list;
    char pad4[0x24];
    short index;
};

// USA: func_0203f008
extern "C" ARM struct Element02040468* func_0203f008(struct Actor0203f008* actor) {
    if (actor->list == NULL) return NULL;
    return func_02040468(actor->list, actor->index);
}
