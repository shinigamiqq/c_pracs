#include <stdio.h>
#define MAXLINE 1000

int max;
char line[MAXLINE];
char longest[MAXLINE];

int getliner(void);
void copium(void);

int main() {
    int len;
    extern int max;
    extern char longest[];

    max = 0;
    while ((len = getliner()) > 0)
        if (len > max){
            max = len;
            copium();
        }
    if (max > 0)
        printf("%s", longest);
    return 0;
}

int getliner(void) {
    int c, i;
    extern char line[];

    for (i = 0; i<MAXLINE-1 && (c=getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

void copium(void) {
    int i;
    extern char line[], longest[];

    i = 0;
    while ((longest[i] = line[i]) != '\0')
        ++i;
}
