#include <stdio.h>
#include <stdlib.h>

int main() {
    for (int i = 0; i < 22; i++) {
        for (int j = 0; j < 22; j++) {
            if((i*i + j*j) <= 500) printf("Tripla de pitagoras: %d² + %d² = %d\n", i, j, i*i + j*j);
        }
    }
    
    return 0;
}
