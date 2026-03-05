#include <stdio.h>
#pragma warning(disable: 4996)

void input_handler();
void solve(int n);

int main(){
    input_handler();
    return 0;
}

void input_handler(){
    int n;
    while(1){
        scanf("%d", &n);
        if(n == -1) break;
        solve(n);
    }
}

void solve(int n){
    int sum = 0;
    int arr[100000];
    int cnt = 0;

    for(int i = 1; i < n; i++){
        if(n % i == 0){
            arr[cnt++] = i;
            sum += i;
        }
    }

    if(sum == n){
        printf("%d = %d", n, arr[0]);
        for(int i = 1; i < cnt; i++){
            printf(" + %d", arr[i]);
        }
        printf("\n");
    }
    else{
        printf("%d is NOT perfect.\n", n);
    }
}