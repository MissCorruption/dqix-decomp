#include <globaldefs.h>
#include "Input/Input.h"

void SetByte0x6102012ba8(unsigned char* obj, unsigned char val);

struct Struct02153628_020e11a4 { unsigned int field0; unsigned int field4; unsigned int field8; };
extern struct Struct02153628_020e11a4 data_02153628;
extern unsigned char data_02114e54;

// USA: func_020e11a4
ARM void ResetElapsedState020e11a4(void) {
    data_02153628.field4 = 0;
    data_02153628.field8 = 0;
    data_02153628.field0 = 0;
    g_keyManager.SetInputEnabled(true);
    SetByte0x6102012ba8(&data_02114e54, 1);
}
