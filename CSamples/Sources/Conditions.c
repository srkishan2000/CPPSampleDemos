/*
 * Conditions.c
 *
 *  Created on: 4 Mar 2019
 *      Author: shan
 */

# include <stdio.h>
# include <stdlib.h>

int main_Condition() {

	printf("Enter you age : ");

	int age;
	scanf("%d", &age);

	if(age <= 12 && age >=0) {
		printf("Younger");
	} else if ( age >= 13 && age <= 17 ) {
		printf("Teen");
	} else {
		printf("Old");
	}


	printf("\n");

	// Ternary Operator
	int min = 5, max = 10;
	int maxValue = max > min ? max : min;
	printf("%d", maxValue );

	printf("\n");

	min = 15, max = 10;
	maxValue = max > min ? max : min;
	printf("%d", maxValue);


	printf("\n");

	// Swich Conditon

	int marks = 90;
	switch (marks) {
		case 90:
			printf("EXCELLENT");
			break;
		case 75:
			printf("VERY GOOD");
			break;
		case 60:
			printf("GOOD");
			break;
		case 40:
			printf("OK");
			break;
		default:
			printf("GRADE UN-AVAILABLE");
	}

	return 0;
}


