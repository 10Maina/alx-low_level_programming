#include<stdio.h>
/**
 * main -entry point of program
 *
 * Return: zero if error,non zero if no error
 */
int main(void)

	printf("Size of a char: %ld bytes(s)\n", (unsigned long)sizeof(char));
	printf("Size of a long int: %ld byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %ld byte(s)\n", (unsigned long)sizeof(;long long int));
	printf("Size of a float: %ld byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
