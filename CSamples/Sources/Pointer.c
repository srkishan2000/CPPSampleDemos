/*
 * Pointer.c
 *
 *  Created on: 4 Mar 2019
 *      Author: shan
 */


# include <stdio.h>
# include <stdlib.h>

// Passing pointer as an argument
void getValue(int *my_pointer){
	*my_pointer = 10000;
	return;
}

//Array Pointer as an argument
int getSum(int *my_array_pointer, int size) {

	int sum = 0;
	for ( int i = 0;  i < size; i++) {
		sum += my_array_pointer[i];
	}

	return sum;
}


// A pointer is a variable whose value is the address of another variable
int main() {

	int val = 30;

	int *pointer_p;
	pointer_p = &val;

	printf("address of val = %x \n", &val);
	printf("value of pointer variable = %x \n", pointer_p);
	printf("address of pointer = %d \n", *pointer_p);


	// pointer Array
	int val_array[3] = {30, 40, 50};

	int *pointer_array[3];

	for ( int i = 0;  i < 3; i++) {
		pointer_array[i] = &val_array[i]; // Assign the address of array elements
	}

	for ( int i = 0;  i < 3; i++) {
		printf("value of val_array[%d] = %d \n", i, *pointer_array[i]);
	}

	// Passing pointer as an argument
	int get_the_value;
	getValue(&get_the_value);
	printf("the value of get_the_value = %d \n", get_the_value);


	//Array Pointer as an argument
	int my_array[5] = {10, 20, 30, 40, 50};
	int mySum = getSum(my_array, 5);
	printf("the Value of my_array Sum = %d \n", mySum);

}


