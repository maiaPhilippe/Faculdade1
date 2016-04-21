#include <stdio.h>

int main() {
    int a,b;
    int sum, sub, mult;
    float divi;
    printf("\n1st Number: ");
    scanf("%d", &a);
    printf("\n2nd number: ");
    scanf("%d", &b);
    sum = a + b;
    sub = a - b;
    mult = a * b;
    divi =(float) a / b;
    printf("\nsum: %d\n", sum);
    printf("\nsub: %d\n", sub);
    printf("\nmult: %d\n", mult);
    printf("\ndiv: %.2f\n", divi);    
 return 0;
}

