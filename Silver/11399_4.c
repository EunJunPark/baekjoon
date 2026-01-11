#include <stdio.h>
#pragma warning(disable: 4996)

int greedy(int arr[], int n);
void sort(int arr[], int n);

int main(){
    int n;
    int arr[1000];
    scanf("%d", &n);

    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    sort(arr, n);
    printf("%d", greedy(arr, n));
    // for(int i = 0; i < n; i++) printf("%d ", arr[i]);
}

int greedy(int arr[], int n){
    int res = 0;
    int cumulative = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i + 1; j++){
            res = res + arr[j];
        }
    }

    return res;
}

void sort(int arr[], int n){
    int max = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}