// 33 - Sum of differences in array (CodeWars Exercise) 

/*

Your task is to sum the differences between consecutive pairs in the array in descending order.

Example
[2, 1, 10]  -->  9
In descending order: [10, 2, 1]

Sum: (10 - 2) + (2 - 1) = 8 + 1 = 9

*/

#include <vector>
#include <algorithm>

int sumOfDifferences(const std::vector<int>& arr)
{
    if (arr.size() <= 1) return 0;
  
    std::vector<int> array(arr);

    int sum = 0;
  
    std::sort(array.begin(), array.end());
  
    for (int i = array.size() - 2; i >= 0; --i)
    {
        sum += (array[i+1] - array[i]);  
    }
  
    return sum;
}