#include <stdio.h>
#pragma warning(disable: 4996)

void input_handler();
int get_grade(int p);

int main(){
    input_handler();
    return 0;
}

void input_handler(){
    int n, k;
    scanf("%d %d", &n, &k);
    
    for(int i = 0; i < k; i++){
        int g;
        scanf("%d", &g);
        int p = (g * 100) / n;
        printf("%d ", get_grade(p));
    }
}

int get_grade(int p){
    if(p <= 4) return 1;
    else if(p <= 11) return 2;
    else if(p <= 23) return 3;
    else if(p <= 40) return 4;
    else if(p <= 60) return 5;
    else if(p <= 77) return 6;
    else if(p <= 89) return 7;
    else if(p <= 96) return 8;
    else return 9;
}