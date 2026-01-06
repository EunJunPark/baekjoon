#include<stdio.h>
#include <string.h>
#include <stdbool.h>
#pragma warning(disable: 4996)
#define _CRT_SECURE_NO_WARNINGS
#define MAX 10000

int check(int n){

    int cnt = 0;
    char six[4] = "666";
    int i = 666;

    while(cnt != n){

        char res[MAX];
        char *ret;
        
        sprintf(res, "%d", i);
        ret = strstr(res, six);

        if(ret != NULL){
            cnt++;
            if(cnt == n) {
                printf("%s\n", res);
                return 0;
            }
        }
        i++;
    }
}

int main(void){
    int n; 
    scanf("%d", &n);
    check(n);
}