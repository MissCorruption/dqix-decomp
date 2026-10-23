#include <globaldefs.h>
#include "World/ZoneChest.h"

extern "C" void* func_02012fe4(void);
struct Entry_02028bd0;
extern "C" struct Entry_02028bd0* func_02027ca4(void);
extern "C" struct Entry_02028bd0* func_02028bd0(struct Entry_02028bd0* base, int key);

struct Obj02028c64;
extern "C" void func_02028c64(struct Obj02028c64* obj, int index);

struct Rec021d19b0 {
    unsigned char pad0[4];
    unsigned short field4;
    unsigned short field6;
    unsigned int field8;
};

// USA: func_ov017_021d19b0
extern "C" ARM void func_ov017_021d19b0(int unused, struct Rec021d19b0* rec) {
    Zone3D* zone = (Zone3D*)func_02012fe4();
    if (rec->field4 == zone->currentZoneID_) {
        ZoneFeatures::Opcode6aEntry* e = func_02018c20(zone, rec->field6);
        if (e == NULL)
            return;
        func_02018300(zone, e, rec->field8, 0, 0);
    } else {
        struct Entry_02028bd0* table = func_02027ca4();
        struct Entry_02028bd0* entry = func_02028bd0(table, rec->field4);
        if (entry == NULL)
            return;
        func_02028c64((struct Obj02028c64*)entry, rec->field6);
    }
}
