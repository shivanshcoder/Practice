#include<stdio.h>
#include<conio.h>

void main() {
	printf("\t\t\tTemperature Conversion Program(celsenheit to Celsius)\n");
	for (int cels = 300; cels >= 0; cels -= 20)printf("%d\t\t\t%d\n", cels, (9 / 5 * cels + 32));
	_getch();
}