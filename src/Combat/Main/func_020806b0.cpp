#include <globaldefs.h>

struct Entry0207f6ac;
struct List0207f6ac { Entry0207f6ac* entries; short count; };
struct MenuItems020806b0 {
    void* table;
    List0207f6ac items;
};
extern "C" void func_0207f7ac(struct List0207f6ac* list, int id, int mask);

// USA: func_020806b0
extern "C" ARM void func_020806b0(void* obj, int id) {
    MenuItems020806b0* menu = (MenuItems020806b0*)obj;
    func_0207f7ac(&menu->items, id, 2);
}
