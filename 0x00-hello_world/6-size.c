#include <stdio.h>
/**
 * main - print the string in the put function
 * Return: 0 to end the program
 */
int main(void)

{
	char characterVar;

	int integerVar;

	long longVar;

	long longLongVar;

	float floatVar;


	printf("Size of a char: %ld byte(s)\n", sizeof(characterVar));

	printf("Size of an int: %ld byte(s)\n", sizeof(integerVar));

	printf("Size of a long int: %ld byte(s)\n", sizeof(longVar));

	printf("Size of a long long int: %ld byte(s)\n", sizeof(longLongVar));

	printf("Size of a float: %ld byte(s)\n", sizeof(floatVar));

	return (0);
}
