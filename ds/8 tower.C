#include <stdio.h>
#include <conio.h>

void tower(int num, char from, char to, char aux) {
	if (num == 1) {
		printf("Move disk 1 from peg %c to peg %c\n", from, to);
		return;
	}

	tower(num - 1, from, aux, to);
	printf("Move disk %d from peg %c to peg %c\n", num, from, to);
	tower(num - 1, aux, to, from);
}

void main() {
	int num;
	clrscr();
	printf("Enter the number of disks: ");
	scanf("%d", &num);

	printf("\nThe sequence of moves involved in Tower of Hanoi are:\n");
	tower(num, 'A', 'C', 'B');
	getch();
}
