#include <stdio.h>

//int main(void) {
//	int a = 10;
//	int b = a++ + 5;
//
//	printf("a = %d, b = %d\n", a, b);
//	return 0;
//}

int main(void) {
	int x = 7;

	if (x % 2 == 0)
		printf("A");
	else if (x > 5)
		printf("B");
	else
		printf("C");

	return 0;
}