#include<stdio.h>
#include<stdbool.h>
#pragma warning(disable: 4996)
#define MAX 26

bool verify(int arr[]){
    int tmp = 0;

    // false -> 홀수 배열이 두 개 이상 시 불가
    for(int i = 0; i < MAX; i++){
        if(arr[i] % 2 == 1) tmp++;
        
        if(tmp > 1){
        printf("I'm Sorry Hansoo");
        return false;
        }    
    }
    return true;
}

void relocate(int arr[]){
    int odd = 0;

    // 홀수 값 저장
    for(int i = 0; i < MAX; i++){
        if(arr[i] % 2 == 1) odd = i + 'A';
    }

    // 출력
    for(int i = 0; i < MAX; i++){
        if(arr[i] != 0){
            for(int j = 0; j < arr[i] / 2; j++) printf("%c", i + 'A');
        }
    }
    
    if(odd != 0) printf("%c", odd);
    
    // 역출력
    for(int i = MAX - 1; i >= 0; i--){
        if(arr[i] != 0){
            for(int j = 0; j < arr[i] / 2; j++) printf("%c", i + 'A');
        }
    }}

int main(void) {
    // 팰린드롬 알고리즘
    // 1. 입력 후 배열에 각각 저장(A - Z 26개)
    char name[55];       
    int count[MAX] = {0}; 

    scanf("%s", name);

    for (int i = 0; name[i] != '\0'; i++) {
        count[name[i] - 'A']++;
    }

    if(verify(count) == true){
        relocate(count);
    }
    
    return 0;
}
