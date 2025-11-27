#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

void soma_vetor(const float *v, int n, float *somatorio) {
	float s = 0.0f;
	for (int i = 0; i < n; i++) s += v[i];
	*somatorio = s;
}

int main(void) {
	float vetor[TAM];
	srand((unsigned) time(NULL));

	for (int i = 0; i < TAM; i++) {
		vetor[i] = ((float) rand() / (float) RAND_MAX) * 100.0f;
		printf("vetor[%d] = %.2f\n", i, vetor[i]);
	}

	float somatorio = 0.0f;
	soma_vetor(vetor, TAM, &somatorio);

	printf("\nSomatorio dos elementos: %.2f\n", somatorio);
	return 0;
}

