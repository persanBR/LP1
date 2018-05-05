#include <stdio.h>

int main (void) {
	float v, vconv;
	printf("Informe a velocidade em MPH.\n");
	scanf("%f", &v);
	vconv=v*1.6;
	if (vconv < 80.0)
	{
		printf("Acelere\n");
		printf("Velocidade atual em KPH %f\n", vconv);
	}
	else if (vconv > 100)
	{
		printf("Reduza\n");
                printf("Velocidade atual em KPH %f\n", vconv);
	}
	else if (vconv >= 80.0)
        {
                printf("Mantenha ou Acelere até 100 KPH\n");
		printf("Velocidade atual em KPH %f\n", vconv);
        }
	else if (vconv = 100.0)
        {
                printf("Mantenha ou reduza até 80 KPH\n");
		printf("Velocidade atual em KPH %f\n", vconv);
        }
	return 0;
}
