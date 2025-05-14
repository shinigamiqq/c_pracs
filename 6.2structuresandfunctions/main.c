#include <stdio.h>

struct point {
    int x;
    int y;
};

struct react {
    struct point pt1;
    struct point pt2;
};

int main() {
    struct point origin = {324, 420}, *pp;

    pp = &origin;
    printf("origin is (%d,%d)\n", (*pp).x, (*pp).y);
    printf("origin is (%d,%d)\n", pp->x, pp->y);
}
