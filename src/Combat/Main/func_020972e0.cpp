#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"
struct Field0Low12_02097408 { unsigned int count:12, size:19, resolved:1; };
struct ResolveHandle02097248 { int field_0x0, field_0x4, field_0x8; char pad[0x14]; };
struct Header02097798 { void* base; Field0Low12_02097408 fields; ResolveHandle02097248* entries; void* extra; };
extern "C" int func_02097408(Field0Low12_02097408*);
extern "C" int func_02097248(void*, ResolveHandle02097248*);
extern "C" void func_02097798(Header02097798*);
// USA: func_020972e0
extern "C" ARM void func_020972e0(Header02097798* obj, SafeAllocator* allocator, char* source) {
    if (allocator && source) {
        memcpy(&obj->fields, source, 4);
        int entryBytes = func_02097408(&obj->fields);
        int extraBytes = obj->fields.size;
        if (entryBytes)
            obj->entries = (ResolveHandle02097248*)allocator->Allocate(entryBytes);
        else
            obj->entries = 0;
        obj->extra = extraBytes ? allocator->Allocate(extraBytes) : 0;
        if (obj->entries) memcpy(obj->entries, source + 4, entryBytes);
        if (obj->extra) memcpy(obj->extra, source + (func_02097408(&obj->fields) + 4), extraBytes);
        int (*callback)(void*, ResolveHandle02097248*) = func_02097248;
        if ((unsigned int)callback && obj->entries) {
            ResolveHandle02097248* entry;
            int i;
            int count;
            count = obj->fields.count;
            if (count && callback) {
                entry = obj->entries;
                for (i = 0; i < count; i++, entry++) func_02097248(&obj->fields, entry);
            }
        }
        obj->fields.resolved = 1;
    }
    obj->base = obj->entries;
    func_02097798(obj);
}
