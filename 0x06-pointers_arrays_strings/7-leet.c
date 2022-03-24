#include "main.h"

/**
  * leet - Function encodes a string into 1337
  * @f: The string to encode
  *
  * Return: Encoded string
  */
char *leet(char *f)
{
	int a = 0, b = 0, l = 5;
	char r[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	while (f[a])
	{
		b = 0;

		while (b < l)
		{
			if (f[a] == r[b] || f[a] - 32 == r[b])
			{
				f[a] = n[b];
			}

			b++;
		}

		a++;
	}

	return (f);
}
