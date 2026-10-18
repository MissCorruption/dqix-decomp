#include <globaldefs.h>

struct Struct022412e8;
int GetField24_022412e8(Struct022412e8*, int*);
extern "C" int func_ov031_0223fb8c(const char*, int);

struct ParsedIntegerOutput {
    unsigned char field_0x0[0x10];
    int* value;
};

// USA: func_ov031_0223f6ec
extern "C" ARM int func_ov031_0223f6ec(Struct022412e8* input, ParsedIntegerOutput* output) {
    int address;
    int length = GetField24_022412e8(input, &address);
    if (length >= 0) {
        *output->value = func_ov031_0223fb8c((const char*)address, length);
        return *output->value >= 0;
    }
    return 0;
}
