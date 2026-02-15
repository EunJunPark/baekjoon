#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)

void input_handler();
void solve(int a, int b);

int main(){
    input_handler();
    return 0;
}

void input_handler(){
    int a, b;
    scanf("%d %d", &a, &b);
    solve(a, b);
}

void solve(int a, int b){
    int x = a;
    int y = b;
    int temp;

    while(y != 0){
        temp = x % y;
        x = y;
        y = temp;
    }

    printf("%d\n", x);
    printf("%d", (a * b) / x);
}