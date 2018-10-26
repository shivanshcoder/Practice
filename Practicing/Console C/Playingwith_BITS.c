/*
  Some miscellaneous functons using bitwise operators
*/
#include<stdio.h>
#define ENDL printf("\n")

void bits(int num) { //direct printing
	for (int i = 0; i < 30; ++i)printf("0"); //4 byte int suffucient 
	while (num) {
		printf("%d", num & 0x1);
		num = num >> 1;
		printf("\b\b");
	}
}


unsigned getbits(unsigned x, int p, int n) {
	return (x >> (p - n) & ~(~0 << n)) ;
}

unsigned setbits(unsigned x, int p, int n, unsigned y) {
	unsigned temp = getbits(x, p, n);
	y = y | temp;
	return y;
}

unsigned invert(unsigned x, int p, int n) {
	x = x|getbits(x,p,n)
}

void main() {
//	printf("%d", getbits(31, 4, 3));
	int i = 14;
	int j = 1;
	//j = setbits(i, 2, 2, j);
	printf("%d",4^6);
	system("pause");//1248 16 32 64 128
}