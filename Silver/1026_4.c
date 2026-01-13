    #include<stdio.h>
    #pragma warning(disable: 4996)
    int a[50];
    int b[50];

    int sort(int n);

    int main(){
        int n; 
        scanf("%d", &n);
        for(int i = 0; i < n; i++) scanf("%d", &a[i]);
        for(int i = 0; i < n; i++) scanf("%d", &b[i]);
        
        printf("%d", sort(n));
    }

    int sort(int n){
        int res = 0;
        for (int i = 0; i < n - 1; i++) {
                for (int j = 0; j < n - 1 - i; j++) {
                    if (a[j] > a[j + 1]) { 
                        int temp = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = temp;
                    }
                }
            }

        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - 1 - i; j++) {
                if (b[j] < b[j + 1]) { 
                    int temp = b[j];
                    b[j] = b[j + 1];
                    b[j + 1] = temp;
                }
            }
        }

        for(int i = 0; i < n; i++){
            res += a[i] * b[i];
        }

        return res;
}