#include <stdio.h>
#include <limits.h>

int main() {

	printf("The number of bits in a byte %d\n", CHAR_BIT);
	printf("The size of CHAR =%d\n", sizeof(char));
	printf("The minimum value of SIGNED CHAR = %d\n", SCHAR_MIN);
	printf("The maximum value of SIGNED CHAR = %d\n", SCHAR_MAX);
	printf("The maximum value of UNSIGNED CHAR = %d\n", UCHAR_MAX);

	printf("The size of SHORT =%d\n", sizeof(short));
	printf("The minimum value of SHORT INT = %d\n", SHRT_MIN);
	printf("The maximum value of SHORT INT = %d\n", SHRT_MAX);
	printf("The maximum value of USHORT INT = %d\n", USHRT_MAX);

	printf("The size of INT =%d\n", sizeof(int));
	printf("The minimum value of INT = %d\n", INT_MIN);
	printf("The maximum value of INT = %d\n", INT_MAX);
	printf("The maximum value of UINT = %u\n", UINT_MAX);

	printf("The size of LONG =%d\n", sizeof(long));
	printf("The minimum value of LONG = %ld\n", LONG_MIN);
	printf("The maximum value of LONG = %ld\n", LONG_MAX);
	printf("The maximum value of ULONG = %lu\n", ULONG_MAX);

	printf("The size of LONG LONG =%d\n", sizeof(long long));
	printf("The minimum value of LLONG = %llu\n", LLONG_MIN);
	printf("The maximum value of LLONG = %llu\n", LLONG_MAX);
	printf("The maximum value of ULLONG = %llu\n", ULLONG_MAX);

	system("pause");
	return(0);
}