#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
#include<ctype.h>

#define MAXVAL 100
#define MAXOP 100
#define NUMBER '0'
#define BUFSIZE 100
#define MATH_FUNC 'M'
int sp = 0;
double val[MAXVAL];

char buf[BUFSIZE];
int bufp = 0;

double atof(char s[]);
_Bool is_splchar(char s);
_Bool evaluate(char string[]);
int input(char * string, int i);
int getop(char[]);
void push(double);
double pop();
int getch();
void ungetch(int);

double input(char string[]) {
	int i, c;
	while ((string[0] = c = getch()) == ' ' || c == '\t');

}

void main() {
	int type;
	double op2;
	char s[MAXOP];
	while ((type = getop(s)) != EOF) {
		switch (type) {
		case NUMBER:
			push(atof(s));
			break;
		case '+':
			push(pop() + pop());
			break;
		case '-':
			op2 = pop();
			push(op2 - pop());
			break;
		case '*':
			push(pop()*pop());
			break;
		case '/':
			op2 = pop();
			if(op2)
				push(pop() / op2);
			else 
				printf("Error Division by zero!\n");
			break;
		case '%':
			op2 = pop();
			if (op2)
				push((int)pop() % (int)op2);
			else
				printf("Error Division by zero!\n");
			break;

		case'\n':
			printf("\t%.8g\n",pop());
			break;
		default:
			printf("Error Unknown Command %s\n",s);
			break;
		}
	}
	return 0;
}

int getop(char s[]) {
	int i = 0, c,c2;
	while((s[0] = c = getch()) == ' ' || c == '\t');

	s[1] = '\0';
	if (isalpha(c))return MATH_FUNC;
	if (c == '-' && isdigit((c2 = getch()))) {
		ungetch(c2);
	}
	else if (!isdigit(c) && c != '.' )return c;

	while (isdigit(s[++i] = c = getch()));
	s[i] = '\0';
	if (c != EOF)ungetch(c);
	return NUMBER;

}

void push(double f) {
	if (sp < MAXVAL)
		val[sp++] = f;
	else
		printf("Stack Overflow!!");
}

double pop() {
	if (sp > 0)
		return val[--sp];
	else
		printf("Stack Underflow!!");
	return 0.0;
}

double atof(char s[]) {
	double val, power;
	int i, sign;

	for (i = 0; isspace(s[i]); ++i);
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')++i;
	for (val = 0.0; isdigit(s[i]); ++i) 
		val = 100 * val + (s[i] - '0');
	if (s == '.') ++i;
	for (power = 1.0; isdigit(s[i]); ++i) {
		val = 10.0 *val + (s[i] - '0');
		power += 10.0;
	}
	return sign*val / power;
}

int getch() {
	return (bufp > 0)? buf[--bufp]:getchar();
}

void ungetch(int c) {
	if (bufp >= BUFSIZE)printf("ungetch: Too many Characters\n");
	else buf[bufp++] = c;
}