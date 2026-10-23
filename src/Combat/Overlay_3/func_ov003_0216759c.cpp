#include "Combat/MenuNodeChain.h"
#include "Combat/MapDisplay.h"
#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"

struct View6759c {
    int value; SafeAllocator* alloc; List0204af64* lists; Node0207f7f0* objects; Manager0207f7f0* manager;
#if defined(jpn)
    char pad[0x34-0x14];
#else
    char pad[0x64-0x14];
#endif
    int task; char pad2[8]; int selected; unsigned char ready; unsigned char stage; signed char pending;
};
struct Entry6759c { char pad[8]; unsigned int size; void* data; };
extern "C" {
void* __clear(void*, int);
void func_0204af64(void*);
void func_0204b11c(void*, int);
void func_0204b5b4(void*, int);
void func_0204b12c(void*,SafeAllocator*);
void func_0204b5e8(void*,int,int);
void func_0204af38(void*,int,SafeAllocator*);
void DisableSubBGVRAMBanks();
void MapVRAMBanksToSubBG(int);
int func_02046900(void*);
void* func_020467f0(void*,int,void**,int*);
void func_0204b174(void*,void*,SafeAllocator*,int);
void func_0204bc74(void*,int,int,int,int,int,int);
void func_0204b0e8(void*,void*);
Entry6759c* func_0204af14(void*,unsigned int);
void _Z25CleanInvalidateCacheRangePKvj(const void*,unsigned int);
void LoadToSubBG1ScreenData(void*,int,unsigned int);
void func_0204c684(void*);
void func_0204c7a8(void*,SafeAllocator*,int,unsigned int);
#if defined(jpn)
void func_02080654(void*,SafeAllocator*,const char*);
#else
void func_0207f914(void*,SafeAllocator*,const char*,const char*);
#endif
int func_0207f9f4(void*);
void LoadToSubBGStandardPalette(const void*,unsigned int,unsigned int);
void _Z15CleanCacheRangePKvj(const void*,unsigned int);
void func_0207fe44(void*);
void func_ov003_02167a5c(void*,int,int);
}
extern char data_ov003_021800a4[];
extern char data_ov003_021800bb[];
extern char data_ov003_021800d5[];
extern unsigned short data_ov003_0217f4dc[];
#if defined(jpn)
extern char data_ov003_0217e87f[];
#endif

