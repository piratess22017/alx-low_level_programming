#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all the alphabets in small letter
 * all the 26 letters
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch
	;
	for (ch = 'a'; ch <= 'z' ; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
