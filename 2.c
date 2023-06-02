#include <stdio.h>

float sumFoo(int n) {
    float sum = 1.0; 
    for(int i=2; i<=n; i++) {
        int fak = 1;
        for(int j=2; j<=i; j++) {
            fak *= j; 
        }
        float temp = fak / (float)(i*i); 
        sum += temp; 
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    float answer = sumFoo(n);
    printf("%f", answer);
    return 0;
}