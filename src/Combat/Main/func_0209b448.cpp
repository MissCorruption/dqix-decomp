#include <globaldefs.h>
#include "Util/Random.h"
#include "std_library_functions.h"

#if defined(jpn)
#define data_020e8e74 data_020e8f88
#endif

struct LeaderSub0209b448 {
    unsigned int key : 12;
    unsigned int countMin : 3;
    unsigned int countMax : 3;
    unsigned int weight1 : 3;
    unsigned int weight2 : 3;
    unsigned int weight3 : 3;
    unsigned int rest : 5;
    int unk4;
};

struct Member0209b448 {
    unsigned int id : 12;
    unsigned int weight : 3;
    unsigned int countMin : 3;
    unsigned int countMax : 3;
    unsigned int rest : 11;
};

struct SlotEntry0209b944 {
    unsigned short id;
    unsigned short pad2;
    struct LeaderSub0209b448 subs[6];
    struct Member0209b448 members[6];
};

struct Entry0209bd94 {
    unsigned short key;
    unsigned short pad2;
    unsigned int flagsLow : 10;
    unsigned int maxCount : 3;
    unsigned int flagsHigh : 19;
    unsigned char pad8[0x18];
};

struct EntryTable0209bd94 {
    struct Entry0209bd94 entries[6];
    int count;
};

struct EncounterState0209b448 {
#if defined(jpn)
    unsigned char pad[0x5c];
#else
    unsigned char pad[0x60];
#endif
    struct EntryTable0209bd94 table;
};

struct EncounterGroup0209b448 {
    short ids[3];
    short counts[3];
};

extern "C" struct LeaderSub0209b448* func_0209b944(struct SlotEntry0209b944* entries, int index, int key, int* outIdx);
extern "C" struct Entry0209bd94* func_0209bd94(struct EntryTable0209bd94* table, int key);

extern const int data_020e8e74[6][3];

// USA: func_0209b448
extern "C" ARM void func_0209b448(struct SlotEntry0209b944* rows, int key, struct EncounterGroup0209b448* out, struct EncounterState0209b448* state) {
    int slot;
    int prev;
    int step;
    int excess;
    int maxCount;
    int sum;
    int l;
    int k;
    int j;
    int i;
    int weights;
    int pick;
    int roll;
    int kind;
    int index;
    struct Entry0209bd94* entry;
    struct Member0209b448* member;
    int range0;
    int range1;
    int range2;
    int total;
    struct LeaderSub0209b448* sub;
    struct Random* rnd;

    rnd = GetBTRandom();
    kind = 1;
    index = 0;
    sub = func_0209b944(rows, 0, key, &index);
    if (sub == NULL) {
        kind = 1;
        out->counts[0] = 1;
        out->ids[0] = 0x10;
    } else {
        weights = sub->weight1 + sub->weight2 + sub->weight3;
        roll = rand() % weights + 1;
        if (roll <= sub->weight1) {
            kind = 1;
        } else if (roll <= sub->weight1 + sub->weight2) {
            kind = 2;
        } else if (roll <= sub->weight1 + sub->weight2 + sub->weight3) {
            kind = 3;
        }
        total = 0;
        for (i = 0; i < 6; i++) {
            member = &rows[index].members[i];
            total += member->weight;
        }
        if (total == 0) {
            kind = 1;
            out->counts[0] = 1;
            out->ids[0] = 0x10;
        } else {
            pick = rand() % total + 1;
            sum = 0;
            for (j = 0; j < 6; j++) {
                member = &rows[index].members[j];
                sum += member->weight;
                if (pick <= sum) {
                    break;
                }
            }
            out->ids[0] = member->id;
            range0 = member->countMax - member->countMin;
            out->counts[0] = rand() % (range0 + 1) + member->countMin;
            if (kind != 1) {
                pick = rand() % total + 1;
                sum = 0;
                for (k = 0; k < 6; k++) {
                    member = &rows[index].members[k];
                    sum += member->weight;
                    if (pick <= sum) {
                        break;
                    }
                }
                out->ids[1] = member->id;
                range1 = member->countMax - member->countMin;
                out->counts[1] = rand() % (range1 + 1) + member->countMin;
                if (kind != 2) {
                    pick = rand() % total + 1;
                    sum = 0;
                    for (l = 0; l < 6; l++) {
                        member = &rows[index].members[l];
                        sum += member->weight;
                        if (pick <= sum) {
                            break;
                        }
                    }
                    out->ids[2] = member->id;
                    range2 = member->countMax - member->countMin;
                    out->counts[2] = rand() % (range2 + 1) + member->countMin;
                }
            }
        }
    }

    entry = func_0209bd94(&state->table, key);
    if (entry != NULL) {
        maxCount = entry->maxCount;
    } else {
        maxCount = 5;
    }
    excess = out->counts[0] + out->counts[1] + out->counts[2] - maxCount;
    if (excess > 0) {
        step = excess / 3;
        if (step == 0) {
            step = 1;
        }
        slot = 0;
        while (excess > 0) {
            prev = out->counts[slot];
            out->counts[slot] -= step;
            if (out->counts[slot] < 0) {
                out->counts[slot] = 0;
            }
            if (slot == 0 && out->counts[slot] == 0) {
                out->counts[slot] = 1;
            }
            excess -= prev - out->counts[slot];
            slot++;
            if (slot >= 3) {
                slot = 0;
            }
        }
    }

    if (kind == 2) {
        if (NextRandomMax(rnd, 2) != 0) {
            short id = out->ids[0];
            short count = out->counts[0];
            out->ids[0] = out->ids[1];
            out->counts[0] = out->counts[1];
            out->ids[1] = id;
            out->counts[1] = count;
        }
    } else if (kind == 3) {
        struct EncounterGroup0209b448 saved;
        int order = NextRandomMax(rnd, 6);
        saved = *out;
        out->ids[data_020e8e74[order][0]] = saved.ids[0];
        out->counts[data_020e8e74[order][0]] = saved.counts[0];
        out->ids[data_020e8e74[order][1]] = saved.ids[1];
        out->counts[data_020e8e74[order][1]] = saved.counts[1];
        out->ids[data_020e8e74[order][2]] = saved.ids[2];
        out->counts[data_020e8e74[order][2]] = saved.counts[2];
    }
}
