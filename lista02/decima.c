#include <stdio.h>

int main() {
    for (int i = 15; i <= 90; i++) {
        if(!(i%4)) printf("Quadrado do valor: %d\n", i*i);
    }
    return 0;
}
