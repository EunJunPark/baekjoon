#include <stdio.h>
#include <string.h>
#pragma warning(disable: 4996)

void input_handler();
void solve(char str[]);

int main(){
    input_handler();
    return 0;
}

void input_handler(){
    char str[105];
    scanf("%s", str);
    solve(str);
}

void solve(char str[]){
    int len = strlen(str);
    for(int i = 0; i < len; i++){
        if(i > 0 && i % 10 == 0){
            printf("\n");
        }
        printf("%c", str[i]);
    }
    printf("\n");
}