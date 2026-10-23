#include <globaldefs.h>
#include "std_library_functions.h"

#include "Combat/ResourceScriptEntry.h"

static ResourceScriptEntry *data_02108ef4;
static unsigned int data_02108ef0;
static unsigned int data_02108eec;
static int data_02108ee8;
static unsigned int data_02108ef8;

struct Obj020823e4 {
    unsigned int field_0;
    unsigned short field_4;
    unsigned short field_6;
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
};

extern "C" void func_020823e4(struct Obj020823e4 *dst, struct Obj020823e4 *src);

// USA: func_02082064
extern "C" ARM int func_02082064(Script::Parameter *params, int numParams) {
    ResourceScriptFields fields;
    fields.value4Low = ++data_02108ef8;
    fields.value0 = (params++)->ToInt();
    if (data_02108ef0 < data_02108ef8 && fields.value0 <= data_02108eec) {
        fields.value8.low = (params++)->ToInt();
        fields.value8.high = (params++)->ToInt();
        fields.value8.middle = (params++)->ToInt();
        fields.valueC.low = (params++)->ToInt();
        fields.valueC.middle = (params++)->ToInt();
        fields.value10.low = (params++)->ToInt();
        fields.valueC.high = (params++)->ToInt();
        fields.value10.middle = (params++)->ToInt();
        fields.value10.high = (params++)->ToInt();
        fields.value4High = (params++)->ToInt();
        func_020823e4((Obj020823e4 *) &data_02108ef4->final, (Obj020823e4 *) &fields);
        data_02108ee8 = 1;
    }
    if (data_02108ef8 == data_02108ef0) {
        fields.value8.low = (params++)->ToInt();
        fields.value8.high = (params++)->ToInt();
        fields.value8.middle = (params++)->ToInt();
        fields.valueC.low = (params++)->ToInt();
        fields.valueC.middle = (params++)->ToInt();
        fields.value10.low = (params++)->ToInt();
        fields.valueC.high = (params++)->ToInt();
        fields.value10.middle = (params++)->ToInt();
        fields.value10.high = (params++)->ToInt();
        fields.value4High = (params++)->ToInt();
        func_020823e4((Obj020823e4 *) &data_02108ef4->initial, (Obj020823e4 *) &fields);
    }
    return 1;
}

// USA: func_020823e4
extern "C" ARM void func_020823e4(struct Obj020823e4 *dst, struct Obj020823e4 *src) {
    dst->field_0 = src->field_0;
    dst->field_4 = src->field_4;
    dst->field_8 = src->field_8;
    dst->field_c = src->field_c;
    dst->field_10 = src->field_10;
}

struct Variant02030b0c;

// USA: func_02082410
extern "C" ARM int func_02082410(Variant02030b0c *elem) {
    int i;
    for (i = 0; i < 0x11; i++) {
        data_02108ef4->variants[i] = (unsigned char) ((Script::Parameter *) elem)->ToInt();
        elem = (Variant02030b0c *) ((char *) elem + sizeof(Script::Parameter));
    }
    int j;
    for (j = 0x11; j < 0x16; j++) {
        data_02108ef4->variants[j] = 0x64;
    }
    return 1;
}

// USA: func_0208247c
extern "C" ARM void* func_0208247c(void* obj) {
    return memset(obj, 0, 0x54);
}

// USA: func_02082490
extern "C" ARM int func_02082490(void *output, void *resource, unsigned int size, int selection, int extra) {
    ResourceScriptEntry *entry = (ResourceScriptEntry *) output;
    Script script;
    memset(entry, 0, sizeof(*entry));
    data_02108ef8 = 0;
    data_02108ef4 = entry;
    data_02108eec = extra;
    data_02108ef0 = selection;
    data_02108ee8 = 0;
    script.Initialize();
    script.SetOpcodeLookup(data_020f0ff8);
    script.Load(resource, size);
    script.Execute();
    if (data_02108ee8 != 0) {
        entry->difference.value4Low      = (unsigned short) (entry->final.value4Low - entry->initial.value4Low);
        entry->difference.value0         = entry->final.value0 - entry->initial.value0;
        entry->difference.value8.low     = entry->final.value8.low - entry->initial.value8.low;
        entry->difference.value8.high    = entry->final.value8.high - entry->initial.value8.high;
        entry->difference.value8.middle  = entry->final.value8.middle - entry->initial.value8.middle;
        entry->difference.valueC.low     = entry->final.valueC.low - entry->initial.valueC.low;
        entry->difference.valueC.middle  = entry->final.valueC.middle - entry->initial.valueC.middle;
        entry->difference.value10.low    = entry->final.value10.low - entry->initial.value10.low;
        entry->difference.valueC.high    = entry->final.valueC.high - entry->initial.valueC.high;
        entry->difference.value10.middle = entry->final.value10.middle - entry->initial.value10.middle;
        entry->difference.value10.high   = entry->final.value10.high - entry->initial.value10.high;
        entry->difference.value4High     = (unsigned short) (entry->final.value4High - entry->initial.value4High);
        return entry->final.value4Low;
    }
    return 0;
}

struct StreamHeader;

// USA: func_0208274c
extern "C" ARM int func_0208274c(void *param0, StreamHeader *param1, int param2, int param3) {
    Script script;
    memset(param0, 0, sizeof(ResourceScriptEntry));
    data_02108ef8 = 0;
    data_02108eec = 0;
    data_02108ef0 = param3;
    data_02108ef4 = (ResourceScriptEntry *) param0;
    data_02108ee8 = 0;
    script.Initialize();
    script.SetOpcodeLookup(data_020f0ff8);
    script.Load(param1, (unsigned int) param2);
    script.Execute();
    return 0;
}
