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
    int n;
    char str[55];
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%s", str);
        solve(str);
    }
}

void solve(char str[]){
    int cnt = 0;
    int len = strlen(str);

    for(int i = 0; i < len; i++){
        if(str[i] == '(') cnt++;
        else cnt--;

        if(cnt < 0){
            printf("NO\n");
            return;
        }
    }

    if(cnt == 0) printf("YES\n");
    else printf("NO\n");
}