// 54 - Find the odd int (CodeWars Exercise)

/*

Given an array of integers, find the one that appears an odd number of times.

There will always be only one integer that appears an odd number of times.

*/

#include <vector>
#include <unordered_map>

int findOdd(const std::vector<int>& numbers)
{
  std::unordered_map<int, int> map;
  
  for (int num : numbers)
    map[num] += 1;
  
  for (auto& [num, freq] : map)
    if (freq % 2 != 0) return num;
  
  return -1;
}