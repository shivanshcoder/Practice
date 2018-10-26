#include<stdio.h>
#include<conio.h>

void main() {
	int blanks = 0, tabs = 0, newlines = 0;
	char c;
	while ((c = getchar()) != EOF) {
		switch (c) {
		case '\t': tabs++;
			break;
		case '\n': newlines++;
			break;
		case ' ': blanks++;
			break;
		}
	}
	printf("Number of \nBlanks:%d\nTabs:%d\nNewlines:%d", blanks, tabs, newlines);
	_getch();
}