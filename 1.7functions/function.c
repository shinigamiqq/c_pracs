#include <stdio.h>

double fahren(int f);

int main() {
    int fahr;
    fahr = 0;

    for(fahr = 300; fahr >= 0; fahr = fahr - 20) {
        printf("%3d %6.1f\n", fahr, fahren(fahr));
    }
}

double fahren(int f) {
    return (5.0/9.0)*(f-32);
}
