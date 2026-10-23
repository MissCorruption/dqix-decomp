#include <globaldefs.h>

#include "Combat/Main/MessageSlotTable.h"

// USA: func_020dd9b4
extern "C" ARM void func_020dd9b4(Struct_020dd7ac *arg0, unsigned int arg1, void *arg2, void *arg3) {
    if (arg2 == 0 || arg3 == 0) {
        return;
    }
    if (arg1 >= 12) {
        return;
    }
    switch (arg1) {
        case 0:
            *(unsigned short *) arg2  = arg0->unknown_3c_;
            *(unsigned short *) arg3 = arg0->unknown_3e_;
            return;
        case 1:
            *(unsigned short *) arg2  = arg0->unknown_40_;
            *(unsigned short *) arg3 = arg0->unknown_42_;
            return;
        case 2:
            *(int *) arg2  = arg0->unknown_44_;
            *(int *) arg3 = arg0->unknown_48_;
            return;
        case 3:
            *(int *) arg2  = arg0->unknown_4c_;
            *(int *) arg3 = arg0->unknown_50_;
            return;
        case 4:
            *(int *) arg2  = arg0->unknown_54_;
            *(int *) arg3 = arg0->unknown_58_;
            return;
        case 5:
            *(int *) arg2  = arg0->unknown_5c_;
            *(int *) arg3 = arg0->unknown_60_;
            return;
        case 6:
            *(unsigned short *) arg2  = arg0->unknown_64_;
            *(unsigned short *) arg3 = arg0->unknown_66_;
            return;
        case 7:
            *(unsigned short *) arg2  = arg0->unknown_68_;
            *(unsigned short *) arg3 = arg0->unknown_6a_;
            return;
        case 8:
            *(unsigned short *) arg2  = arg0->unknown_6c_;
            *(unsigned short *) arg3 = arg0->unknown_6e_;
            return;
        case 9:
            *(unsigned short *) arg2  = arg0->unknown_70_;
            *(unsigned short *) arg3 = arg0->unknown_72_;
            return;
        case 10:
            *(unsigned short *) arg2  = arg0->unknown_74_;
            *(unsigned short *) arg3 = arg0->unknown_76_;
            return;
        case 11:
            *(unsigned short *) arg2  = arg0->unknown_78_;
            *(unsigned short *) arg3 = arg0->unknown_7a_;
            return;
    }
}
