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
enum ConnectionStatus { CONNECTION_PENDING = 2 };
extern "C" void func_ov031_02211e08();
void SetGlobal0224e5a4IfNotNine_ov031_02211b08(int, int);
int ClassifyField9_02212fb8();
int GetGlobal022496fcField4_02207cd0();
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
        SetGlobal0224e5a4IfNotNine_ov031_02211b08(5, data_ov031_0224e5b4.error);
        data_ov031_0224e5b4.entry->state = 7;
        data_ov031_0224e5b4.entry->phase = 4;
        return 7;
    case 4: return 7;
    case 5: return 5;
    }
    if (initial->state == 1) return initial->state;
    result = ClassifyField9_02212fb8();
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
            SetGlobal0224e5a4IfNotNine_ov031_02211b08(9, -50199);
            data_ov031_0224e5b4.entry->state = 8;
            return 8;
        }
        entry = data_ov031_0224e5b4.entry;
        if (!entry->notified)
        {
            field = entry->field8;
            saved = GetGlobal022496fcField4_02207cd0();
            data_ov031_0224e5b4.error = result;
            func_ov031_022120f8();
            func_ov031_02211bd4(entry, field, 1, (unsigned short)saved);
            func_ov031_022162f0(&data_ov031_0224e5b4.entry->payload, (void*)1);
            ConnectionStatus status = CONNECTION_PENDING;
            data_ov031_0224e5b4.entry->phase = 1;
            data_ov031_0224e5b4.entry->field0 = 0;
            return status;
        }
        if (data_ov031_0224e5b4.error < result)
            result = data_ov031_0224e5b4.error;
        SetGlobal0224e5a4IfNotNine_ov031_02211b08(5, result);
        data_ov031_0224e5b4.entry->state = 7;
        return 7;
    }
    return 2;
}
