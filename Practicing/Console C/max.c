/*
  This Program is to find max number out of 3 numbers
  Copyright not applicable
*/
#include<stdio.h>
#include<conio.h>

unsigned long long maxx(unsigned long long, unsigned long long);

unsigned long long maxx(unsigned long long n1, unsigned long long n2) {
	if (n1 > n2)return n1;
	return n2;
}

void main() {
	printf("%llu", maxx(123, maxx(456, 789)));
	_getch();
}