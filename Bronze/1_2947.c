#include <stdio.h>
#pragma warning(disable: 4996)

void input_handler();
void solve(int arr[]);
int is_sorted(int arr[]);

int main(){
    input_handler();
    return 0;
}

void input_handler(){
    int arr[5];
    for(int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }
    solve(arr);
}

int is_sorted(int arr[]){
    for(int i = 0; i < 4; i++){
        if(arr[i] > arr[i+1]){
            return 0;
        }
    }
    return 1;
}

void solve(int arr[]){
    int temp;
    
    while(is_sorted(arr) == 0){
        for(int i = 0; i < 4; i++){
            if(arr[i] > arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                
                for(int j = 0; j < 5; j++){
                    printf("%d ", arr[j]);
                }
                printf("\n");
            }
        }
    }
}