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
    int n;
    int count = 0;
    char str[105];
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        scanf("%s", str);
        count += solve(str);
    }
    
    printf("%d\n", count);
}

int solve(char str[]){
    int seen[26] = {0};
    int len = strlen(str);
    
    seen[str[0] - 'a'] = 1;
    
    for(int i = 1; i < len; i++){
        if(str[i] != str[i-1]){
            if(seen[str[i] - 'a'] == 1){
                return 0;
            }
            seen[str[i] - 'a'] = 1;
        }
    }
    return 1;
}