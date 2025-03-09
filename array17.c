//Maximum product subarray in an array 

#include <stdio.h>

int maxProduct(int* nums, int numsSize) {
    if (numsSize == 0) return 0;

    int maxProd = nums[0];
    int minProd = nums[0];
    int result = nums[0];

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] < 0) {
            int temp = maxProd;
            maxProd = minProd;
            minProd = temp;
        }

        maxProd = (nums[i] > maxProd * nums[i]) ? nums[i] : maxProd * nums[i];
        minProd = (nums[i] < minProd * nums[i]) ? nums[i] : minProd * nums[i];

        if (maxProd > result) {
            result = maxProd;
        }
    }

    return result;
}

int main() {
    int nums[] = {2, 3, -2, 4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int max_product = maxProduct(nums, numsSize);
    printf("Maximum product subarray is %d\n", max_product);
    return 0;
}