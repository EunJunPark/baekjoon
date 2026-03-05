#include <stdio.h>
#pragma warning(disable: 4996)

void input_handler();
int solve(int n, int k);
int factorial(int n);

int main(){
    input_handler();
    return 0;
}

void input_handler(){
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d", solve(n, k));
}

int factorial(int n){
    if(n <= 1) return 1;
    return n * factorial(n - 1);
}

int solve(int n, int k){
    return factorial(n) / (factorial(k) * factorial(n - k));
}