#include <stdio.h>
#pragma warning(disable: 4996)

int count(int n);

int main(){
    int t, n, m;
    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        scanf("%d %d", &n, &m);
        int total = 0;
        
        for(int j = n; j <= m; j++) total += count(j);
        
        printf("%d\n", total);
    }
}

int count(int n){
    if (n == 0) return 1;
    int cnt = 0;
    while (n > 0) {
        if (n % 10 == 0) cnt++;
        n /= 10;
    }
    return cnt;
}