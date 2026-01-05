#include<stdio.h>
#include <string.h>
#include <stdbool.h>
#pragma warning(disable: 4996)
#define MAX 15

char arr[MAX];
char res[MAX];
int pw_len, total_chars;


void sort(char arr[], int total_chars){
    char temp;

    for(int i = 0; i < total_chars -1; i++){
        for(int j = i + 1; j < total_chars; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // for(int i = 0; i < total_chars; i++) 
    //     printf("%c ", arr[i]);
}

void combination(int depth, int next){


    // 모음 자음 검사
    if(depth == pw_len){
        int consonant = 0;
        int vowel = 0;
        for(int i = 0; i < pw_len; i++){
            if(res[i] == 'a' || res[i] == 'e' || res[i] == 'i' || res[i] == 'o' || res[i] == 'u') vowel++;
            else consonant++;
        }

        if(consonant >= 2 && vowel >= 1){
            for(int j = 0; j < pw_len; j++){
                printf("%c", res[j]);
            }
            printf("\n");
        }
        return;
    }

    for(int i = next; i < total_chars; i++){
        res[depth] = arr[i];
        combination(depth + 1, i + 1);
    }

}

int main(void){

    scanf("%d %d", &pw_len, &total_chars);

    for(int i = 0; i < total_chars; i++){
        scanf(" %c", &arr[i]);
    }

    sort(arr, total_chars);
    combination(0, 0);

    return 0;
}