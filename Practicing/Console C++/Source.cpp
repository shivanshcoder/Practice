#include<iostream>
#include<chrono>
using namespace std;
using namespace chrono;

int nth = 0;
void temp(int *temp,int size) {
	for (int i = 0; i < size; ++i) {
		temp[i] = size;
	}
}

void temp2(int *temp, int size) {
	register int i;
	for (i = 0; i < size; ++i) {
		temp[i] = size;
	}
}

#define stamp cout << endl << ++nth << " th stamp at: " << duration_cast<microseconds>(system_clock::now().time_since_epoch()).count();
void main() {
	int *teArr;
	teArr = new int[100000000];

	stamp;
	temp(teArr, 100000000);

	stamp;
	temp2(teArr, 100000000);

	stamp;
	system("pause");
}