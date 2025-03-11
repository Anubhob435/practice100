//31. Program to add two fractions 

#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int n1, d1, n2, d2;

    printf("Enter first fraction (numerator and denominator): ");
    scanf("%d/%d", &n1, &d1);

    printf("Enter second fraction (numerator and denominator): ");
    scanf("%d/%d", &n2, &d2);

    int sumNum = n1 * d2 + n2 * d1;
    int sumDen = d1 * d2;
    int divisor = gcd(sumNum, sumDen);
    sumNum /= divisor;
    sumDen /= divisor;

    printf("The sum of the fractions is: %d/%d\n", sumNum, sumDen);

    return 0;
}