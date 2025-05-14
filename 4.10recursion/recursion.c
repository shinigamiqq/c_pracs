#include <stdint.h>
#include <stdio.h>

void qsortik(int v[], int left, int right);
void swap(int v[], int i, int j);

int main() {
    int v[6] = {0, 3, 4, 2, 1, 7};
    int size = sizeof(v) / sizeof(v[0]);

    qsortik(v, 0, size - 1);

    for (int i = 0; i < size; i++)
        printf("%d\n", v[i]);

    return 0;
}

void qsortik(int v[], int left, int right) {
    int i, last;

    if (left >= right)
        return;

    swap(v, left, (left + right) / 2);
    last = left;

    for (i = left + 1; i <= right; i++)
        if (v[i] < v[left])
            swap(v, ++last, i);

    swap(v, left, last);
    qsortik(v, left, last - 1);
    qsortik(v, last + 1, right);
}

void swap(int v[], int i, int j) {
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

