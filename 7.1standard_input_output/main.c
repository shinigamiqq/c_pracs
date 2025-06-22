#include <stdio.h>
#include <ctype.h>


int main() {
    int c;

    while ((c = getchar()) != EOF) {
        if (toascii(c) >= 97 && toascii(c) <= 122) 
            putchar(toupper(c));
        else if (toascii(c) >= 65 && toascii(c) <= 90)
            putchar(tolower(c));
        else
            printf("%c\n",c);
        printf("\n");
    }
    return 0;
}
