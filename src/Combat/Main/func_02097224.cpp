#include <globaldefs.h>
extern "C" int func_02096f78(unsigned char*);

struct BinarySearch020971a8Node;
struct BinarySearch020971a8Container;
typedef int (*BinarySearch020971a8Cmp)(struct BinarySearch020971a8Node*);
extern "C" struct BinarySearch020971a8Node* func_020971a8(struct BinarySearch020971a8Container*, int, BinarySearch020971a8Cmp);

// USA: func_02097224
extern "C" ARM struct BinarySearch020971a8Node* func_02097224(struct BinarySearch020971a8Container* c, int key) {
    return func_020971a8(c, key, (BinarySearch020971a8Cmp)func_02096f78);
}
