#include <globaldefs.h>


extern int data_ov031_0224e6e0;

// USA: func_ov031_0221d060
extern "C" THUMB void func_ov031_0221d060(int arg0) {
    *(int*)((char*)&data_ov031_0224e6e0 + 0x10) = arg0;
}
