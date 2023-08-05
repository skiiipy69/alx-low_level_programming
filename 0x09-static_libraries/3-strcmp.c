/**
 * _strcmp - a function that compares two strings
 * @s1: string 1 input to compare
 * @s2: against this other string 2
 * Return: 0 if s1 and s2 are equal
*/

int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; s1[a] != '\0' || s2[a] != '\0'; a++)
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
	}
	return (0);
}