// USA: func_ov003_0216759c
extern "C" ARM int func_ov003_0216759c(View6759c* self) {
    if (self->ready != 0) return 1;
    int result = 1;
    BackgroundLoader* loader = BackgroundLoader::GetInstance();
    if (self->stage == 0) {
        *(volatile unsigned int*)0x4001010 = 0;
        *(volatile unsigned int*)0x4001014 = 0;
        SafeAllocator* alloc = self->alloc;
        alloc->Reset();
        self->lists = (List0204af64*)alloc->Allocate(0x40);
        int words[2];
        __clear(words, sizeof(words));
        List0204af64* list;
        for (int i=0; i<2; i++) {
            list = self->lists+i;
            func_0204af64(list);
            func_0204b11c(list, words[i]);
            list->b1c_lo=1;
            list->b1c_hi=i;
            func_0204b5b4(list,i);
            func_0204b12c(list,alloc);
            func_0204b5e8(list,0,0);
        }
        func_0204af38(self->lists+1,1,alloc);
        DisableSubBGVRAMBanks();
        MapVRAMBanksToSubBG(0x80);
        *(volatile unsigned short*)0x4001008 = (*(volatile unsigned short*)0x4001008 & 0x43) | 0xe00;
        *(volatile unsigned short*)0x400100a = (*(volatile unsigned short*)0x400100a & 0x43) | 0xf00;
        *(volatile unsigned short*)0x4001050 = 0;
        loader->MaybeFreeAllocations();
        self->task = loader->QueueLoadFile(data_ov003_021800a4,0);
        self->stage++;
        result=0;
    } else if (self->stage == 1) {
        if (loader->GetTaskStatus(self->task) != 0) {
            void* out; void* data; unsigned int size; int value;
            loader->GetLoadedFileByID(self->task,&data,&size);
            int count = func_02046900(data);
            SafeAllocator* alloc=self->alloc;
            List0204af64* list=self->lists;
            for (int i=0;i<count;i++) {
                void* record=func_020467f0(data,i,&out,&value);
                if (record) {
                    func_0204b174(list,record,alloc,value);
                    list=self->lists+1;
                }
            }
            loader->RemoveTask(self->task);
            self->task=-1;
            list=self->lists;
            func_0204bc74(list,0,0,0,0x20,0x19,0);
            func_0204b0e8(list,0);
            Entry6759c* entry=func_0204af14(self->lists+1,0);
            if (entry) {
                void* data; unsigned int size=entry->size; data=entry->data;
                _Z25CleanInvalidateCacheRangePKvj(data,size);
                LoadToSubBG1ScreenData(data,0,size);
            }
            alloc=self->alloc;
            alloc[1].Reset();
            self->objects=(Node0207f7f0*)alloc[1].Allocate(0x380);
            for (result=0;result<4;result++) {
                Node0207f7f0* obj=self->objects+result;
                func_0204c684(obj);
                func_0204c7a8(obj,alloc+1,self->value,0x600);
                obj->lists=self->lists;
            }
            self->stage++;
        }
        result=0;
    } else if (self->stage == 2) {
        SafeAllocator* alloc=self->alloc;
        alloc[2].Reset();
#if defined(jpn)
        self->manager=(Manager0207f7f0*)alloc[2].Allocate(0x34);
#else
        self->manager=(Manager0207f7f0*)alloc[2].Allocate(0x40);
#endif
        func_0207f84c(self->manager);
#if defined(jpn)
        func_02080654(self->manager,alloc+2,data_ov003_0217e87f);
#else
        func_0207f914(self->manager,alloc+2,data_ov003_021800bb,data_ov003_021800d5);
#endif
        self->stage++;
        result=0;
    } else if (self->stage == 3) {
        int status=func_0207f9f4(self->manager);
        if (status==0) self->stage++;
        if (status<0) self->ready=2;
        result=0;
    } else if (self->stage == 4) {
        *(volatile unsigned short*)0x4001008 &= ~3;
        *(volatile unsigned short*)0x400100a = (*(volatile unsigned short*)0x400100a & ~3) | 1;
        *(volatile unsigned short*)0x400100c = (*(volatile unsigned short*)0x400100c & ~3) | 2;
        *(volatile unsigned short*)0x400100e = (*(volatile unsigned short*)0x400100e & ~3) | 3;
        *(volatile unsigned int*)0x4001000 = (*(volatile unsigned int*)0x4001000 & ~0x1f00) | 0x1300;
        _Z25CleanInvalidateCacheRangePKvj(data_ov003_0217f4dc,2);
        LoadToSubBGStandardPalette(data_ov003_0217f4dc,2,2);
        _Z15CleanCacheRangePKvj(data_ov003_0217f4dc,2);
        _Z25CleanInvalidateCacheRangePKvj(data_ov003_0217f4dc,2);
        LoadToSubBGStandardPalette(data_ov003_0217f4dc,0x22,2);
        _Z15CleanCacheRangePKvj(data_ov003_0217f4dc,2);
        func_0207f7f0(self->manager,self->objects,4);
        Manager0207f7f0* manager=self->manager;
        manager->lists=self->lists;
        manager->mode=1;
        self->manager->active=0;
        self->ready=1;
        self->stage=0;
        if (self->selected != 0 && self->pending>=0) {
            func_0207fe44(self->manager);
            signed char index=self->pending;
            self->pending=-1;
            func_ov003_02167a5c(self,self->selected,index);
        }
    }
    return result;
}
