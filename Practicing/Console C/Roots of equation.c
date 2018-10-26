/*
  Finds Roots of a Quadratic Equation
*/
#include<stdio.h>
#include<conio.h>
#include < math.h >

//makes the negative number positve
int make_posit(int a) {
	return (a < 0) ? a*(-1) : a; 
}
void printint(int A) { printf("%d", A); }
void printfloat(float A) { printf("%f", A); }

//prints and takes a integer input
int input(const char* string, int *num) {
	printf(string);
	scanf("%d", &num);
	return num;
}
//calculates teh roots of quadratic equation
void calculate_root(int a, int b, int c) {
	long int desc = b*b - 4 * a*c;
	double temp;

	temp = sqrt(make_posit(desc));
	if (desc < 0) {
		printf("\nThe First root:%f+%f i", -b / (2.0 * a), temp / (2.0 * a));
		printf("\nThe Second root:%f %f i", -b / (2.0 * a), -temp / (2.0 * a));
		return;
	}
	printf("\nThe First root:%f", (-b + temp) / 2 * a);
	printf("\nThe Second root:%f", (-b - temp) / 2 * a);
}

void equation_in() {
	int a, b, c;
	printf("Equation of type a*X^2 + b*X +c\n");
	a = input("\nEnter the value of a:", &a);
	b = input("\nEnter the value of b:", &b);
	c = input("\nEnter the value of c:", &c);
	calculate_root(a, b, c);
}

void main() {
	equation_in();
	_getch();
}