#include <globaldefs.h>

struct Layer0204fd00 {
    char pad0[0x1c];
    unsigned char screen : 4;
    unsigned char bg : 4;
};

struct Window0204fd00 {
    Window0204fd00* next;
    Layer0204fd00* layer;
    char pad08[0xa8 - 0x8];
    short width;
    short height;
    short x;
    short y;
    char padb0[0xc5 - 0xb0];
    unsigned char flags;
};

int IsWithinRect0204ea28(short x, short y, short minX, short minY, short maxX, short maxY);

// USA: func_0204fd00
extern "C" ARM int func_0204fd00(Window0204fd00* window, int mask) {
    int result;
    short top;
    short otherLeft;
    short otherTop;
    short otherRight;
    short otherBottom;
    short left;
    short right;
    short bottom;
    unsigned char screen;
    Window0204fd00* other;
    other = window->next;
    if (other == NULL) {
        return 0;
    }
    left = window->x;
    top = window->y;
    right = left + window->width;
    bottom = top + window->height;
    screen = 0;
    result = 0;
    if (window->layer != NULL) {
        screen = window->layer->screen;
    }
    while (other != NULL) {
        if (other->layer != NULL && window->layer != NULL && screen != other->layer->screen) {
            other = other->next;
            continue;
        }
        if (other->flags & 0x20) {
            other = other->next;
            continue;
        }
        if ((other->flags & 4) && (other->flags & 0x10)) {
            other = other->next;
            continue;
        }
        otherLeft = other->x;
        otherTop = other->y;
        otherRight = otherLeft + other->width;
        otherBottom = otherTop + other->height;
        if (mask & 1) {
            if (IsWithinRect0204ea28(left, top, otherLeft, otherTop, otherRight, otherBottom)) {
                if (left != otherLeft || top != otherTop) {
                    result = 5;
                    if (left == otherLeft) {
                        result = 1;
                    } else if (top == otherTop) {
                        result = 2;
                    }
                    break;
                }
            }
        }
        if (mask & 2) {
            if (IsWithinRect0204ea28(right - 1, top, otherLeft, otherTop, otherRight, otherBottom)) {
                if (right != otherRight || top != otherTop) {
                    result = 5;
                    if (right == otherRight) {
                        result = 3;
                    } else if (top == otherTop) {
                        result = 2;
                    }
                    break;
                }
            }
        }
        if (mask & 4) {
            if (IsWithinRect0204ea28(left, bottom - 1, otherLeft, otherTop, otherRight, otherBottom)) {
                if (left != otherLeft || bottom != otherBottom) {
                    result = 5;
                    if (left == otherLeft) {
                        result = 1;
                    } else if (bottom == otherBottom) {
                        result = 4;
                    }
                    break;
                }
            }
        }
        if (mask & 8) {
            if (IsWithinRect0204ea28(right - 1, bottom - 1, otherLeft, otherTop, otherRight, otherBottom)) {
                if (right != otherRight || bottom != otherBottom) {
                    result = 5;
                    if (right == otherRight) {
                        result = 3;
                    } else if (bottom == otherBottom) {
                        result = 4;
                    }
                    break;
                }
            }
        }
        other = other->next;
    }
    return result;
}
