#include<stdio.h>
void main(){
	float a,b, sum, sub, mul, div;
	printf("Enter 2 numbers: ");
	scanf("%f %f", &a, &b);

	sum = a + b;
	printf("Sum is equal to: %.2f\n", sum);

	if(a<b){
		sub = b - a;
	}else{
		sub = a - b;
	}
	printf("Sub is %.2f\n", sub);

	mul = a * b;
	printf("Multiplication: %.2f\n", mul);

	div = a/b;
	printf("Division : %.2f\n", div);

}
