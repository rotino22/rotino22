#include <stdio.h>


int computeSum(int arr[], int size);

int main(){
	int numbers [] = {1,2,3,4,5,10};
	int size = sizeof(numbers) / sizeof (numbers[0]);
	int sum = computeSum(numbers, size);

	printf("The sum of the array elements is: %d\n", sum);
	
	return 0;


}
// Function definition
int computeSum(int arr[], int size){
	int sum = 0;
	for (int i = 0; i < size; i++){
		sum += arr[i];
	}
	return sum;
}