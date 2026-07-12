#include <stdio.h>
#include <conio.h>

int gcd(int a, int b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

void main() {
	int a, b, c, result;
	clrscr();

	printf("Enter 3 numbers: ");
	scanf("%d %d %d", &a, &b, &c);

	result = gcd(a, gcd(b, c));

	printf("GCD of the 3 numbers is: %d", result);

	getch();
}
