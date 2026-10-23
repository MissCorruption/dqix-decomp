#pragma once

struct FontBankLoader {
    void* primaryTable;
    void* supplementalTable;
    char unknown08[4];
    int primaryValue;
    int supplementalValue;
    int loadTasks[8];
    int requestedBank;
    int requestedSupplement;
    int primaryBank;
    int supplementalBank;
    char customFontName[16];
    unsigned char primaryTaskCount;
    unsigned char supplementalTaskCount;
    unsigned char dispatchStage;
    unsigned char loadStage;
    unsigned char cachedFontVariant;
    char cachedLocationSuffix[8];
    unsigned char primaryMode;
    unsigned char supplementalMode;
    unsigned char primaryLoaded;
    unsigned char supplementalLoaded;
};

extern "C" FontBankLoader* func_02094a00(void);
extern "C" void func_02094ab0(FontBankLoader* loader);
extern "C" void func_02094b2c(FontBankLoader* loader, int index, const char* text, unsigned char primaryMode,
                           unsigned char supplementalMode);
extern "C" void func_02094b30(FontBankLoader* loader, int fontBankId, int useBaseArchive);
extern "C" void func_02094b34(FontBankLoader* loader, int first, int second, unsigned char primaryMode,
                           unsigned char supplementalMode);
extern "C" void func_02094b38(FontBankLoader* loader, int fontBankId);
extern "C" void func_02094b3c(FontBankLoader* loader, int event);
extern "C" void func_02094b40(FontBankLoader* loader);
extern "C" void* func_02094b44(FontBankLoader* loader, int event);
extern "C" int func_02094b4c(FontBankLoader* loader);
extern "C" int func_02094b54(FontBankLoader* loader, int event, char* data, int size);
