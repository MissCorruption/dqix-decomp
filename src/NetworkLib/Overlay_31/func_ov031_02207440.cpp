#include <globaldefs.h>
#include "NitroSDK/Memory.h"

struct HostEnt02207440 {
    char* name;
    char** aliases;
    short addrType;
    short length;
    char** addrList;
};

extern "C" int func_ov031_02206e0c(const char* name);
int CopyStringBounded020d2f28(char* dst, const char* src, int n);

unsigned int data_ov031_0224e234;
void* data_ov031_0224e238;
void* data_ov031_0224e248;
void* data_ov031_0224e244;
void* data_ov031_0224e240;
void* data_ov031_0224e23c;
char* data_ov031_0224e24c[2];
HostEnt02207440 data_ov031_0224e254;
char data_ov031_0224e264[0x10];
extern char data_ov031_0224e2ac[];

// USA: func_ov031_02207440
extern "C" ARM HostEnt02207440* func_ov031_02207440(const char* name) {
    unsigned int addr = func_ov031_02206e0c(name);
    if (addr == 0) return 0;
    VectorizedMemset(data_ov031_0224e2ac, 0, 0x101);
    CopyStringBounded020d2f28(data_ov031_0224e2ac, name, 0x101);
    data_ov031_0224e254.name = data_ov031_0224e2ac;
    data_ov031_0224e254.aliases = 0;
    data_ov031_0224e254.addrType = 2;
    data_ov031_0224e254.length = 4;
    data_ov031_0224e254.addrList = data_ov031_0224e24c;
    data_ov031_0224e24c[0] = (char*)&data_ov031_0224e234;
    data_ov031_0224e24c[1] = 0;
    data_ov031_0224e234 = ((addr >> 24) & 0xff) | ((addr >> 8) & 0xff00) | ((addr << 8) & 0xff0000) | ((addr << 24) & 0xff000000);
    return &data_ov031_0224e254;
}
