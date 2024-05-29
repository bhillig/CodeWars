// 61 - Sort the odd! (CodeWars Exercise)

/*
You will be given an array of numbers. You have to sort the odd numbers in ascending order 
while leaving the even numbers at their original positions.

Examples
[7, 1]  =>  [1, 7]
[5, 8, 6, 3, 4]  =>  [3, 8, 6, 5, 4]
*/

#include <vector>

std::vector<int> sortArray(std::vector<int> array)
{
    std::vector<int> oddNumbers;
    std::copy_if(array.begin(), array.end(), std::back_inserter(oddNumbers), [](int x) { return x % 2});
    
    std::sort(oddNumbers.begin(), oddNumbers.end());
    
    size_t oddIndex = 0;
    for (size_t i = 0; i < array.size(); ++i)
    {
        if (array[i] % 2 == 0) continue;
        array[i] = oddNumbers[oddIndex++];
    }
    return array;
}