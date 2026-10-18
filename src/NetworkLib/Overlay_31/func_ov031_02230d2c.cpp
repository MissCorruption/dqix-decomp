#include <globaldefs.h>

struct PairCounters { unsigned char pad[4]; unsigned char counters[4]; };
struct CounterContext { unsigned char selected; unsigned char pad[7]; PairCounters* work; };
extern CounterContext data_ov031_02290ca0;
struct CounterEntries { unsigned char entries[4]; };
extern CounterEntries data_ov031_02248f5c;

// USA: func_ov031_02230d2c
extern "C" ARM void func_ov031_02230d2c() {
    CounterEntries entries = data_ov031_02248f5c;
    unsigned char selected = data_ov031_02290ca0.selected;
    int index = 0;
    unsigned char* entry = entries.entries;
    do {
        if (selected == *entry) {
            data_ov031_02290ca0.work->counters[index] = 20;
            if (index & 1) {
                data_ov031_02290ca0.work->counters[index - 1] = 0;
                return;
            } else {
                data_ov031_02290ca0.work->counters[index + 1] = 0;
                return;
            }
        }
        index++;
        entry++;
    } while (index < 4);
}
