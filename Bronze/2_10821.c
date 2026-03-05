#include <stdio.h>
#pragma warning(disable: 4996)

void input_handler();
int solve(char s[]);

int main(){
    input_handler();
    return 0;
}

void input_handler(){
    char s[105];
    scanf("%s", s);
    printf("%d\n", solve(s));
}

int solve(char s[]){
    int count = 0;
    
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] == ','){
            count++;
        }
    }
    
    return count + 1;
}