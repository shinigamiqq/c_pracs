#include <stdio.h>

int getint(int *pn);

int main() {
    int number;
    int result;

    printf("Введите число: ");
    result = getint(&number);

    printf("Вы ввели: %d\n", number);

    return 0;
}

