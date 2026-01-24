#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)
#define Max 1000000

int sort(const void *a, const void *b);

int main(){
    int n; 
    int arr[Max];
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    qsort(arr, n, sizeof(int), sort);

    for(int i = 0; i < n; i++) printf("%d\n", arr[i]);
}

int sort(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}