#include<stdio.h>
int main() {
	int x, y, z;
	printf("Enter 3 Number : ");
	scanf_s("%d ", &x);
	scanf_s("%d ", &y);
	scanf_s("%d", &z);

	if (x >= y && x >= z) {
		printf("\nThe largest number is %d", x);
	}
	else if (y >= x && y >= z) {
		printf("\nThe largest number is %d", y);
	}
	else if (z >= x && z >= y) {
		printf("\nThe largest number is %d", z);
	}
	return 0;
}