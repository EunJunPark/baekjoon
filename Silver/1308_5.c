#include<stdio.h>
#pragma warning(disable: 4996)

int main(void){  
    int a, b, n; 
    scanf("%d %d %d", &a, &b, &n);

    a = a % b;
    int tmp;

    for(int i = 0; i < n; i++){
        a *= 10;
        tmp = a/ b;
        a = a % b;
        // printf("%d: %d %d\n", i, a, tmp);
    }
    printf("%d", tmp);
}