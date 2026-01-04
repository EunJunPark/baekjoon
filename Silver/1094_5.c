#include<stdio.h>
#pragma warning(disable: 4996)

int main(void) {

	int input;
	int cnt = 0;

	scanf("%d", &input);

	while (1) {
		if (input % 2 == 1) cnt++;
		input = input / 2;
		if (input <= 0) break;
	}

	printf("%d", cnt);

	return 0;
}
