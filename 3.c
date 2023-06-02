#include <stdio.h>

int main() {
    int num, sum = 0;
    do {
        scanf("%d", &num);
        if (num % 7 == 0 && num != 0) {
            sum += num;
        }
    } while (num != 0);
    printf("%d", sum);
    return 0;
}