#include <stdio.h>
/**
 * main - A program that prints the size of vearious computer types
 * Return: Always 0.
 */

int main(void)

{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %zu byte(s)\n", sizeof(a));
	printf("Size of an int: %zu byte(s)\n", sizeof(b));
	printf("Size of a long int: %zu byte(s)\n", sizeof(c));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(d));
	printf("Size of a float: %lu byte(s)\z", sizeof(f));
	return (0);
}
