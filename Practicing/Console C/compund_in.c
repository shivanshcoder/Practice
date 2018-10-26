/*
  Program to Calculate Simple and Compund Interest
  Copyright not applicable
*/
#include<stdio.h>
#include<math.h>

void print_in(char* print, char* format, void* a) {
	printf(print);
	scanf(format, a);
}

double compund_int(int principal, double rate, int years) {
	return principal*pow((1 + rate / 12), 12 * years);
}
double simple_int(int principal, double rate, int years) {
	return principal*(1 + rate*years);
}

void enter_info(int *principal, double *rate, int *years) {
	system("cls");
	print_in("enter principal:", "%d", principal);
	print_in("enter rate of interest:", "%lf", rate);
	print_in("enter tenure in years:", "%d", years);

}
void main() {
	int principal, years;
	double rate,temp;
	int choice;
	system("cls");

	printf("Interest Calculator\n");
	printf("1. Compound Interest\n");
	printf("2. Simple Interest\n");
	printf("3. Exit\n");

	print_in("Choice(1-3):", "%d", &choice);
	if (choice == 3)return;

	enter_info(&principal, &rate, &years);
	//system("cls");
	switch (choice) {
	case 1: 
		printf("\nThe Calculated Total Amount is: %lf \n", compund_int(principal, rate, years));
		break;
	case 2:
		printf("\nThe Calculated Total Amount is: %lf \n", simple_int(principal, rate, years));
		break;
	}
	system("pause");
	main();
}