#include <globaldefs.h>
int SetFlag0x8eIfBitTestFails_02023a9c(char*, int);

// USA: func_02026a78
ARM int CountMatchingEntries02026a78(char* obj) {
#if defined(jpn)
    enum { regionalOffset0 = 0x6d4 };
#else
    enum { regionalOffset0 = 0x780 };
#endif
    unsigned char count = 0;
    int i;
    for (i = 0; i < *(unsigned char*)(obj + regionalOffset0); i++) {
        if (SetFlag0x8eIfBitTestFails_02023a9c((char*)(obj), (int)(i))) {
            count++;
        }
    }
    return count;
}
