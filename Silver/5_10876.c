#include <stdio.h>
#include <stdlib.h>

#define Max 1000000

int arr[Max];

int compare(const void *a, const void *b);

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(int), compare);

    for (int i = 0; i < n; i++) {
        if (i == 0 || arr[i] != arr[i - 1]) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}

int compare(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}