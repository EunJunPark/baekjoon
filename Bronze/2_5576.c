#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)

void input_handler();
int solve(int score[]);
int compare(const void* a, const void* b);

int main(){
    input_handler();
    return 0;
}

void input_handler(){
    int w[10], k[10];
    
    for(int i = 0; i < 10; i++) scanf("%d", &w[i]);
    for(int i = 0; i < 10; i++) scanf("%d", &k[i]);

    printf("%d %d", solve(w), solve(k));
}

int compare(const void* a, const void* b){
    if (*(int*)a < *(int*)b) return 1;
    else if (*(int*)a > *(int*)b) return -1;
    else return 0;
}

int solve(int score[]){
    qsort(score, 10, sizeof(int), compare);
    return score[0] + score[1] + score[2];
}