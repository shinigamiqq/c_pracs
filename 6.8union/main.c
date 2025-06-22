#include <stdio.h>
#define NSYM 1001

struct {
    char *name;
    int flags;
    int utype;
    union {
        int ival;
        float fval;
        char *sval;
    } u;
} symtab[NSYM];

int main() {
    symtab[0].u.ival = 0;
    printf("%d\n", symtab[0].u.ival);
}
