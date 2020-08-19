#include<stdio.h>
int main() {
	float radius;
	float pi = 3.14;
	printf("Enter your radius (cm) :");
	scanf_s("%f", &radius);
	printf("The area of the circle is %.2f cm^2", pi * radius * radius);
	return 0;
}