#include<stdio.h>
#include"C HEADER.h"
#include "Polish_CALCULATOR.h"

#define size_array 100
#define size_stack 100
#define TRUE 1
#define FALSE 0
#define MATH_FUNC 'M'
#define NUMBER 'N'
#define CHARACTERS 'C'
#define VARIABLES 'V'
#define ENTER '\n'

#define MATH_FUNC

void push(int item);
double pop();
double solve_characters(char c);
double atof(char *s);
_Bool is_splchar(char s);
_Bool evaluate(char string[]);
int input(char string[],int *i);

double stack[size_stack];
double store_func_var[size_array];
int stackp = 0;/*
int buffer[size_stack];
int bufp = 0;*/

void main() {
	char string[size_array];

	do {
		getline(string, size_array);
	} while (evaluate(string));
	
}

double solve_func(char *s) {
	int i = 0;
	while (s[i] && s[i] != ' ')++i;
	for(int j =0;store_func_var[j];++j) 
}

double solve_characters(char c) {
	double op2 = 0;
	switch (c) {
	case '-': return pop() - pop();
	case '+': return pop() + pop();
	case '*': return pop() * pop();
	case '/': 
		op2 = pop();
		if (op2) return pop() / op2;
		else printf("Division by Zero!");
		break;
	case '%':
		op2 = pop();
		if (op2) return (int)pop() % (int)op2;
		else printf("Division by Zero!");
		break;
	case '^':
		op2 = pop();
		return pow(op2, pop());
	}
}

double atof(char *s) {
	double val, power;
	int i = 0, sign;
	for (i; isspace(s[i]); i++);

	sign = (s[i] == '-') ? -1 : 1;
	
	if (s[i] == '+' || s[i] == '-')++i;
	
	for (val = 0.0; isdigit(s[i]); ++i)
		val = 10.0 * val + (s[i] - '0');
	
	if (s[i] == '.') ++i;
	
	for (power = 1.0; isdigit(s[i]); ++i) {
		val = 10.0 *val + (s[i] - '0');
		power *= 10.0;
	}
	
	double temp = sign*val / power;
	return sign*val / power;

}

_Bool is_splchar(char s) {
	switch (s) {
	case '-': case '+': case '%': case '^': case '*': case '/': return TRUE;
	default:
		return FALSE;
	}
}

_Bool evaluate(char string[]) {
	int c;
	for (int i = 0; string[i] && (c = input(string, &i)) != EOF ; ++i) {
	//	if (c == ' ')continue;
		switch (c) {/*
		case MATH_FUNC:
			push(solve_func(&string[i]));
			break;*/
		case NUMBER:
			push(atof(&string[i]));
			break;
		case CHARACTERS:
			push(solve_characters(string[i]));
			break;
		case ENTER:
			return FALSE;
			//case VARIABLES:  ///still in development


		}
	}
	printf("%.8g\n", pop());
	return TRUE;
}

int input(char string[],int *i) {
	while (string[*i] == ' ')*i = *i +1;
	if (is_splchar(string[*i]))return CHARACTERS;
	switch (string[*i]) {
	case '-':
		if (!isdigit(string[*i +1]) && is_splchar(string[*i]))return CHARACTERS;
	case 's': case 'e': case 'c': case 'p': return MATH_FUNC;
	case EOF: return EOF;
	default:
		return NUMBER;
	}
}

void push(double item) {
	//stack[++stackp] = (bufp) ? buffer[bufp--] : item;
	if (stack == size_stack)printf("Stack Overflow!");
	else 
		stack[stackp++] = item;
}

double pop() {
	if (!stackp) printf("Stack Underflow");
	else return stack[--stackp];
}