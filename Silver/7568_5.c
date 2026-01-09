#include<stdio.h>
#include <string.h>
#include <stdbool.h>
#pragma warning(disable: 4996)

int arr[100];

int compare(int N){
    int res[50];

    for(int i = 0; i < N; i++) res[i] = 1;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(arr[i*2] < arr[j*2] && arr[i*2+1] < arr[j*2+1]) res[i] += 1;
        }        
    }
    
    for(int i = 0; i < N; i++) printf("%d ", res[i]);
    return 0;
}

int main(void){
    int weight, high;
    int N;
    scanf("%d", &N);
    for(int i = 0; i < N * 2; i += 2) scanf("%d %d",&arr[i], &arr[i+1]);
    compare(N);
}