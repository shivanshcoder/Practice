#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int inc(int a) {
	printf("S");
	return a + 1;
}

struct t {
	int a;
	int b;
	int c[100];
	int d[1000];
	int *e;
};

//int temp();

int func(a, b, c)
int a;
int b, c;
{
	return a + b + c;
}

struct type {
	unsigned tempzz : 1;
	unsigned temzz2 : 3;
};

union sec {
	int a;
	struct type a2;
};

int main() {
	
	union sec tt;
	tt.a2.tempzz = 1;
	tt.a2.temzz2 = 7;
 	return 0;
}

int temp2(struct t str) {
	printf("EEEEE"); return 0;
}
int temp(struct t* ptr) {
	printf("ddddd"); return 0;
}
