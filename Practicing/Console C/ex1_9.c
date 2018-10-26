#include<stdio.h>
#include<conio.h>

void main() {

	int c;
	unsigned x;
	while ((c = getchar()) != EOF) {
		switch (c) {
		case '\n':
			printf("\n");
			break;
		case '\b':
			printf("\b");
			break;
		case '\t':
			printf("\t");
		default:
			putchar(c);
		}
	}


	_getch();
}