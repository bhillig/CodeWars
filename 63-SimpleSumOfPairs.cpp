// 63 - Simple Sum of Pairs (CodeWars Exercise)

/*
Given an integer n, find two integers a and b such that:

A) a >= 0 and b >= 0
B) a + b = n
C) DigitSum(a) + Digitsum(b) is maximum of all possibilities.  
You will return the digitSum(a) + digitsum(b).
*/

#include <vector>

int digitSum(long n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}


int solve(long n)
{
    int maxDigitSum = 0;
  
    std::vector<int> digitSums(n + 1, 0);
    
    for (long i = 0; i <= n; ++i)
        digitSums[i] = digitSum(i);
  
    for (long a = 0; a <= n; ++a)
    {
        long b = n - a;
        
        int sum = digitSums[a] + digitSums[b];
        maxDigitSum = std::max(sum, maxDigitSum);
    }
  
    return maxDigitSum;
}