//11. Program to find sum of GP Series 

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    float a, r, sum = 0;

    printf("Enter the first term (a): ");
    scanf("%f", &a);
    printf("Enter the common ratio (r): ");
    scanf("%f", &r);
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    if (r == 1) {
        sum = a * n;
    } else {
        sum = a * (1 - pow(r, n)) / (1 - r);
    }

    printf("Sum of the GP series: %.2f\n", sum);
    return 0;
}