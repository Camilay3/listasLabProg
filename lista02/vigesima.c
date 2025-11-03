#include <stdio.h>

int fatorial(int num) {
    for (int i = num-1; i > 0; i--) num *= i;
    return num;
}

int main() {
    for (int i = 1; i <= 10; i++) {
        if(i%2 != 0) printf("Fatorial de %d = %d\n", i, fatorial(i));
    }

    return 0;
}
