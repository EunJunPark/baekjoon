#include <stdio.h>
#include <string.h>
#pragma warning(disable: 4996)

void input_handler();
void solve(char c1[], char c2[], char c3[]);

int main(){
    input_handler();
    return 0;
}

void input_handler(){
    char c1[10], c2[10], c3[10];
    scanf("%s %s %s", c1, c2, c3);
    solve(c1, c2, c3);
}

void solve(char c1[], char c2[], char c3[]){
    char table[10][10] = {
        "black", "brown", "red", "orange", "yellow", 
        "green", "blue", "violet", "grey", "white"
    };
    
    int v1 = 0, v2 = 0, v3 = 0;
    long long result = 0;

    for(int i = 0; i < 10; i++){
        if(strcmp(c1, table[i]) == 0) v1 = i;
        if(strcmp(c2, table[i]) == 0) v2 = i;
        if(strcmp(c3, table[i]) == 0) v3 = i;
    }

    result = (long long)v1 * 10 + v2;
    
    for(int i = 0; i < v3; i++){
        result *= 10;
    }

    printf("%lld", result);
}