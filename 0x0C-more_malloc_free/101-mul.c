#include "main.h"

/**
 * adding_all_mul - sum all the addition to know the multiplication result
 * @a: number 1
 * @len_a: lenght of number 1
 * @b: number 2
 * @len_b: lenght of number 2
 * Return: Addition pointer to the total resul of the  multiplication
 */
add_t *adding_all_mul(char *a, int len_a, char *b, int len_b)
{
	add_t *result = NULL;
	int i = 0, j = 0, carry = 0;

	result = malloc(sizeof(add_t));

	result->next = NULL, result->n_dig = 0, result->len_r = len_a + len_b;

	result->n_add = malloc(sizeof(char) * result->len_r);

	for (i = 0; i < result->len_r; i++)
		result->n_add[i] = '0';

	for (i = len_a - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len_b - 1; j >= 0; j--)
		{
			carry += (a[i] - '0') * (b[j] - '0');
			carry += result->n_add[i + j + 1] - '0';

			result->n_add[i + j + 1] = (carry % 10) + '0';
			carry /= 10;
		}
		if (carry)
			result->n_add[i + j + 1] = (carry % 10) + '0';
	}
	if (result->n_add[0] != '0')
		result->n_dig = len_a + len_b;
	else
		result->n_dig = len_a + len_b - 1;

	return (result);
}
