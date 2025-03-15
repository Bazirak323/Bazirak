#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* pc;
	pc = malloc(sizeof(char) * 26);


	*pc = 'A';
	*(pc + 1) = 'B';


	for (int i = 0; i < 26; i++)
	{
		*(pc + i) = 'A' + i;

	}


	for (int i = 0; i < 26; i++)
	{
		printf("%c\n\n0", *(pc + i));

	}
	free(pc);















	return 0;
}