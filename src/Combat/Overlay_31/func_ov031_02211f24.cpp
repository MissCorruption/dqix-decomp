#include <globaldefs.h>

struct Entry02211f24
{
    int field0;
    unsigned short state;
    unsigned short field6;
    unsigned short field8;
    unsigned short fielda;
    unsigned char notified;
    char padd[3];
    unsigned int phase;
    unsigned char payload[0x50];
};
struct State02211f24
{
    int error;
    Entry02211f24* entry;
};
extern State02211f24 data_ov031_0224e5b4;
extern "C" void func_ov031_02211e08();
extern "C" void _Z41SetGlobal0224e5a4IfNotNine_ov031_02211b08ii(int, int);
extern "C" int _Z23ClassifyField9_02212fb8v();
extern "C" int _Z32GetGlobal022496fcField4_02207cd0v();
extern "C" void func_ov031_022120f8();
extern "C" void func_ov031_02211bd4(Entry02211f24*, unsigned short, int, int);
extern "C" int func_ov031_022162f0(void*, void*);

// USA: func_ov031_02211f24
extern "C" ARM int func_ov031_02211f24()
{
    int saved;
    int result;
    unsigned short field;
    Entry02211f24* entry;
    Entry02211f24* initial = data_ov031_0224e5b4.entry;
    if (initial == NULL) return 0;
    switch (initial->phase)
    {
    case 1: return 2;
    case 2: return 2;
    case 3:
        func_ov031_02211e08();
        _Z41SetGlobal0224e5a4IfNotNine_ov031_02211b08ii(5, data_ov031_0224e5b4.error);
        data_ov031_0224e5b4.entry->state = 7;
        data_ov031_0224e5b4.entry->phase = 4;
        return 7;
    case 4: return 7;
    case 5: return 5;
    }
    if (initial->state == 1) return initial->state;
    result = _Z23ClassifyField9_02212fb8v();
    if (result == 5)
    {
        data_ov031_0224e5b4.entry->state = 4;
        data_ov031_0224e5b4.entry->field6 = 1;
        data_ov031_0224e5b4.entry->notified = 1;
        return 4;
    }
    if (result < 0)
    {
        if (result >= -10)
        {
            data_ov031_0224e5b4.entry->notified = 1;
            _Z41SetGlobal0224e5a4IfNotNine_ov031_02211b08ii(9, -50200 + 1);
            data_ov031_0224e5b4.entry->state = 8;
            return 8;
        }
        entry = data_ov031_0224e5b4.entry;
        if (!entry->notified)
        {
            field = entry->field8;
            saved = _Z32GetGlobal022496fcField4_02207cd0v();
            data_ov031_0224e5b4.error = result;
            func_ov031_022120f8();
            func_ov031_02211bd4(entry, field, 1, (unsigned short)saved);
            func_ov031_022162f0(&data_ov031_0224e5b4.entry->payload, reinterpret_cast<void*>(1));
            enum ConnectionState { ConnectionPending = 2 };
            ConnectionState pending = ConnectionPending;
            data_ov031_0224e5b4.entry->phase = 1;
            data_ov031_0224e5b4.entry->field0 = 0;
            return pending;
        }
        if (data_ov031_0224e5b4.error < result)
            result = data_ov031_0224e5b4.error;
        _Z41SetGlobal0224e5a4IfNotNine_ov031_02211b08ii(5, result);
        data_ov031_0224e5b4.entry->state = 7;
        return 7;
    }
    return 2;
}
