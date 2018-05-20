#include <stdio.h>

int main (void) {
	int a,b,c;
	int* p;
	printf("informe a:\n");
	scanf("%d", &a);
	printf("informe b:\n");
	scanf("%d", &b);
	printf("valores de a e b: %d %d\n", a, b);
	if (a > b)
	{
		p = &a;
	}
	else
	{
		p = &b;
	}
	*p = *p - 50;
	printf("valores de a e b: %d %d\n", a, b);
}
