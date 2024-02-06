// 12 - Sum Without Highest & Lowest Number

// Time Complexity: O(n)
// Space Complexity: O(1)

#include <vector>
#include <algorithm>
#include "limits.h"

int sum(std::vector<int> numbers)
{
    // Edge case: If a vector has two or less elements it's sum - max and min will be zero
    if (numbers.size() <= 2) return 0;
  
    int sum = 0;
    int min = INT_MAX;
    int max = INT_MIN;
  
    for (int num : numbers)
    {
        sum += num;
        min = std::min(num, min);
        max = std::max(num, max);
    }
  
    return sum - (min + max);
}