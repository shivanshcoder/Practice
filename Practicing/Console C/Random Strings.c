#include<stdio.h>
#include<conio.h>
#define START 'a'
#define END 'z'
#include<stdlib.h>

int incre_arr_char(char *s, int index) {
	if (index < 0)return 0;
	if (s[index] != END) {
		s[index]++;
		return 1;
	}
	s[index] = START;
	index--;
	incre_arr_char(s, index);
}

void initialize(char *s,int size) {
	for (int i = 0; i < size-1; ++i) {
		s[i] = START;
	}
	s[size - 1] = '\0';
}

void start(int length) {
	char *s  ;
	int i;
	for (i = 0; i < length; ++i) {
		s = malloc(i + 2);
		initialize(s, i + 2);
		do {
			printf("%s %0x\n", s,s);
		} while (incre_arr_char(s, i));
		free(s);
	}
}

void simple() {
	char s[6];
		initialize(s, 6);
		do {
			printf("%s %0x\n", s, s);
		} while (incre_arr_char(s, 4));
}

void main() {
	start(9);
	_getch();
}