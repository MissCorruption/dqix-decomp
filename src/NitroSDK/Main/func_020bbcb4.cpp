#include <globaldefs.h>

struct EntryList020bbc68;
struct Ring020bbc78;
struct Job020bbc38 { char pad[0xc]; int size; };

extern "C" Job020bbc38* func_020bbc68(EntryList020bbc68* list);
extern "C" int func_020bbc78(Ring020bbc78* ring);
extern "C" int func_020bbc38(Job020bbc38* job);

extern char data_0210cf94[];

// USA: func_020bbcb4
extern "C" ARM void func_020bbcb4(void) {
    char* q = data_0210cf94;
    Job020bbc38* job = func_020bbc68((EntryList020bbc68*)q);
    if (!func_020bbc78((Ring020bbc78*)q)) return;
    do {
        func_020bbc38(job);
        *(int*)(q + 0x10) -= job->size;
        job = func_020bbc68((EntryList020bbc68*)q);
    } while (func_020bbc78((Ring020bbc78*)q));
}
