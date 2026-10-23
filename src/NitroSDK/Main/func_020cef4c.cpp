#include <globaldefs.h>

struct ListHeadCEE68;
struct NodeCEE68;
extern "C" ARM void func_020cee68(struct ListHeadCEE68*, struct NodeCEE68*);

extern int data_02111800;

// USA: func_020cef4c
extern "C" ARM void func_020cef4c(struct NodeCEE68* node) {
    func_020cee68((struct ListHeadCEE68*)&data_02111800, node);
}
