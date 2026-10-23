#include <globaldefs.h>

struct Element_0203f354 {
    char data[0x14];
};

struct List_0203f354 {
    char unk[6];
    unsigned short count;
    struct Element_0203f354* elements;
};

// USA: func_0203f354
extern "C" ARM struct Element_0203f354* func_0203f354(struct List_0203f354* list, unsigned int index) {
    if (list->count <= index) {
        return 0;
    }
    return &list->elements[index];
}
