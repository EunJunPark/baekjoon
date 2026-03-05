#include <stdio.h>
#pragma warning(disable: 4996)

void input_handler();
void solve(int n);

int main(){
    input_handler();
    return 0;
}

void input_handler(){
    int n;
    scanf("%d", &n);
    solve(n);
}

void solve(int n){
    if(n == 1) return;

    for(int i = 2; i * i <= n; i++){
        while(n % i == 0){
            printf("%d\n", i);
            n /= i;
        }
    }
    
    if(n > 1){
        printf("%d\n", n);
    }
}