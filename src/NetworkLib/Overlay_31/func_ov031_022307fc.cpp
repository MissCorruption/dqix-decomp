#include <globaldefs.h>

struct SelectionMap022307fc {
    unsigned char indices[14];
};
struct SelectionCoordinates022307fc {
    unsigned short first;
    unsigned short second;
    unsigned short third;
    unsigned short fourth;
};
struct SelectionState022307fc {
    unsigned char selection;
    unsigned char padding1;
    unsigned char row;
    unsigned char padding3;
    unsigned short offset;
    unsigned char padding6[2];
    void* layer;
};
extern const SelectionMap022307fc data_ov031_02248f78;
extern const SelectionCoordinates022307fc data_ov031_02249002[];
extern SelectionState022307fc data_ov031_02290ca0;
extern "C" void func_ov031_02223720(int, int, int, int);

// USA: func_ov031_022307fc
extern "C" ARM void func_ov031_022307fc(void) {
    SelectionMap022307fc selections = data_ov031_02248f78;
    int index = selections.indices[data_ov031_02290ca0.selection];
    if (index >= 3) {
        func_ov031_02223720(3, data_ov031_02249002[index].first,
            data_ov031_02249002[index].third, data_ov031_02249002[index].second);
        return;
    }
    SelectionCoordinates022307fc position = data_ov031_02249002[index];
    position.second += data_ov031_02290ca0.row * 29;
    func_ov031_02223720(1, position.first, position.third, position.second);
}
