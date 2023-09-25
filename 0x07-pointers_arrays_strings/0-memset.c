/**
 * _memset - function that fills memory with a constant byte
 * @s: first value
 * @b: second value
 * @n: thirth value
 *
 * Return: char with result of memset
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsinged int i = 0;
	char *start = s;

	while (i < n)
	{
		*s++ = b;
		i++;
	}
	return (start);
}
