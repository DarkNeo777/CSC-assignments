#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int removeDuplicates(int* nums, int numsSize){
    int new_size = numsSize;
    for (int idx = 0, i = 0, j = 1; i < numsSize; idx++, j++) {
        while(j < numsSize && nums[i] == nums[j]) {
            j++;
            new_size--;
        }
        nums[idx] = nums[j-1];
        i = j;
    }
    return new_size;
}

int main(int argc, char const *argv[])
{
    int nums[] = {0,0,1,1,1,2,2,3,3,4};
    int n = sizeof(nums)/sizeof(nums[0]);
    int output = removeDuplicates(nums,n);
    printf("%d \n",output);

    for (size_t i = 0; i < output; i++)
    {
        printf("%d ",nums[i]);
    }
    
    return 0;
}
