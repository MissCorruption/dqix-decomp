#include <globaldefs.h>

struct Struct020709c8;
extern "C" int func_020709c8(struct Struct020709c8* p);

struct Element02070e60;
struct Container02070e60;
typedef int (*CompareCallback02070e60)(struct Element02070e60*);
extern "C" struct Element02070e60* func_02070e60(struct Container02070e60* container, int key, CompareCallback02070e60 compare);

// USA: func_02070fd0
extern "C" ARM struct Element02070e60* func_02070fd0(struct Container02070e60* container, int key) {
    return func_02070e60(container, key, (CompareCallback02070e60)func_020709c8);
}
