#include <stdio.h>

int main() {
    double pi;
    int num;
    float aux = 1;
    
    for (int i = 1; i <= 1000; i++) {
        
        pi += (!(i % 2)) ? 4.0 / aux : -4.0 / aux;
        aux += 2;
        printf("%d termo; pi = %f\n", i, pi);
    }
    return 0;
}
