#include <stdio.h>


int main(){
    int c, nl, sl, tl;

    nl = 0;
    sl = 0;
    tl = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++nl;
        }

        if (c == ' ') {
            ++sl;
        }

        if (c == '\t') {
            ++tl;
        }

    }
    printf("%d %d %d\n", nl, sl, tl);
}
