#include <stdio.h>
#pragma warning(disable: 4996)

void input_handler();
void solve(int a, int b, int c, int d, int e, int f);

int main(){
    input_handler();
    return 0;
}

void input_handler(){
    int a, b, c, d, e, f;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    solve(a, b, c, d, e, f);
}

void solve(int a, int b, int c, int d, int e, int f){
    int x = (c * e - b * f) / (a * e - b * d);
    int y = (a * f - c * d) / (a * e - b * d);
    printf("%d %d", x, y);
}