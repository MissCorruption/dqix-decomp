#include <globaldefs.h>

struct Struct_02042b98_3;
extern "C" void func_02042c24(struct Struct_02042b98_3* arg0, int arg1, int arg2);

struct Struct_02042b98;
extern "C" void func_02042c3c(struct Struct_02042b98* arg0, int arg1, int arg2);

struct Struct_02042b98_2;
extern "C" void func_02042c54(struct Struct_02042b98_2* arg0, int arg1, int arg2, int arg3, int arg4);

#if defined(jpn)
#define func_02042b98 func_02043270
enum { Enum_02042b98_2448 = 0x860, Enum_02042b98_6624 = 0x1804, Enum_02042b98_6232 = 0x1728, Enum_02042b98_6236 = 0x172c, Enum_02042b98_6216 = 0x1718 };
#else
enum { Enum_02042b98_2448 = 0x990, Enum_02042b98_6624 = 0x19e0, Enum_02042b98_6232 = 0x1858, Enum_02042b98_6236 = 0x185c, Enum_02042b98_6216 = 0x1848 };
#endif

// USA: func_02042b98
extern "C" ARM void func_02042b98(void* arg0, int arg1, int arg2, int arg3, int arg4) {
    char* var0 = (char*)arg0;
    *(int*)(var0 + Enum_02042b98_2448) = arg1 + (arg3 >> 1);
    func_02042c24((struct Struct_02042b98_3*)(var0 + Enum_02042b98_6624), (short)arg1, (short)arg2);
    func_02042c3c((struct Struct_02042b98*)(var0 + Enum_02042b98_6624), (short)arg3, (short)arg4);
    *(int*)(var0 + Enum_02042b98_6232) = arg1;
    *(int*)(var0 + Enum_02042b98_6236) = arg2 + 8;
    func_02042c54((struct Struct_02042b98_2*)(var0 + Enum_02042b98_6216), arg1, arg2 + 8, arg1 + arg3, arg2 + arg4);
}
