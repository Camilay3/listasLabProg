#include <stdio.h>

int main() {
    int somatorio3 = 0, somatorio5 = 0;

    for (int i = 0; i <= 200; i++) {
        if(i < 100 && i%3 == 0) somatorio3 += i;
        if(i >= 100 && i%5 == 0) somatorio5 += i;
    }
    
    printf("Somatorio 3: %d\n", somatorio3);
    printf("Somatorio 5: %d\n", somatorio5);
    return 0;
}
