#include <globaldefs.h>
#include <Memory/SafeAllocator.h>
#include <GameState/GameState.h>

struct AlchemyRecipeQuantityView {
    short unknown00[2];
    short firstIngredient;
    short secondIngredient;
    short thirdIngredient;
    unsigned short firstQuantity : 4;
    unsigned short secondQuantity : 4;
    unsigned short thirdQuantity : 4;
    unsigned short unknownQuantity : 4;
};
struct AlchemyConsumptionStateView { char unknown00[0x18]; short item; };
struct AlchemyConsumptionContext { SafeAllocator allocator; char operation[0x24]; };
extern "C" {
void* func_02010828(GameState*);
void func_020de824(void*);
void func_0207cbe8(void*);
void func_0207d300(void*, short, signed char, int);
void func_0207cc0c(void*);
void func_02086d88(void*, short);
}
extern "C" ARM void func_ov006_0215759c(AlchemyConsumptionStateView* state, AlchemyRecipeQuantityView* recipe, unsigned int count)
{
    GameState* game = GameState::GetInstance();
    void* inventory = func_02010828(game);
    AlchemyConsumptionContext context;
    context.allocator.ResetAllocatorPointer();
    func_020de824(context.operation);
    func_0207cbe8(&context);
    func_0207cbe8(&context);
    func_0207d300(&context, state->item, (signed char)count, 0);
    func_0207cc0c(&context);
    for (unsigned char iteration = 0; iteration < count; iteration++) {
        for (unsigned char ingredient = 0; ingredient < recipe->firstQuantity; ingredient++) func_02086d88(inventory, recipe->firstIngredient);
        for (unsigned char ingredient = 0; ingredient < recipe->secondQuantity; ingredient++) func_02086d88(inventory, recipe->secondIngredient);
        for (unsigned char ingredient = 0; ingredient < recipe->thirdQuantity; ingredient++) func_02086d88(inventory, recipe->thirdIngredient);
    }
}
