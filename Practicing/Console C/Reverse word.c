/*
Program to Reverse a individual words in a string
Copyright not applicable
*/
#include<stdio.h>
#include<conio.h>
#define size 50
#include<string.h>
void swap(char* a, char *b) {
	char temp = *a;
	*a = *b;
	*b = temp;
}

void getline(char *string,int Size) {
	char c;
	int i;
	for (i = 0;i<Size && (c = getchar()) != '\n';++i) 
		string[i] = c;
	if (i == Size)string[i - 1] = '\0';
	else string[i] = '\0';
}

int reverse(char *s,char last_char) {
	int last,i,j;
	for (last = 0; s[last] && s[last] != last_char; ++last);
	j = last;
	last--;
	for (i = 0; i <= last; ++i, --last) 
		swap(&s[i], &s[last]);
	
	return j;
}

void main() {
	char string[size];
	getline(string,size);

	for (int i = 0; i < size && string[i];++i) {

		if (string[i] == ' ')continue;
		i += (reverse(&string[i],' ')-1);  //it is because the space between words gets skipped and sometimes '\0' also gets skipped
	}
	printf("\n%s", string);
	printf("\n");
	
}