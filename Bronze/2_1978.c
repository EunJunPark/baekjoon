#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)

void input_handler();
int solve(int n, int arr[]);

int main(){
    input_handler();
    return 0;
}

void input_handler(){
    int n;
    scanf("%d", &n);
    int* arr = (int*)malloc(sizeof(int) * n);
    
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    
    printf("%d", solve(n, arr));
    free(arr);
}

int solve(int n, int arr[]){
    int count = 0;
    
    for(int i = 0; i < n; i++){
        int num = arr[i];
        int is_prime = 1;
        
        if(num < 2) is_prime = 0;
        
        for(int j = 2; j * j <= num; j++){
            if(num % j == 0){
                is_prime = 0;
                break;
            }
        }
        
        if(is_prime) count++;
    }
    return count;
}