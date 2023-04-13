#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat _ ...
 * @s1: ...
 * @s2: ...
 * @n: ...
 * Return: ...
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[k])
		k++;
	if (n >= k)
		l = i + k;
	else
		l = i + n;
	str = malloc(sizeof(char) * l + k);
	if (str == NULL)
		return (NULL);
	k = 0;
	while (j < l)
	{
	if (j <= i)
		str[j] = s1[j];
	if (j >= i)
	{
		str[j] = s2[k];
		k++;
	}
	j++;
	}
	str[j] = '\0';
	return (str);
}
