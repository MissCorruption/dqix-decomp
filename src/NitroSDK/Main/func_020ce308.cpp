#include <globaldefs.h>

#define COMMAND_SYNC 0x60
#define COMMAND_UTILITY 0x61
#define COMMAND_SLEEP_START 0x62
#define COMMAND_SLEEP_END 0x63

#define RESULT_SEND_FAILED 1
#define RESULT_ERROR 2

#define PM_SUCCESS 0

typedef void (*Type_01ff8300_3)(unsigned long result, void* arg);

struct Struct_020ce308
{
    int unknown_0_;
    Type_01ff8300_3 unknown_4_;
    void* unknown_8_;
    void* unknown_c_;
};

struct Struct_021117ec_5
{
    char unknown_0_[0xc];
    volatile int unknown_c_;
    char unknown_10_[0xc];
    Struct_020ce308 unknown_1c_;
};

extern Struct_021117ec_5 data_021117ec;

extern "C" void func_020ce240(int arg0);

// USA: func_020ce308
extern "C" ARM void func_020ce308(unsigned int arg0, unsigned int arg1, unsigned int arg2)
{
    const unsigned short var0 = (arg1 & 0x7f00) >> 8;
    unsigned short var1 = arg1 & 0xff;
    if (arg2)
    {
        switch (var0)
        {
        case COMMAND_UTILITY:
        case COMMAND_SLEEP_START:
            var1 = RESULT_SEND_FAILED;
            break;
        default:
            var1 = RESULT_ERROR;
            break;
        }
        func_020ce240(var1);
        return;
    }
    switch (var0)
    {
    case COMMAND_UTILITY:
        if (data_021117ec.unknown_1c_.unknown_c_)
            *(unsigned short*)data_021117ec.unknown_1c_.unknown_c_ = var1;
        var1 = PM_SUCCESS;
        break;
    case COMMAND_SYNC:
        var1 = PM_SUCCESS;
        break;
    case COMMAND_SLEEP_START:
        break;
    case COMMAND_SLEEP_END:
        data_021117ec.unknown_c_ = true;
        break;
    }
    func_020ce240(var1);
}
