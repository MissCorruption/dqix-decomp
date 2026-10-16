#include <globaldefs.h>
#include "Resource/QuestScriptOwner.h"
#include "Resource/Script.h"

unsigned char questSelected;
unsigned char data_02109404;
unsigned char questSkip;
unsigned char questF4;
unsigned char questF3;
unsigned short questF8;
unsigned short questIndex;
SafeAllocator* questAllocator;
unsigned char* questTable;

extern short data_020f13d8;
extern Script::OpcodeLookupEntry data_020f1444[];

// USA: func_0209576c
extern "C" ARM void func_0209576c(Header020956b8* header, SafeAllocator* allocator,
                                 const void* data, unsigned int length, unsigned char mode) {
    if (allocator != NULL && data != NULL && length != 0) {
        questAllocator = allocator;
        header->alternateListHead = NULL;
        data_02109404 = mode;
        questSelected = 0;
        data_020f13d8 = -1;
        Script script;
        script.Initialize();
        script.SetOpcodeLookup(data_020f1444);
        script.Load(data, length);
        script.Execute();
    }
}
