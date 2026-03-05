#include <stdio.h>
#pragma warning(disable: 4996)

void input_handler();
long long solve(long long n);
int is_prime(long long n);

int main(){
    input_handler();
    return 0;
}

void input_handler(){
    int t;
    long long n;
    scanf("%d", &t);
    while(t--){
        scanf("%lld", &n);
        printf("%lld\n", solve(n));
    }
}

int is_prime(long long n){
    if(n <= 1) return 0;
    if(n == 2 || n == 3) return 1;
    if(n % 2 == 0) return 0;
    
    for(long long i = 3; i * i <= n; i += 2){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

long long solve(long long n){
    if(n <= 2) return 2;
    
    while(is_prime(n) == 0){
        n++;
    }
    return n;
}