#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)
#define Max 100000

int compare(const void *a, const void *b);
int deadline(int n, int arr[]);

int main() {
    int n;
    int arr[Max];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(int), compare);

    printf("%d", deadline(n, arr));

    return 0;
}

int compare(const void *a, const void *b) {
    return *(int *)b - *(int *)a;
}

int deadline(int n, int arr[]) {
    int res = 0;
    for (int i = 1; i <= n; i++) {
        if (res < arr[i - 1] + i) {
            res = arr[i - 1] + i;
        }
    }
    return res + 1;
}