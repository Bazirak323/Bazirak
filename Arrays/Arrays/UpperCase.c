#include <stdio.h>
#include <string.h>
void UpperCase(char data);
int main() 
{
	char buf[] = "I aM a sTudENt";//문자열은 1차원 배열이다.
	int length;
	length = strlen(buf);

	char c1 = 'a';
	char c2 = 'A';
	printf("%c %d\n", c1, c1);
	printf("%c %d\n", c2, c2);

	for (int i = 0; i < length; i++)
	{
		UpperCase(buf[i]);

	}


	return 0;
}

void UpperCase(char data)
{

	if (data >= 'a' && data <= 'z')
	{
		data = data - ('a' - 'A');

	}
	else if (data >= 'A' && data <= 'Z')
	{

		data = data - ('A' - 'a');

	}
	printf("%c", data);

}




