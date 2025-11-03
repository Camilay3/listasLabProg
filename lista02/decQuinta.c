#include <stdio.h>

int main() {
    int num = 1;
    printf("3^0 = %d\n", num);

    for (int i = 1; i <= 7; i++) {
        num = num*3;
        printf("3^%d = %d\n", i, num);
    }

    return 0;
}
