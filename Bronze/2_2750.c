#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)

int compare(const void *a, const void *b);

int main(){
    int n;
    int arr[1000];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    qsort(arr, n, sizeof(int), compare);

    for(int i = 0; i < n; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}

int compare(const void *a, const void *b){
    if (*(int*)a > *(int*)b) return 1;
    else if (*(int*)a < *(int*)b) return -1;
    else return 0;
}