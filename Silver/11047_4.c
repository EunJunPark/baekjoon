#include<stdio.h>
#pragma warning(disable: 4996)
#define MAX 11

int greedy(int arr[], int n, int k);

int main(){
    int n, k;
    int arr[MAX];

    scanf("%d %d", &n, &k);
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("%d", greedy(arr, n, k));
}

int greedy(int arr[], int n, int k){
    int cnt = 0;
    for(int i = n - 1; i >= 0; i--){
        if(k / arr[i] >= 1){
            cnt += k / arr[i];
            k = k - (k / arr[i] * arr[i]);
        }
    }
    return cnt;
}