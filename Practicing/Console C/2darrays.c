#include<stdio.h>
#define sp(s) #s
#define FOR(a,b) for(a = 0;a<b;++a)
void main() {
	char* a[5];
	int i ,j;
	a = malloc(4);
	FOR(i, 5) {
		printf("%d  ", &a[i]);
		a[i] = malloc(5);
		//printf("%d\n", &a[i]);
	}
	printf("\n");
	i = 0;
	FOR(i, 5) {
		printf("%d  ->", &a[i]);
		FOR(j, 5)
			printf("%s%d%s%d%s %d  ",sp(a[),i,sp(][),j,sp(]), &a[i][j]);
		printf("\n");
	}

	/*
	FOR(i, 5) {
		FOR(j, 5)
			printf("%d  ", a[i][j]);
		printf("\n");
	}*/
	system("pause");
}