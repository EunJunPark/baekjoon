#include<stdio.h>
#pragma warning(disable: 4996)

int Mourning();

int main(){
    printf("%d", Mourning());
    return 0;
}

int Mourning(){
    int n, m;
    int p, s;
    int min_p = 1001;
    int min_s = 1001;
    int res = 0;

    scanf("%d %d", &n, &m);

    for(int i = 0; i < m; i++){
        scanf("%d %d", &p, &s);
        if(p < min_p) min_p = p;
        if(s < min_s) min_s = s;
    }

    if(min_p > min_s * 6) min_p = min_s * 6;

    res = (n / 6) * min_p;

    if((n % 6) * min_s > min_p) res += min_p;
    else res += (n % 6) * min_s;

    return res;
}