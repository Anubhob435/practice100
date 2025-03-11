//29. Sum of numbers in the given range 

#include <stdio.h>

int sum_of_range(int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int start, end;
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    int sum = sum_of_range(start, end);
    printf("The sum of numbers from %d to %d is: %d\n", start, end, sum);

    return 0;
}