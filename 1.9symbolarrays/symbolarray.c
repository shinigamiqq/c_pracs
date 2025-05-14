#include <stdio.h>
#define MAXLINE 32767


int getliner(char line[], int maxline);
void copier(char to[], char from[]);

int main() {
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = getliner(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copier(longest, line);
        }
        if (len > 80) {
            printf("%d %s", len, line);
        }
    }
    if (max > 0)
        printf("%s \a", longest);
    return 0;
}

int getliner(char s[], int lim) {
    int c, i;

    for (i = 0; i<lim-1 && (c=getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copier(char to[], char from[]) {
    int i;

    i = 0;
    while((to[i] = from[i]) != '\0')
        ++i;
}
