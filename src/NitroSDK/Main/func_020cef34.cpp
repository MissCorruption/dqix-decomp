#include <globaldefs.h>

struct ListHeadCEE54;
struct NodeCEE54;
extern "C" ARM void func_020cee54(struct ListHeadCEE54*, struct NodeCEE54*);

extern int data_02111804;

// USA: func_020cef34
extern "C" ARM void func_020cef34(struct NodeCEE54* node) {
    func_020cee54((struct ListHeadCEE54*)&data_02111804, node);
}
