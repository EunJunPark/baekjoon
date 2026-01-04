#include<stdio.h>
#pragma warning(disable: 4996)

int main(){
    int first, sec;
    int compare = 0;
    int cnt = 0;

    scanf("%d", &first);
    sec = first;

    while(1){
        int dig = first / 10;
        int place = first % 10;
        
        compare = (place * 10) + ((dig + place) % 10);
        first = compare;
        cnt++;

        if(first == sec) break;
    }

    printf("%d", cnt);
    return 0;
}