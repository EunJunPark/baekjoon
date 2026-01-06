#include<stdio.h>
#include <string.h>
#include <stdbool.h>
#pragma warning(disable: 4996)

int arr[16];
int res[6];
int n; 

void solve(int depth, int next){
    if(depth == 6){
        for(int i = 0; i < 6; i++){
            printf("%d ", res[i]);
        }
        printf("\n");
        return;
    }
    
    for(int i = next; i < n; i++){
        res[depth] = arr[i];
        solve(depth + 1, i + 1);        
    }
}

int main(){
    bool fir = true;

    while (scanf("%d", &n) && n != 0) {
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        if(fir == false)
            printf("\n");   
        solve(0, 0);
        fir = false;
    }
}
