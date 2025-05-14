#include <stdio.h>

char *month_name(int n);

int main() {
    int a;
    scanf("%d", &a);    
    printf("%s\n",month_name(a));
    
    return 0;
}

char *month_name(int n) {
    static char *name[] = {
        "Illegal month",
        "January", "February", "March",
        "April", "May", "June",
        "July", "August", "September",
        "October", "November", "December"
    };
    
    return (n < 1 || n > 12) ? name[0] : name[n];
}
