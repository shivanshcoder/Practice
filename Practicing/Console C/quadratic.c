#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
	float a, b, c, Rootfirst, Rootsecond;
	float realpart, imagpart, disc;

	printf("Enter the values of a, b and c \n");
	scanf("%f %f %f", &a, &b, &c);

	if (!a){
		printf("Error: Roots cannot be determined \n");
		exit(1);
	}
	else{
		disc = b * b - 4.0 * a * c;
		if (disc < 0){
			printf("Imaginary Roots\n");
			printf("Rootfirst = %.2f   +%.2fi\n", -b / (2.0 * a), sqrt((disc*(-1))) / (2.0 * a));
			printf("Rootsecond = %.2f  -%.2fi\n", -b / (2.0 * a), sqrt((disc*(-1))) / (2.0 * a));
		}
		else if (disc == 0){
			printf("Roots are real and equal\n");
			printf("Rootfirst = %.2f\n", -b / (2.0 * a));
			printf("Rootsecond = %.2f\n", -b / (2.0 * a));
		}
		else if (disc > 0){
			printf("Roots are real and distinct \n");
			printf("Rootfirst = %.2f  \n", (-b + sqrt(disc)) / (2.0 * a));
			printf("Rootsecond = %.2f  \n", (-b - sqrt(disc)) / (2.0 * a));
		}
	}
	system("pause");
}