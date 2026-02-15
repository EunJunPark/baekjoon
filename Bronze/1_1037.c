#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)

void input_handler();
long long solve(int cnt, int* arr);
int compare(const void* a, const void* b);

int main(){
    input_handler();
    return 0;
}

void input_handler(){
    int cnt;
    scanf("%d", &cnt);
    int* arr = (int*)malloc(sizeof(int) * cnt);

    for(int i = 0; i < cnt; i++){
        scanf("%d", &arr[i]);
    }

    printf("%lld", solve(cnt, arr));
    free(arr);
}

int compare(const void* a, const void* b){
    if(*(int*)a > *(int*)b) return 1;
    else if(*(int*)a < *(int*)b) return -1;
    else return 0;
}

long long solve(int cnt, int* arr){
    qsort(arr, cnt, sizeof(int), compare);
    return (long long)arr[0] * arr[cnt - 1];
}