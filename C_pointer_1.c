#include <stdio.h>

int main(void)
{
	int v;
	int* a = &v;

	printf("%d\n", a);
	printf("%d\n", &v);

	return 0;

}