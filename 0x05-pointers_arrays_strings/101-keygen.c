#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int R;
	int C;
	int T;

	srand(time(NULL));
	for (C = 0, T = 2772; T > 122; C++)
	{
		R = (rand() % 125) + 1;
		printf("%c", R);
		T -= R;
	}
	printf("%c", T);

	return (0);
}
