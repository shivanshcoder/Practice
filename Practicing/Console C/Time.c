/*
  This Program converts the time from seconds to larger units
*/
#include<stdio.h>

void print_llu(char* s,unsigned long long num) {
	printf(s);
	printf("%llu\n", num);
}

void main() {
	unsigned long long seconds, minutes, hours,days;
	printf("Enter time in Seconds:");
	scanf("%llu", &seconds);
	minutes = seconds / 60;
	seconds = seconds % 60;

	hours = minutes / 60;
	minutes = minutes % 60;

	days = hours / 24;
	hours = hours % 24;

	print_llu("Seconds:", seconds);
	print_llu("Minutes:", minutes);
	print_llu("Hours:", hours);
	print_llu("Days:", days);
	system("pause");
}