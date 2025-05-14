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
    struct point pt1 = {32, 200};
    struct point pt2 = {42, 420};

    struct react screen = {pt1, pt2};

    printf("%d, %d\n", screen.pt1.x, screen.pt2.y);
}
