#include <stdio.h>
int main(void) 
{
	int x = 15213;
	int *px = &x;

	printf("x = %d\n", x);
	printf("px = %p\n", px);
	printf("x = %d\n", *px);
}
