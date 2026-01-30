#include <stdio.h>
#pragma warning(disable: 4996)

void input_handler();
int solve(int price);

int main(){
    input_handler();
    return 0;
}

void input_handler(){
    int price;
    scanf("%d", &price);
    printf("%d", solve(price));
}

int solve(int price){
    int change = 1000 - price;
    int count = 0;

    count += change / 500;
    change %= 500;

    count += change / 100;
    change %= 100;

    count += change / 50;
    change %= 50;

    count += change / 10;
    change %= 10;

    count += change / 5;
    change %= 5;

    count += change / 1;

    return count;
}