#include <globaldefs.h>

struct BattleCommandArgument {
    int type;
    union {
        int integer;
        float real;
        BattleCommandArgument* reference;
    } value;
};

extern "C" void* func_0209dccc();
extern "C" int func_ov017_021d60f4(void*);
extern "C" void func_0209ebe4(void*, int, int);

// USA: func_0209d010
extern "C" ARM int func_0209d010(void* argumentData) {
    void* manager = func_0209dccc();
    if (manager == NULL) return 0;
    BattleCommandArgument* arguments = (BattleCommandArgument*)argumentData;
    int refineExisting = func_ov017_021d60f4(&arguments[0]);
    int filterParameter = func_ov017_021d60f4(&arguments[1]);
    func_0209ebe4(manager, refineExisting, filterParameter);
    return 1;
}
