#include"C HEADER.h"
#include<stdio.h>
#define si(sdf) "##sdf##"
#define sd(si) #si
///#define dprint(expr) printf(#expr)
void main() {
	int a;
	char *s;
	printf(sd(si(a)));
	//dprint(#shit);
	//printf(#a);
	system("pause");
}