#include <stdio.h>


int main() {
    int c, i, nother, nwhite;
    float chance;
    int ndigit[26];

    nother = nwhite = 0;
    chance = 0.0;

    for (i = 0; i < 26; i++)
        ndigit[i] = 0;

    while((c = getchar()) != EOF)
        if (c == 'a')
            ++ndigit[0];
        else if (c == 'b')
            ++ndigit[1];
        else if(c == 'c')
            ++ndigit[2];
        else if (c == 'd')
            ++ndigit[3];
        else if( c == 'e')
            ++ndigit[4];
        else if (c == 'f')
            ++ndigit[5];
        else if (c == 'g')
            ++ndigit[6];
        else if(c == 'h')
            ++ndigit[7];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else 
            ++nother;

    for (i = 0; i <= 26; i++) {
        chance = ndigit[i];
        printf("%d %f \n", i, chance);
    }
    printf("other = %d whites = %d \n", nother, nwhite);
}
