#include <stdio.h>
#include <stdlib.h>

int atoi(char s[]);


int main() {
    char s[3] = ['q', 'w', 'e', 'r'];
    atoi(s);

}

int atoi(char s[]) {
    int i, n;

    n = 0;
    for (i = 0; s[i]>='0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] -'0');
    return n;
}
