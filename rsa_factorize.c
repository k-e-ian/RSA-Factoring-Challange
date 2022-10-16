#include "rsa_factor.h"

/**
 * factorize - factorize a number in buff
 * @buffer: pointer to file containing buff
 * Return: 0 success
 */
int factorize(char *buff)
{
	long long int num, i;

	num = atoi(buff);

	/**for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			printf("%ld=%ld*%ld\n", num, num / i, i);
			break;
		}
	}
	return (0);
	**/
	if (num % 2 == 0)
	{
		printf("%llu=%llu*%i\n", num, num / 2, 2);
		return(0);
	}
	i = 3;
	while (i * i <= num)
	{
		if (num % i == 0)
		{
			printf("%llu=%llu*%llu\n", num, num / i, i);
			return (0);
		}
		i++;
	}
	printf("%llu=%llu*%i\n", num, num, 1);
	return (0);
}
