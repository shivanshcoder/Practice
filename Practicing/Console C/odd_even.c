/*
  This Program Finds if a number is odd and also is prime or not
*/
#include<stdio.h>
#define false 0
#define true 1

int is_prime(unsigned long num) {
	if (num < 2 || num % 2 == 0)return false;
	else if (num == 2)return true;
	for (unsigned long n = 3; n <= num / 2; n += 2) if (!(num%n))return false;
	return true;
}

int is_odd(unsigned long num) {
	if (num & 0x1)return true;
	return false;
}

void main() {
	int a = 123;
	printf("Enter a Number:");
	scanf("%d", &a);
	if (is_odd(a))printf("\nODD number\n");
	else printf("Even number\n");
	if(is_prime(a))printf("PRIME number\n");
	else printf("COMPOSITE number\n");
	system("pause");
}