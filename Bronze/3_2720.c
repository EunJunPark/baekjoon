#include <stdio.h>
#pragma warning(disable: 4996)

void input_handler();
void solve(int money);

int main(){
    input_handler();
    return 0;
}

void input_handler(){
    int t, c;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        scanf("%d", &c);
        solve(c);
    }
}

void solve(int money){
    int q, d, n, p;
    
    q = money / 25;
    money %= 25;
    
    d = money / 10;
    money %= 10;
    
    n = money / 5;
    money %= 5;
    
    p = money;
    
    printf("%d %d %d %d\n", q, d, n, p);
}