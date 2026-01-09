#include<stdio.h>
#pragma warning(disable: 4996)
int arr[10];
int temp = 0;  

void max(){
    for(int i = 0; i < 10; i++){
        temp = temp + arr[i];
        int tempB = temp - arr[i];

        // printf("i: %d, temp: %d, tempB: %d\n", i, temp, tempB);
        if(temp > 100){
            // i, i + 1 비교 후 더 가까운거
            if(temp - 100 < 100 - tempB){
                printf("%d", temp); return;
            }
            if(temp - 100 > 100 - tempB){
                printf("%d", tempB); return;
            }
            if(temp - 100 == 100 - tempB){
                printf("%d", temp); return;
            }
        }
        else if(temp == 100){
            printf("%d", temp); return;
        }
    }
    printf("%d", temp);
}

int main(){
    for(int i = 0; i < 10; i++) scanf("%d", &arr[i]);
    max();
}