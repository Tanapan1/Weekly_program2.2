#include<stdio.h>
int main() {
	while (1) {
		int count = 0;
		int x,i;
		printf("Enter number : ");
		scanf_s("%d", &x);
		if (x == -99) break;
		for (i = 2; i <= x; i++) {
			if (x % i == 0) {
				count = count + 1;
			}
		}
		if (count == 1) {
			printf("%d is prime\n", x);
		}
		else printf("%d is not prime\n", x);
	}
	return 0;
}