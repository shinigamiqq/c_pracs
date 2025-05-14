#include <stdio.h>

void shellsort(int v[], int n);

int main(){
    int a;
    int v[10] = { 0, 1, 3, 2, 4, 6, 5, 7, 8, 9 };
    int n = 10;
    shellsort(v, n);
    for (a = 0; a < n; a++)
        printf("%d", v[a]);
}

void shellsort(int v[], int n) {
    int gap, i, j, temp;

    for (gap = n/2; gap > 0; gap /= 2)
        for (i = gap; i < n; i++)
            for (j=i-gap; j >= 0 && v[j]>v[j+gap]; j-=gap) {
                temp = v[j];
                v[j] = v[j+gap];
                v[j+gap] = temp;
            }
}
