/*
 * MathOperators.c
 *
 *  Created on: 4 Mar 2019
 *      Author: shan
 */

# include <stdio.h>
# include <stdlib.h>

int main_mathoperator() {
	/**
	 * Multiplicative and Additive operators
	 * 	+ (Addition)
	 * 	- (Substraction)
	 * 	* (Multiplication)
	 * 	/ (Division)
	 * 	% (Modulus)
	 */

	int a = 10, b = 5;
	int sum;

	// Addition
	sum = a + b;
	printf("The Sum of a and b = %d \n", sum);

	sum = a - b;
	printf("The Subtration of a and b = %d \n", sum);

	sum = a * b;
	printf("The Multiplication of a and b = %d \n", sum);

	sum = a / b;
	printf("The Division of a and b = %d \n", sum);

	sum = a % b;
	printf("The Modulus of a and b = %d \n", sum);

	return 0;

}
