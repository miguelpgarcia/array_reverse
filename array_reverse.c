/// Miguel de Pinho Garcia | 2120240 | 33A 

#include <stdio.h>
#include <stdlib.h>

void imprime(float *p) {
	if (p == NULL)
		exit(1); 
	int i;
	for (i = 0; i < 5; i++)
		printf("p[%d]= %.1f\n",i, p[i]);
	free(p);
}

float * inverte_vetor(float * v) {
	float* p = (float*)malloc(5 * sizeof(float));
	if (p != NULL)
	{
		p[0] = v[4];
		p[1] = v[3];
		p[2] = v[2];
		p[3] = v[1];
		p[4] = v[0];
		return p;
	}
	return NULL;
}


int main(void) {
	float v[] = {7.0, 10.0, 15.0, 20.0,30.0};
	float* p;
	p = inverte_vetor(v);
	imprime(p);
	return 0;
}
 