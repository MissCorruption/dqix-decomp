#include <globaldefs.h>
#include "NitroSDK/Memory.h"
#include "NitroSDK/ProcessorContext.h"
#include "std_library_functions.h"

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

struct RuntimeA518 {
    void* allocator;
    void* allocatorContext;
    unsigned char service[0x1b38];
    ProcessorContext context;
    unsigned char padding[0x1c1c - 0x1c00];
    void* work;
};
struct ServiceOptionsA518 {
    const char* name;
    int field4;
    unsigned int bufferSize;
    void* allocator;
    void* allocatorContext;
    int differentName;
    int timeout;
};
extern RuntimeA518* data_ov031_0224e69c;
extern const char* data_ov031_02249b54;
extern const char data_ov031_0224a264[];
extern const char data_ov031_0224a284[];
extern const char data_ov031_0224a28c[];
extern const char data_ov031_0224a294[];
extern "C" void func_020c9be0();
extern "C" int func_ov031_02217c00(void*, ServiceOptionsA518*);
extern "C" int func_ov031_022178b4(void*, void*, int);
extern "C" void func_ov031_022183b4(void*);
extern "C" int func_ov031_02218604(void*, const char*, const void*, int);
extern "C" int func_ov031_02217d1c(void*);
extern "C" void func_ov031_02217db4(void*, int);
extern "C" int func_ov031_022175dc(void*);
bool IsContextInactive(ProcessorContext*);
extern "C" void func_ov031_02211b08(int, int);

// USA: func_ov031_0221a518
extern "C" ARM int func_ov031_0221a518(const void* value, void* work) {
    data_ov031_0224e69c->work = work;
    VectorizedMemset(work, 0, 0x174);
    if (data_ov031_0224e69c->context.uniqueID && !IsContextInactive(&data_ov031_0224e69c->context)) func_020c9be0();
    ServiceOptionsA518 options;
    RuntimeA518* runtime = data_ov031_0224e69c;
    options.name = data_ov031_02249b54;
    options.field4 = 0;
    options.bufferSize = 0x1000;
    options.allocator = runtime->allocator;
    options.allocatorContext = runtime->allocatorContext;
    if (strcmp(options.name, data_ov031_0224a264) != 0) options.differentName = 1;
    else options.differentName = 0;
    options.timeout = 20000;
    if (func_ov031_02217c00(runtime->service, &options)) {
        func_ov031_02211b08(9, -24100);
        return 0;
    }
    unsigned char buffer[0x94];
    if (!func_ov031_022175dc(buffer) || !func_ov031_022178b4(data_ov031_0224e69c->service, buffer, 0)) {
        func_ov031_022183b4(data_ov031_0224e69c->service);
        func_ov031_02211b08(9, -24100);
        return 0;
    }
    if (func_ov031_02218604(data_ov031_0224e69c->service, data_ov031_0224a284, data_ov031_0224a28c, 6) ||
        func_ov031_02218604(data_ov031_0224e69c->service, data_ov031_0224a294, value, 4)) {
        func_ov031_022183b4(data_ov031_0224e69c->service);
        func_ov031_02211b08(9, -24100);
        return 0;
    }
    if (func_ov031_02217d1c(data_ov031_0224e69c->service)) {
        func_ov031_022183b4(data_ov031_0224e69c->service);
        func_ov031_02211b08(9, -24100);
        return 0;
    }
    int priority = GetContextPriority(data_02111304.activeContext);
    func_ov031_02217db4(data_ov031_0224e69c->service, priority - 1);
    if (data_ov031_0224e69c->context.uniqueID) return 1;
    func_ov031_022183b4(data_ov031_0224e69c->service);
    func_ov031_02211b08(9, -24100);
    return 0;
}
