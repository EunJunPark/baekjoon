#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable: 4996)

void input_handler();
void solve(int n, char words[][55]);
int compare(const void* a, const void* b);

int main(){
    input_handler();
    return 0;
}

void input_handler(){
    int n;
    scanf("%d", &n);
    char (*words)[55] = (char (*)[55])malloc(sizeof(char) * n * 55);

    for(int i = 0; i < n; i++){
        scanf("%s", words[i]);
    }
    
    solve(n, words);
    free(words);
}

int compare(const void* a, const void* b){
    char* s1 = (char*)a;
    char* s2 = (char*)b;
    
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if(len1 != len2) return len1 - len2;
    return strcmp(s1, s2);
}

void solve(int n, char words[][55]){
    qsort(words, n, sizeof(words[0]), compare);

    printf("%s\n", words[0]);
    for(int i = 1; i < n; i++){
        if(strcmp(words[i], words[i-1]) != 0){
            printf("%s\n", words[i]);
        }
    }
}