#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable: 4996)

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main(void){
    int n;

    scanf("%d", &n); 
    if(n == 0) { printf("0"); return 0; }

    int arr[n];

    double x = n * 0.15; 
    int trmean = (int)(x + 0.5);

    // printf("\n");
    // printf("n: %d, x: %f, trmean: %d\n",n, x, trmean);
    
    double sum = 0;

    // 입력
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }

    qsort(arr, n, sizeof(int), compare);

        for(int i = trmean ; i < n - trmean; i++){
            sum = sum + arr[i];
            // printf("%d: %d, sum: %f\n", i, arr[i], sum);
        }
        double y = sum / (n - trmean * 2);
        int res = (int)(y + 0.5);

        // printf("y: %f, res: %d\n", y, res);
        printf("%d", res);

}