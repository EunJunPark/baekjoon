#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable: 4996)

void solve();
int compare(const void* a, const void* b);
int blackjack(int arr[], int card, int criterion);

int main(){
    solve();
}


void solve(){
    int card, criterion; 
    scanf("%d %d", &card, &criterion);
    int* arr = (int*)malloc(sizeof(int) * card);

    for(int i = 0; i < card; i++) scanf("%d", &arr[i]);

    qsort(arr, card, sizeof(int), compare);

    printf("%d", blackjack(arr, card, criterion));

    free(arr);
}

int compare(const void* a, const void* b){
    return (*(int*) a - *(int*) b);
}

int blackjack(int arr[], int card, int criterion){
    int res = 0;

    for(int i = 0; i < card - 2; i++){
        for(int j = i + 1; j < card - 1; j++){
            for(int k = j + 1; k < card; k++){
                int temp = arr[i] + arr[j] + arr[k];
                if(temp > criterion) break;
                if(temp > res && temp <= criterion) res = temp;
            }
        }
    }
    return res;
}