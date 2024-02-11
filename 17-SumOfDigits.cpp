// 17 - Sum of Digits (CodeWars Exercise)

/* 
    Given n, take the sum of the digits of n. If that value has more than one digit, continue reducing 
    in this way until a single-digit number is produced. The input will be a non-negative integer.
*/

// Helper function which returns the sum of n's digits
int sumOfDigits(int n)
{
    int res = 0;
    while (n >= 10)
    {
        res += n % 10;
        n /= 10;
    }
  
    res += n;
    return res;
}

int digital_root(int n)
{
    int sum = sumOfDigits(n);
    while (sum >= 10)
    {
        sum = sumOfDigits(sum);
    }
  
    return sum;
}