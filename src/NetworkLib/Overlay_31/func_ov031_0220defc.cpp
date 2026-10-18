#include <globaldefs.h>

struct BattleCtx020d5340 { void* data; unsigned short size; unsigned short mask; };
struct BattleEvent0220defc {
    short type; unsigned short state; int field_0x4;
    unsigned short kind, mask, field_0xc;
    unsigned short count;
    int entries[16]; unsigned short lengths[16];
};
struct BattleState0220defc {
    unsigned char padding[0x2260]; int state; unsigned int flags;
    unsigned char padding_0x2268[0x18]; short field_0x2280;
    unsigned short padding_0x2282; unsigned int counter;
    BattleCtx020d5340 context;
};
extern BattleState0220defc* data_ov031_0224e53c;
extern "C" void func_ov031_0220da1c(int);
extern "C" int func_ov031_0220d984(int, int, int, int);
void InvalidateDataCacheRange(const void*, unsigned int);
extern "C" void func_ov031_0220ec5c(int, unsigned short);
void DispatchEvent_0220d9c8(short, short, int, int, int);
extern "C" unsigned int func_ov031_0220db38(unsigned int);
unsigned int CountLeadingZeros_0220db64(unsigned int);
extern "C" int func_ov031_0220d8f4(unsigned short);
int SubmitBattleContextEntry020d5340(int, BattleCtx020d5340*);
int IssueBattleCommandSlot11_020d5490(int);
extern "C" int func_ov031_0220db6c();
extern "C" void func_ov031_0220e1e0(BattleEvent0220defc*);

// USA: func_ov031_0220defc
extern "C" ARM void func_ov031_0220defc(BattleEvent0220defc* event) {
    int result = 20;
    switch (event->state) {
    case 0:
        if (data_ov031_0224e53c->state == 5) {
            func_ov031_0220da1c(6);
            func_ov031_0220d984(0, 0, 0, 0x704);
        }
        switch (data_ov031_0224e53c->state) {
        case 6:
            data_ov031_0224e53c->field_0x2280 = 7;
            if (event->kind == 5) {
                InvalidateDataCacheRange(data_ov031_0224e53c->context.data,
                                        data_ov031_0224e53c->context.size);
                int index = 0;
                if ((int)event->count > 0) {
                    do {
                        func_ov031_0220ec5c(event->entries[index], event->lengths[index]);
                        DispatchEvent_0220d9c8(7, 0, event->entries[index], (int)event, 0x71a);
                        ++index;
                    } while (index < event->count);
                }
            }
            {
                unsigned int flags = data_ov031_0224e53c->flags;
                if ((flags & 0xc00000) == 0xc00000) {
                    unsigned int interval = func_ov031_0220db38(flags & 0x3ffe);
                    if (interval != 0) {
                        unsigned int counter = data_ov031_0224e53c->counter;
                        if (counter % interval == 0)
                            DispatchEvent_0220d9c8(8, 0, counter, 0, 0x728);
                    }
                }
                int shift = func_ov031_0220d8f4(32 - CountLeadingZeros_0220db64(event->mask));
                data_ov031_0224e53c->context.mask = (1 << shift) >> 1;
            }
            InvalidateDataCacheRange(data_ov031_0224e53c->context.data,
                                    data_ov031_0224e53c->context.size);
            ++data_ov031_0224e53c->counter;
            result = SubmitBattleContextEntry020d5340((int)func_ov031_0220defc, &data_ov031_0224e53c->context);
            break;
        case 7:
            result = IssueBattleCommandSlot11_020d5490((int)func_ov031_0220e1e0);
            break;
        case 13:
            func_ov031_0220db6c();
            return;
        }
        switch (result) {
        case 2:
            return;
        case 8:
            func_ov031_0220da1c(12);
            func_ov031_0220d984(1, 0, 0, 0x753);
            return;
        case 3:
        default:
            func_ov031_0220da1c(11);
            func_ov031_0220d984(7, 0, 0, 0x75c);
            return;
        }
        break;
    case 1:
        func_ov031_0220db6c();
        return;
    case 2:
    case 3:
    case 4:
    default:
        func_ov031_0220da1c(11);
        func_ov031_0220d984(7, 0, 0, 0x76d);
        return;
    }
}
