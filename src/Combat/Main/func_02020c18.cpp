#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Resource/Script.h"
#include "Memory/SafeAllocator.h"
#include "Combat/MapDisplay.h"

struct ScriptPalette {
    unsigned short paletteColor;
    unsigned short unknown2;
};

unsigned int data_020fdc58;
SafeAllocator* data_020fdc54;
#if !defined(jpn)
char* data_020fdc50;
#endif
ScriptPalette data_020fdc4c;
char* data_020fdc5c;

#if defined(jpn)
#define data_020ef510 data_020ef3f4
#endif
extern Script::OpcodeLookupEntry data_020ef510[];

// USA: func_02020c18
extern "C" ARM void func_02020c18(MapDisplay* self, MapDisplayTaskHandle handle, SafeAllocator* allocator) {
    Script script;
    void* code;
    unsigned int length;
    BackgroundLoader* loader = BackgroundLoader::GetInstance();
    void* data = 0;
    unsigned int size = 0;
#if defined(jpn)
    loader->GetLoadedFileByID(handle, &data, &size);
#else
    loader->GetLoadedFileByID(*handle, &data, &size);
#endif
    length = size;
    data_020fdc5c = (char*)self;
    code = data;
    data_020fdc54 = allocator;
    script.Initialize();
    script.SetOpcodeLookup(data_020ef510);
    script.Load(code, length);
    script.Execute();
#if defined(jpn)
    BackgroundLoader::GetInstance()->RemoveTask(handle);
#else
    BackgroundLoader::GetInstance()->RemoveTask(*handle);
    *handle = -1;
#endif
}
