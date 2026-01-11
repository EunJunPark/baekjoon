#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable: 4996)

int changeme(int n);

int main(){
    int n; 
    scanf("%d", &n);

    printf("%d",changeme(n));
}

int changeme(int n){
    int res = 0;
    int five = n / 5;

    if(n == 1 || n == 2 || n == 4 || n == 7) {
        res = -1;
        return res;
    }

    while (five >= 0)
    {
        int remain = n - (five * 5);
        if(remain % 3 == 0){
            res = five + (remain / 3);
            return res;
        }
        else{
            five--;
        }
    }
}