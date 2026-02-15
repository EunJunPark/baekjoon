#include <stdio.h>
#include <string.h>
#pragma warning(disable: 4996)

void input_handler();
void solve(char s[]);

int main(){
    input_handler();
    return 0;
}

void input_handler(){
    char s[105];
    scanf("%s", s);
    solve(s);
}

void solve(char s[]){
    int alphabet[26];
    
    for(int i = 0; i < 26; i++) alphabet[i] = -1;

    for(int i = 0; s[i] != '\0'; i++){
        int idx = s[i] - 'a';
        if(alphabet[idx] == -1){
            alphabet[idx] = i;
        }
    }

    for(int i = 0; i < 26; i++){
        printf("%d ", alphabet[i]);
    }
}