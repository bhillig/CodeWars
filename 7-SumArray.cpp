// Sum Array (CodeWars Exercise)

#include <vector>

// Time Complexity - O(n)
// Space Complexity - O(1)

int sum(std::vector<int> nums) 
{
  int sum = 0;
  
  for (int num : nums)
  {
    sum += num;
  }

  return sum;
}