#include<stdio.h>
#define INT_BITS 8
unsigned getbits(unsigned x, int p, int n) {
	return (x >> (p  - n)) & ~(~0 << n);
}


unsigned setbits(unsigned x, int p, int n, int* y) {
	*y = *y >> n;
	*y = *y << n;
	*y =  *y | getbits(x, p, n);
	return x;
}
unsigned invertbits(unsigned x, int p, int n) {
	int temp;// = x & ~(~0 << (p - n));
	temp = getbits(x,p - n, p - n);
	 x = x >> p - n;
	 x = x ^ ~(~0 << (n));
	 x = x << p - n;
	 x = x|temp;
	 return x;
}

unsigned rightrot(unsigned x, int n) {
	int temp = getbits(x, n, n);
	x = x >> n;
	temp = temp << (INT_BITS - n);
	x = x | (temp);
	return x;
}

void main() {
	int n = 0x9B;
	int c = 0x6D;
	//printf("%d\n", setbits(n,5,2,c));
	setbits(n, 5, 4, &c);
	printf("\n%d", c);
	printf("\n%d",invertbits(n, 5, 3));
	printf("\n%d", rightrot(c, 2));
	printf("\n");
}