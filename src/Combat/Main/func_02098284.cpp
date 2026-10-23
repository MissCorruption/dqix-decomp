#include <globaldefs.h>

extern int data_020e8de4[];

// USA: func_02098284
extern "C" ARM int func_02098284(int arg0, int arg1) {
    return data_020e8de4[arg1 % 100];
}
