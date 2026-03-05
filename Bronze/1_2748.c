#include <stdio.h>
#pragma warning(disable: 4996)

void input_handler();
long long solve(int n);

int main(){
    input_handler();
    return 0;
}

void input_handler(){
    int n; 
    scanf("%d", &n);
    printf("%lld", solve(n));
}

long long solve(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
        
    long long a = 0;
    long long b = 1;
    long long c;
        
    for(int i = 2; i <= n; i++){
        c = a + b;
        a = b;
        b = c;
    }
        
    return c;
}