/*
 * main.c
 *
 *  Created on: 4 Mar 2019
 *      Author: shan
 */

# include <stdio.h>
# include <stdlib.h>

int main_0() {
	printf("Hello Shan to the world of C !!! \n"); /// "\n" is a new line
	printf("%d \n%d \n%d\n", 10,20,30);  // "%d" is  a place holder for the integer
	printf("%d \n", 50);  // integer
	printf("%ld \n", 5000000000); // large integer
	printf("%f \n", 50.00); // float
	printf("%lf \n", 5000000000.0000000); // large float
	printf("%c \n", 'S'); // character
	printf("%s \n", "<<< Welcome >>>"); // String
	printf("Hello %s to the world of C !!! \n", "Shan"); // String place holder
	printf("%X \n", 16); // Hexvalues

	puts("This is my C Program \n");

	return 0;
}
