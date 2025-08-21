#include <stdio.h>

int main() {
    float l, b;
    printf("Enter length and width: ");
    scanf("%f %f", &l, &b);

    printf("Area=%f Perimeter=%f", l*b, 2*(l+b));
    return 0;
}