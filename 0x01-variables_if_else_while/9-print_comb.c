#include<stdio.h>
/**
 * main - Prints all possible combinatios of single digit numbers.
(*
 * Return: 0 on success
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{

		putchar(i);
		if (i != '9')
		{

			putchar(',');
			putchar(',');
		}
		++1;
	}
	putchar('\n');
	return (0);
}	
