#include <stdio.h>
#pragma warning(disable: 4996)

void input_handler();
int solve(int n, int k);

int main(){
    input_handler();
    return 0;
}

void input_handler(){
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d", solve(n, k));
}

int solve(int n, int k){
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            cnt++;
            if(cnt == k) return i;
        }
    }
    return 0;
}