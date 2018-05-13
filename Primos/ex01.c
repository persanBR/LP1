#include <stdio.h>

int ehprimo (int n) {
	int a, chk=1;
	for ( a=2; a < n ; a = a+1 )
	{
		if (n != a)
		       {
		       if (n % a == 0)
				{
			 		chk = 0;
					return(0);
					break;
				}
       			}
	}
	if (chk)
		{
			return(1);
		}
}

int main (void) {
	int N;
	printf("Informe o numero: ");
	scanf("%d", &N);
	int check = ehprimo(N);
	//printf("%d\n", check);
	if (check == 1)
		{
			printf("e primo\n");
		}
	else
		{
			printf("nao e primo\n");
		}
}
