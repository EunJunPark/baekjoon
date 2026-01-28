#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)

int get_min(int current, int go, int n);

int main() {
    int current, go, n;

    scanf("%d %d", &current, &go);
    scanf("%d", &n);

    printf("%d", get_min(current, go, n));

    return 0;
}

int get_min(int current, int go, int n) {
    int min_res = abs(current - go);
    int preset;
    int temp;

    for (int i = 0; i < n; i++) {
        scanf("%d", &preset);
        
        temp = abs(preset - go) + 1;

        if (temp < min_res) {
            min_res = temp;
        }
    }

    return min_res;
}