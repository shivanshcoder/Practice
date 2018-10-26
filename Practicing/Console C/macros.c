#include<stdio.h>
#include<conio.h>

#define ps(sp) #sp

void pi(int a) {
	printf("   %d\n", a);
}


void main() {
//	int a = 10;
//	int aa[2] = { 0,1 };
////	aa[2] = 2;
//	int *b = &a;
//	b[1] = 5;
//	int *c = aa;
//	int *d = malloc(3);
//	d[0] = 0;
//	d[1] = 1;
//	d[2] = 3;
//	d[3] = 4;
//	pi(&a);
//	pi(&aa[0]);
//	pi(&aa[1]);
//	pi(&b);
//	_getch();
/*
	int ar[10];
	int ars[10];
	int c[10];
	long long d;
	pi(sizeof(long long));
	pi(&d);
	pi(c);
	pi(&c[9]);
	pi(ar);
	pi(&ar[9]);
	pi(ars);
	pi(&ars[9]);
	*/
	int a;
	int c[10];
	long long ar[10];
	int cs;
	printf(ps(cs));
	pi(&cs);
	printf(ps(ar));
	pi(ar);
	pi(&ar[9]);
	printf(ps(c));
	pi(c);
	pi(&c[9]);
	printf(ps(a));
	pi(&a);
	
	_getch();
}