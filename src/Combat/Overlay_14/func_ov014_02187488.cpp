#include <globaldefs.h>

struct BufferField8_02097418;
struct Field4Low12_02097420;
extern "C" void* func_02097418(struct BufferField8_02097418* obj);
extern "C" int func_02097420(struct Field4Low12_02097420* obj);

struct ObjStruct_02187450;
struct KeyStruct_02187450;
extern "C" int* func_ov014_02187450(struct ObjStruct_02187450* obj, struct KeyStruct_02187450* key);

struct ValueLow10_02187488 {
    unsigned int low10 : 10;
};

// USA: func_ov014_02187488
extern "C" ARM void func_ov014_02187488(struct ObjStruct_02187450* obj) {
    unsigned char* base = (unsigned char*)func_02097418((struct BufferField8_02097418*)((char*)obj + 0xa4));
    unsigned short count = (unsigned short)func_02097420((struct Field4Low12_02097420*)((char*)obj + 0xa4));
    unsigned short i = 0;
    while (i < count) {
        unsigned char* entry = base + i * 0x20;
        int* v = func_ov014_02187450(obj, (struct KeyStruct_02187450*)entry);
        if (v != 0) {
            if (((struct ValueLow10_02187488*)v)->low10) {
                entry[0x13] |= 2;
            }
        }
        i++;
    }
}
