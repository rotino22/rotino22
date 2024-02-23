#include <stdio.h>
// Function prototype 
void addTen (int value) ;

int main(){
	int num = 10;
	printf("Value before function call : %d\n", num);
	//call addTen with num as arguement
	addTen(num);
	printf("Value after function call: %d\n", num);
	return 0;

}
//Function to add 10 to the passed value
void addTen(int value){
	value += 10;
	printf("Value inside function:%d\n", value);
}