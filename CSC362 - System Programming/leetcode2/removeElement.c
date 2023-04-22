#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int removeElement(int* nums, int numsSize, int val) {
    int count= 0;
    for (int i=0; i < numsSize; i++)
        if (nums[i] == val) count++;
        else nums[i-count] = nums[i];
    return numsSize-count;
}

int main(int argc, char const *argv[])
{
    int nums[] = {0,1,2,2,3,0,4,2};
    int val = 2;
    int n = sizeof(nums)/sizeof(nums[0]);
    int output = removeElement(nums,n,val);
    printf("%d \n",output);

    for (size_t i = 0; i < output; i++)
    {
        printf("%d ",nums[i]);
    }
    
    return 0;
}
