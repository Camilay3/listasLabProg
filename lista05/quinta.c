#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 15
#define MAX_VAL 10

int int_cmp(const void *a, const void *b) {
    int ia = *(const int*)a;
    int ib = *(const int*)b;
    return (ia > ib) - (ia < ib);
}

double media(const int *v, int n) {
    long sum = 0;
    for (int i = 0; i < n; i++) sum += v[i];
    return (double)sum / n;
}

double mediana(int *v_sorted, int n) {
    if (n % 2) {
        return (double) v_sorted[n/2];
    } else {
        return ((double)v_sorted[n/2 - 1] + (double)v_sorted[n/2]) / 2.0;
    }
}

int encontra_moda(const int *v_sorted, int n, int *modes, int *max_freq) {
    if (!n) { *max_freq = 0; return 0; }

    int current = v_sorted[0], count = 1, mf = 1, mcount = 0;

    for (int i = 1; i < n; i++) {
        if (v_sorted[i] == current) {
            count++;
        } else {
            if (count > mf) {
                mf = count;
                mcount = 0;
                modes[mcount++] = current;
            } else if (count == mf) {
                modes[mcount++] = current;
            }
            current = v_sorted[i];
            count = 1;
        }
    }
    
    if (count > mf) {
        mf = count;
        mcount = 0;
        modes[mcount++] = current;
    } else if (count == mf) {
        modes[mcount++] = current;
    }

    *max_freq = mf;
    return mcount;
}

int main(void) {
    int v[N];
    int sorted[N];

    srand((unsigned) time(NULL));

    printf("Vetor gerado (N=%d, valores em [0..%d]):\n", N, MAX_VAL-1);
    for (int i = 0; i < N; i++) {
        v[i] = rand() % MAX_VAL;
        printf("%d ", v[i]);
    }
    printf("\n\n");

    for (int i = 0; i < N; i++) sorted[i] = v[i];
    qsort(sorted, N, sizeof(int), int_cmp);

    double m = media(v, N), med = mediana(sorted, N);

    int modes[N], maxf = 0, nm = encontra_moda(sorted, N, modes, &maxf);

    printf("Media : %.2f\n", m);
    printf("Mediana : %.2f\n", med);

    if (maxf <= 1) {
        printf("Moda : nao definida (todos os elementos aparecem com frequencia 1)\n");
    } else {
        printf("Moda (freq=%d):", maxf);
        for (int i = 0; i < nm; i++) printf(" %d", modes[i]);
        printf("\n");
    }

    printf("\nVetor ordenado:\n");
    for (int i = 0; i < N; i++) printf("%d ", sorted[i]);
    printf("\n");

    return 0;
}
