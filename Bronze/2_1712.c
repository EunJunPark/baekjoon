#include <stdio.h>
#pragma warning(disable: 4996)

void input_handler();
int solve(int a, int b, int c);

int main(){
    input_handler();
    return 0;
}

void input_handler(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", solve(a, b, c));
}

int solve(int a, int b, int c){
    if(b >= c) return -1;
    return (a / (c - b)) + 1;
}