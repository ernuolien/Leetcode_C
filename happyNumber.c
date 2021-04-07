
// give you a number ex:19
// 1^1 + 9^9 = 82
// 8^8 + 2^2 = 68
// 6^6 + 8^8 = 100
// 1^1 + 0 = 1
// 1 is happy number
#ifndef __cplusplus
typedef unsigned char bool;
static const bool False = 0;
static const bool True = 1;
#endif

#include<stdio.h>

int next_n(int n)
{
    int r = 0;
    while (n!=0)
    {
        int d = n % 10;
        n /= 10;
        r += d * d;
    }
    return r;
}

bool isHappy(int n)
{
    int slow = n;
    int fast = n;
    
    do
    {
        slow = next_n(slow);        //https://zh.wikipedia.org/wiki/Floyd%E5%88%A4%E5%9C%88%E7%AE%97%E6%B3%95
        fast = next_n(fast);        //https://visualgo.net/en/cyclefinding
        fast = next_n(fast);        //Floyd alg || cycle finding
    } while (slow!=fast);

    if (fast == 1)
        return True;
    else
        return False;
}

void main()
{
    bool ans = isHappy(19);
    if (ans == 1)
        printf("True\n");
    else
        printf("False\n");
}