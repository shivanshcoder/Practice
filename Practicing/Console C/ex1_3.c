#include<stdio.h>
#include<conio.h>

#define fahr(celsius) (9.0/5)*celsius + 32
#define celsius(fahr) 5.0/9.0 * (fahr-32)

void conversion(char choice) {
	int temp;
	system("cls");
	switch (choice) {
	case '1':
		printf("Celsiuis to Fahrenheit\n");
		printf("Enter Temperature:");
		scanf("%d", &temp);
		printf("Fahrenheit:%.2f\n", fahr(temp));
		break;
	case '2':
		printf("2. Fahrenheit to Celsius\n");
		printf("Enter Temperature:");
		scanf("%d", &temp);
		printf("Celsius:%.2f\n", celsius(temp));
		break;
	case '3':
		exit(0);
	}
	system("pause");
}
void main() {
	system("cls");
	char c;
	printf("Menu\n");
	printf("1. Celsiuis to Fahrenheit\n");
	printf("2. Fahrenheit to Celsius\n");
	printf("3. Exit");
	c = getchar();
	conversion(c);
	main();
	_getch();
}