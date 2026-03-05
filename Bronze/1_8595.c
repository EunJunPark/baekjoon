#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)

void input_handler();
long long solve(int n, char* s);

int main(){
    input_handler();
    return 0;
}

void input_handler(){
    int n;
    scanf("%d", &n);
    
    char* s = (char*)malloc(sizeof(char) * (n + 1));
    scanf("%s", s);
    
    printf("%lld\n", solve(n, s));
    free(s);
}

long long solve(int n, char* s){
    long long sum = 0;
    long long temp = 0;
    
    for(int i = 0; i < n; i++){
        if(s[i] >= '0' && s[i] <= '9'){
            temp = temp * 10 + (s[i] - '0');
        } else {
            sum += temp;
            temp = 0;
        }
    }
    sum += temp;
    
    return sum;
}