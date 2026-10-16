#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "System/Cache.h"
#include "System/LoadToVRAM.h"
#include "System/BGBases.h"
#include "System/Memory.h"

struct TableA68 {
    struct EntryA68* entries;
    short count;
};
struct ActiveEntry02046900;
struct Rec020467f0;

struct Canvas021737e4 {
    void* unk_0;
    void* background_;
    void* pixels_;
    char unk_c[0xa8 - 0xc];
    short width_;
    short height_;
    char unk_ac[0xb4 - 0xac];
    short unk_b4;
    short unk_b6;
    char unk_b8[0xe0 - 0xb8];
};

struct Obj021737e4 {
    unsigned char unk_0;
    unsigned char twoLines_;
    short labelKind_;
    char label_[0x40];
    char title_[0x80];
    char unk_c4[0xc6 - 0xc4];
    short scroll_;
    short scrollEnd_;
    char unk_ca[0xd4 - 0xca];
    unsigned char slot_;
    char unk_d5[0xd8 - 0xd5];
    char unk_d8[0xed - 0xd8];
    unsigned char fed;
    unsigned char unk_ee;
    unsigned char fef;
    char unk_f0[0xf4 - 0xf0];
    int task_;
    char unk_f8[0x1d8 - 0xf8];
    TableA68 text_;
};

extern "C" void* func_ov017_0218b5b0();
extern "C" void func_020a620c(void* obj);
int CountActiveEntries(ActiveEntry02046900* pac);
void* FindRecordByIndex(Rec020467f0* pac, int index, void** outName, int* outSize);
extern "C" void func_0204c684(void* canvas);
extern "C" void* func_02012fe4(void);
char* FindEntryByKey_02072a68(TableA68* table, int key);
extern "C" void func_ov003_02172618(void* canvas, int y, char** labels);

extern char data_ov003_02180a76[];

// USA: func_ov003_021737e4
extern "C" ARM void func_ov003_021737e4(Obj021737e4* self) {
    func_ov017_0218b5b0();
    BackgroundLoader* loader = BackgroundLoader::GetInstance();
    func_020a620c(self->unk_d8);
    if (self->fef == 0) {
        self->task_ = loader->QueueLoadFile(data_ov003_02180a76, NULL);
        self->fef = 1;
    } else if (self->fef == 1) {
        if (loader->GetTaskStatus(self->task_) == 0) {
            return;
        }
        void* name;
        void* file;
        unsigned int size;
        void* records[3];
        int sizes[3];
        loader->GetLoadedFileByID(self->task_, &file, &size);
        int count = CountActiveEntries((ActiveEntry02046900*)file);
        for (int i = 0; i < count; i++) {
            records[i] = FindRecordByIndex((Rec020467f0*)file, i, &name, &sizes[i]);
        }
        void* tiles = self->twoLines_ ? records[1] : records[0];
        Canvas021737e4 canvas;
        func_0204c684(&canvas);
        canvas.pixels_ = (char*)tiles + 0x10;
        canvas.width_ = 0x20;
        canvas.height_ = 8;
        canvas.unk_b4 = 0xc;
        canvas.unk_b6 = 0xc;
        func_02012fe4();
        if (self->twoLines_ != 0) {
            char* labels[2] = {0};
            labels[1] = self->label_;
            int y = 4;
            if (self->labelKind_ == 1) {
                labels[0] = FindEntryByKey_02072a68(&self->text_, 0xc8);
                y = 0xf;
            } else if (self->labelKind_ == 2) {
                labels[0] = FindEntryByKey_02072a68(&self->text_, 0xc9);
                y = 0xf;
            }
            func_ov003_02172618(&canvas, y, labels);
        } else {
            char* labels[2] = {self->title_, self->label_};
            func_ov003_02172618(&canvas, 0xf, labels);
        }
        int offset = (self->slot_ - 1) * 0x2000 + 0x1000;
        CleanInvalidateCacheRange((char*)tiles + 0x10, 0x2000);
        LoadToSubBG0CharacterData((char*)tiles + 0x10, offset, 0x2000);
        int palette = 2;
        if (self->twoLines_) {
            palette = 3;
        }
        unsigned short* screen = (unsigned short*)GetSubBG0ScreenBase();
        for (int i = 0; i < 0x100; i++) {
            *(screen + i + (self->slot_ - 1) * 0x100) =
                (unsigned short)(i + 0x80 + (self->slot_ - 1) * 0x100) | (unsigned short)(palette << 12);
        }
        self->scrollEnd_ = (self->slot_ << 6) - 0xc0;
        loader->RemoveTask(self->task_);
        self->task_ = -1;
        self->fef = 2;
    } else if (self->fef == 2) {
        if (self->scroll_ < self->scrollEnd_) {
            self->scroll_ += (int)(0.4f * (self->scrollEnd_ - self->scroll_)) + 1;
            *(volatile unsigned int*)0x04001010 = (self->scroll_ << 16) & 0x1ff0000;
        }
        if (self->scroll_ >= self->scrollEnd_) {
            self->scroll_ = self->scrollEnd_;
            *(volatile unsigned int*)0x04001010 = (self->scroll_ << 16) & 0x1ff0000;
            self->twoLines_ = 0;
            self->labelKind_ = -1;
            VectorizedMemset(self->label_, 0, 0x40);
            VectorizedMemset(self->title_, 0, 0x80);
            self->fed = 2;
            self->fef = 0;
        }
    }
}
