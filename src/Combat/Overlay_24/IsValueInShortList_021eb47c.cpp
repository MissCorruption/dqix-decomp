#include <globaldefs.h>
struct Act_021eb5d0;

extern short data_ov024_021fe7aa[];

// USA: func_ov024_021eb47c
ARM int IsValueInShortList_021eb47c(Act_021eb5d0* a0, int value) {
    short* p = data_ov024_021fe7aa;
    while (*p != -1) {
        if (*p == value) return 1;
        p++;
    }
    return 0;
}
