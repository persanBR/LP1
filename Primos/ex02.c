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
	int N, i;
	printf("Informe o numero: ");
	scanf("%d", &N);
	for (i = 1 ; i <= N; i++) 
	{
		int check = ehprimo(i);
		//printf("%d\n", check);
		if (check == 1)
			{
				printf("%d e primo\n", i);
			}
		else
			{
				printf("%d nao e primo\n", i);
			}
	}
}
