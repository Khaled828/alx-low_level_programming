#include <stdio.h>
/**
 * main - A program that prints the size of vaiouse computer types
 * Return: 0 (Success)
 */
int main(void)
{
	char x;
	int y;
	long int k;
	long long int m;
	float f;

	printf("Size of a char: %lu byte\n", (unsigned long)sizeof(x));
	printf("Size of an int: %lu byte\n", (unsigned long)sizeof(y));
	printf("Size of a long int: %lu byte\n", (unsigned long)sizeof(k));
	printf("Size of a long long int: %lu byte\n", (unsigned long)sizeof(m));
	printf("Size of a float: %lu byte\n", (unsigned long)sizeof(f));
	return (0);
}
