//26. Check if a number is Harshad number 

#include <stdio.h>

int isHarshad(int num) {
    int sum = 0, temp = num;
    
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    
    return (num % sum == 0);
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (isHarshad(num)) {
        printf("%d is a Harshad number.\n", num);
    } else {
        printf("%d is not a Harshad number.\n", num);
    }
    
    return 0;
}