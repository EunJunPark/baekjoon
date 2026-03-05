#include <stdio.h>
#include <string.h>
#pragma warning(disable: 4996)

void input_handler();
int solve(char str[]);

int main(){
    input_handler();
    return 0;
}

void input_handler(){
    char str[105];
    scanf("%s", str);
    printf("%d", solve(str));
}

int solve(char str[]){
    int left = 0;
    int right = strlen(str) - 1;

    while(left < right){
        if(str[left] != str[right]){
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}