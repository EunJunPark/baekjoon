#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)

void input_handler();
int solve(int n, int h[]);

int main(){
    input_handler();
    return 0;
}

void input_handler(){
    int n;
    scanf("%d", &n);
    int* h = (int*)malloc(sizeof(int) * n);
    
    for(int i = 0; i < n; i++) scanf("%d", &h[i]);
    
    printf("%d", solve(n, h));
    free(h);
}

int solve(int n, int h[]){
    int max = 0;
    int count = 0;

    for(int i = n - 1; i >= 0; i--){
        if(h[i] > max){
            max = h[i];
            count++;
        }
    }
    return count;
}