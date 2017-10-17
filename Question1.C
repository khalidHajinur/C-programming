#include <stdio.h>
void main()
{
	double V ;
	double S ;
	printf("*******************************************\n");
	printf("* Speed(m.p.h.) * Stopping distance(feet) *\n");
	printf("*******************************************\n");
	for (V =10; V<=50; V+=5) {
		S=(V * V) / 20 + V;
		printf("*      %3.0f      *           %3.0f           *\n", V, S );
	
		}
	printf("*******************************************\n");
	}

