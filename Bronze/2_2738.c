#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)

void input_handler();
void solve(int n, int m, int* a, int* b);

int main(){
    input_handler();
    return 0;
}

void input_handler(){
    int n, m;
    scanf("%d %d", &n, &m);
    
    int* a = (int*)malloc(sizeof(int) * n * m);
    int* b = (int*)malloc(sizeof(int) * n * m);

    for(int i = 0; i < n * m; i++) scanf("%d", &a[i]);
    for(int i = 0; i < n * m; i++) scanf("%d", &b[i]);

    solve(n, m, a, b);

    free(a);
    free(b);
}

void solve(int n, int m, int* a, int* b){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", a[i * m + j] + b[i * m + j]);
        }
        printf("\n");
    }
}