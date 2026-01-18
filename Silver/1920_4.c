#include<stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)

#define Max 100000

int compare(const void *a, const void *b);
int binarySearch(int *arr, int size, int target);

int main(){
    
    int n, m;
    int arrN[Max], arrM[Max];

    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &arrN[i]);
    scanf("%d", &m);
    for(int i = 0; i < m; i++) scanf("%d", &arrM[i]);


    qsort(arrN, n, sizeof(int), compare);

    for(int i = 0; i < m; i++){
        printf("%d\n", binarySearch(arrN, n, arrM[i]));
    }
}

int compare(const void *a, const void *b){
    int num1 = *(int *)a;
    int num2 = *(int *)b;

    if (num1 < num2) return -1;
    if (num1 > num2) return 1;
    return 0;
}

int binarySearch(int *arr, int size, int target){
    int left = 0; 
    int right = size - 1; 

    while (left <= right)
    {  
        int mid = (left + right) / 2;
        if(arr[mid] == target) return 1;
        else if(arr[mid] > target) right = mid - 1;
        else if(arr[mid] < target) left = mid + 1;
    }
    return 0;   
    
}