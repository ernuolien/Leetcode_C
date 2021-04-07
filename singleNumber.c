#include<stdio.h>
#define numsize 7
//find the number which is not repeat

int singleNumber(int* num, int numSize);
int main()
{
    
    int nums[numsize] = {4,1,2,1,2,4,7};
    int ans;
    ans = singleNumber(nums,numsize);
    printf("%d\n",ans);
    
}

int singleNumber(int* num , int numSize)
{
    int n = num[0];
    for (int i = 1; i < numSize; i++)
    {
        n ^= num[i];        //XOR 
    }
    return n;
}