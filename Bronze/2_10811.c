#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)

void input_handler();
void solve(int m, int arr[]);

int main(){
    input_handler();
    return 0;
}

void input_handler(){
    int n, m;
    scanf("%d %d", &n, &m);
    
    int* arr = (int*)malloc(sizeof(int) * (n + 1));
    for(int i = 1; i <= n; i++){
        arr[i] = i;
    }
    
    solve(m, arr);
    
    for(int i = 1; i <= n; i++){
        printf("%d ", arr[i]);
    }
    
    free(arr);
}

void solve(int m, int arr[]){
    int left, right, temp;
    
    for(int k = 0; k < m; k++){
        scanf("%d %d", &left, &right);
        
        while(left < right){
            temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
}