#include <stdio.h>

//Function prototype with pointer parameters for pass by reference
void swap (int *x, int *y);

int main(){
	int a = 10;
	int b = 20;

	//print original values
	printf("Before swap: a = %d, b = %d\n", a, b);

	//call swap function with the adresses of 'a' and 'b'
	swap(&a,&b);

	//print values after swap
	printf(" After swap: a = %d, b = %d\n", a, b);

	return 0;
}
// Function to swap the values of two intergers 
void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}