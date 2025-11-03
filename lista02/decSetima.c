#include <stdio.h>

int main() {
    int tempCelsius = 10;

    while (tempCelsius <= 100) {
        printf("Temperatura em Celsius: %d / Temperatura em Fahrenheit: %.1f\n", tempCelsius, (float)(9*tempCelsius + 160)/5);
        tempCelsius += 10;
    }

    return 0;
}
