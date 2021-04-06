#include<stdio.h>
#include<stdlib.h>


//暴力解法
int maxSubarray(int* nums, int numSize)
{
    int max = nums[0];
    for (int i = 0; i < numSize; i++)
    {
        int sum = 0;
        for (int j = i; j < numSize; j++)
        {
            sum += nums[j];
            if (sum > max)
            {
                max = sum;
            }
            
        }
        
    }
    return max;
}

//動態配置演算法
int KadaneAlgorithm(int* num ,int numSize)
{
    int max = num[0];
    for (int i = 1; i < numSize; i++)
    {
        if (num[i-1]>0)
        {
            num[i] = num[i] + num[i-1];
        }
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    return max;
    
}

int main()
{
    int numsize = 10;
    int num[numsize] = {-2,-1,3,5,10,-2,-1,2,5,-2};
    int max;
    //max = maxSubarray(num,numsize);
    max = KadaneAlgorithm(num,numsize);
    printf("%d\n",max);

    system("pause");
}