// 59 - Row of the odd triangle (CodeWars Exercise)

/*
Given a triangle of consecutive odd numbers:

             1
          3     5
       7     9    11
   13    15    17    19
21    23    25    27    29
...

find the triangle's row knowing its index (the rows are 1-indexed), e.g.:

odd_row(1)  ==  [1]
odd_row(2)  ==  [3, 5]
odd_row(3)  ==  [7, 9, 11]
*/

#include <vector>

std::vector<unsigned long long> odd_row(unsigned int n) 
{
    int rowBefore = n - 1;
    long long numberOfPrimeNumbersBefore = 0;
    while (rowBefore > 0)
    {
        numberOfPrimeNumbersBefore += rowBefore;
        rowBefore--;
    }
    
    std::vector<unsigned long long> oddRow;

    while (oddRow.size() < n)
    {
        oddRow.push_back(2 * numberOfPrimeNumbersBefore + 1);
        numberOfPrimeNumbersBefore++;
    }
    
    return oddRow;
}