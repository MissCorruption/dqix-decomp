#include <globaldefs.h>

struct HighlightMap02233178 { unsigned char entries[4]; };
struct HighlightMaps02233178 { HighlightMap02233178 selected, detail; };
struct HighlightObjects02233178 { void* first; void* entries[3]; };
struct HighlightState02233178 { unsigned char selection; unsigned char padding[3]; HighlightObjects02233178* objects; };
extern HighlightMaps02233178 data_ov031_02249064;
extern HighlightState02233178 data_ov031_02290cc0;
extern "C" void func_ov031_02234ff8(void*, int, int);
extern "C" int func_ov031_0223607c(int);
extern "C" void func_ov031_0223bb58(void*, int, int, int);

// USA: func_ov031_02233178
extern "C" ARM void func_ov031_02233178() {
    HighlightMap02233178 selected = {{data_ov031_02249064.selected.entries[0], data_ov031_02249064.selected.entries[1], data_ov031_02249064.selected.entries[2], data_ov031_02249064.selected.entries[3]}};
    HighlightMap02233178 detail = {{data_ov031_02249064.detail.entries[0], data_ov031_02249064.detail.entries[1], data_ov031_02249064.detail.entries[2], data_ov031_02249064.detail.entries[3]}};
    unsigned char* colors = selected.entries;
    if (data_ov031_02290cc0.selection > 3) return;
    int value = colors[data_ov031_02290cc0.selection];
    func_ov031_02234ff8(data_ov031_02290cc0.objects->first, value, value);
    if (data_ov031_02290cc0.selection == 3) return;
    int index = func_ov031_0223607c(data_ov031_02290cc0.selection);
    if (index > 2) index = 3;
    func_ov031_0223bb58(data_ov031_02290cc0.objects->entries[data_ov031_02290cc0.selection], -1, 0, detail.entries[index]);
}
