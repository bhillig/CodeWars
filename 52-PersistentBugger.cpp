// 52 - Persistent Bugger (CodeWars)

long long multiplyDigits(long long n)
{
    int product = 1;
    while (n > 9)
    {
        product *= (n % 10);
        n /= 10;
    }
    product *= n;
    return product;
}

int persistence(long long n)
{
    int numOfTimes = 0;
    long long product = n;
    while (product > 9)
    {
        product = multiplyDigits(product);
        ++numOfTimes;
    }
    return numOfTimes;
}