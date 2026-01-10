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

    if(n == 1 || n == 3) {
        res = -1;
        return res;
    }

    while (five >= 0)
    {
        int remain = n - (five * 5);
        if(remain % 2 == 0){
            res = five + (remain / 2);
            return res;
        }
        else{
            five--;
        }
    }
}