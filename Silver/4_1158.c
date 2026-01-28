#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable: 4996)

void input_handler();
int solves(int n, int k, int arr[]);

int main(){
    input_handler();
    return 0;
}

void input_handler(){
    int n, k;
    scanf("%d %d", &n, &k);
    int* arr = (int*)malloc(sizeof(int) * n);

    for(int i = 0; i < n; i++) arr[i] = i + 1;
    
    solves(n, k, arr);
    free(arr);
}

int solves(int n, int k, int arr[]){
    int current_point = 0;
    
    printf("<");
    for(int i = 0; i < n; i++){
        current_point = (current_point + k - 1) % (n - i);
        
        printf("%d", arr[current_point]);
        
        if(i < n - 1) printf(", ");
        
        for(int j = current_point; j < n - 1 - i; j++){
            arr[j] = arr[j+1];
        }
    }
    printf(">");
    return 0;
}