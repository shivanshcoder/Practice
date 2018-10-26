/*
  This Program converts binary to decimal
*/
#include<stdio.h>
#define bits 8
void input(char *s, char *format, void *a) {
	printf(s);
	scanf(format, a);
}

void swap(char* a, char* b) {
	char temp = *a;
	*a = *b;
	*b = temp;
}

void reverse(char* s,int last) {  //reverses a array
	for (int i = 0; i < last; ++i,--last) {
		swap(&s[i], &s[last]);
	}
}

void complement(char* s, int last ) {  //Finds the Complement of a binary array
	for (int i = 0; i < last; ++i)
		if (s[i] == '1')s[i] = '0';
		else if (s[i] == '0')s[i] = '1';
}

void fill_array(char *s) { //fills the remaining array with zeros
	int i = 0;
	for (i;(i<bits && s[i]); ++i);
	reverse(s, i-1);
	for (i; i < bits; ++i)s[i] = '0';
}

void subtract_binary_1(char *s) {
	for (int i = 0; i < bits; i++) {
		if (s[i] == '1') {
			s[i] = '0';
			break;
		}
		s[i] = '1';
	}
}
void add_binary_1(char *s) {
	for (int i = 0; i < bits; i++) {
		if (s[i] == '0') {
			s[i] = '1';
			break;
		}
		s[i] = '0';
	}
}

long long converter(char *s) {
	long long decimal = 0;
	long long helper = 1;
	long long temp;
	for (int i = 0; i < bits; ++i) {
		temp = s[i] - '0';
		decimal += (helper*temp);
		helper *= 2;
	}
	return decimal;
}

void main() {
	char binary[bits+1];
	int choice = 0;
	int temp = 0;
	int sign = 1;
	input("Enter the Binary:", "%s", binary);

	fill_array(binary);

	printf("1. Unsigned\n2. 1's Complement\n3. 2's Complement\n");
	input("\nChoice(1-3):", "%d", &choice);

	switch (choice) {
	case 1:
		temp = converter(binary);
		break;
	case 2:
		if (binary[bits - 1] == '1') {
			sign *= (-1);
			complement(binary, bits );
		}
		temp = sign*converter(binary);
		break;
	case 3:
		if (binary[bits - 1] == '1') {
			sign *= (-1);
			subtract_binary_1(binary);
			complement(binary, bits  );
		}
		temp = sign*converter(binary);
		break;

	}
	printf("\n%d\n", temp);
	system("pause");
}