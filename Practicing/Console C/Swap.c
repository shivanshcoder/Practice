#include<stdio.h>

void swap(int *a,int *b) {
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
	
}

void enter_int(char * s, int *p) {
	printf(s);
	scanf("%d", p);
}
void main() {
	int a = 1;
	enter_int("Enter value of a:",&a);
	int b = 12;
	enter_int("Enter value of b:", &b);
	printf("\na = %d\n", a);
	printf("b = %d\n", b);
	printf("\nAfter  SWAP\n\n");
	swap(&a, &b);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	system("pause");
}