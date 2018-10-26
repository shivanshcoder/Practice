/*
  This program has a getline function and reversing string function
*/
#include<stdio.h>


void swap(char* a, char *b) {
	char temp = *a;
	*a = *b;
	*b = temp;
}

void getline(char *string,int size) {
	char c;
	int i;
	for (i = 0; i<size && (c = getchar()) != '\n'; ++i)
		string[i] = c;
	if (i == size)string[i - 1] = '\0';
	else string[i] = '\0';
}

int reverse(char *s, char last_char) {
	int last, i, j;
	for (last = 0; s[last] && s[last] != last_char; ++last);
	j = last;
	last--;
	for (i = 0; i <= last; ++i, --last)
		swap(&s[i], &s[last]);

	return j;
}
