/*
  This program prints the decimal number into Binary Form
*/

#include<stdio.h>
#include<climits>

unsigned getbits(unsigned x, int p, int n) {
	return (x >> (p - n) & ~(~0 << n));
}

unsigned setbits(unsigned x, int p, int n, unsigned y) {
	unsigned temp = getbits(x, p, n);
	y = y | temp;
	return y;
}

void bits(int num) { //direct printing
	for (int i = 0; i < 30; ++i)printf("0"); //4 byte int suffucient 
	while (num) {
		printf("%d", num & 0x1);
		num = num >> 1;
		printf("\b\b");
	}
}
void test(int num) { //using array
	int val = 0;
	int out[50];
	int temp = num;
	for (val = 0; temp; ++val) {
		out[val] = temp & 0x1;
		temp = num >> 1;
		num = temp;
	}
	val--;
	while (val>=0) {
		printf("%d", out[val]);
		val--;
	}
}

void main() {
	int num = INT_MAX;
	scanf("%d", &num);
	bits(num);
	printf("\n");
	test(num);
	printf("\n");
	system("pause");
}