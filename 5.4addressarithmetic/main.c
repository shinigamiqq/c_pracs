#include <stdio.h>


char *alloc(int n);
void afree(char *p);

int main() {
    char *p1, *p2, *p3;

    p1 = alloc(100);
    p2 = alloc(200);
    p3 = alloc(300);

    if (p1 != NULL)
        printf("Выделено 100 байт по адресу %p\n", (void *)p1);
    else
        printf("Не удалось выделить 100 байт\n");

    if (p2 != NULL)
        printf("Выделено 200 байт по адресу %p\n", (void *)p2);
    else
        printf("Не удалось выделить 200 байт\n");

    if (p3 != NULL)
        printf("Выделено 300 байт по адресу %p\n", (void *)p3);
    else
        printf("Не удалось выделить 300 байт\n");

    afree(p2);  
    printf("Освободили память, начиная с p2\n");

    char *p4 = alloc(150);
    if (p4 != NULL)
        printf("После освобождения выделено 150 байт по адресу %p\n", (void *)p4);
    else
        printf("Не удалось выделить 150 байт после освобождения\n");

    return 0;    
}
