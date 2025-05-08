#include <stdio.h>

int foo(unsigned int u)
{
	return (u > -1) ? 1 : 0;
}

int main(void)
{
	if (foo(15))
	{
		puts("1");
	}
	else
	{
		puts("0");
	}

	return 0;
}
