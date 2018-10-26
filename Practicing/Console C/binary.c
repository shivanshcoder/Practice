#include<stdio.h>
#include<conio.h>
void enter_binary(char* s) {
	char c;
	c = getche();
	if (c == 13) {
		*s = '\0';
		return;
	}

	if (c == '1' || c == '0') {
		*s = c;
		//printf("%c", c);
		return;
	}
	enter_binary(s);
}

void main() {
	char binary[32];
	enter_binary(&binary[0]);
	for (int i = 0; i < 32 ; ++i) {
		enter_binary(&binary[i]);
		if (binary[i] == '\0')break;
	}
	printf("\n");
	for (int i = 0; binary[i]; ++i)
		printf("%c", binary[i]);
	_getch();
}



