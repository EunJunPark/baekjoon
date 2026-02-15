#include <stdio.h>
#include <string.h>
#pragma warning(disable: 4996)

void input_handler();
void solve(int n, char files[][55]);

int main(){
    input_handler();
    return 0;
}

void input_handler(){
    int n;
    char files[50][55];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%s", files[i]);
    }
    solve(n, files);
}

void solve(int n, char files[][55]){
    int len = strlen(files[0]);
    char pattern[55];
    strcpy(pattern, files[0]);

    for(int i = 1; i < n; i++){
        for(int j = 0; j < len; j++){
            if(pattern[j] != files[i][j]){
                pattern[j] = '?';
            }
        }
    }
    printf("%s", pattern);
}