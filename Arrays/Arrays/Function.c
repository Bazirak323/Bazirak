#include <stdio.h>
int add(int x, int y);
int sub(int x, int y);
int main_dddddddddddddddddd() {

	

	int result;

	result = add(20, 10);

	printf("%d", result);
	return 0;
}


int add(int x, int y)
{	
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}