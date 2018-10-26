/*
  Program to Calculate area of various shapes
  Copyright not applicable 
*/

#include<stdio.h>

int area_rect(int len, int wid) {
	return len*wid;
}
int max(int a, int b) {
	return (a > b) ? a : b;
}
float area_circle(int radius) {
	return 3.14*radius*radius;
}
int area_sqaure(int side) {
	return area_rect(side, side);
}

void main() {
	int len, wid,rec_area,radius,maxx = 0;
	float circle_area;
	printf("Enter Sides of Rectangle:\n"); 

	printf("Width:");
	scanf("%d", &wid); 

	printf("Length:");
	scanf("%d", &len);
	
	rec_area = area_rect(len, wid);
	printf("Area of Rectagnle is:%d\n",rec_area );

	printf("Enter Radius of a Circle:\nRadius:");
	scanf("%d", &radius);
	circle_area = area_circle(radius);
	printf("Area of Circle:%f\n", circle_area);
	
	printf("Max Area is :%d\n",max(circle_area,rec_area));
	system("pause");
}