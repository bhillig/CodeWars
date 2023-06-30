// 8 - Move Zeroes To The End (CodeWars Exercise)

#include <vector>

  // Iterate over all the elements
    // If a zero is detected, increment a counter and continue, else add the element
  // At the end add as many zeros to the end as we detected
std::vector<int> move_zeroes(const std::vector<int>& input) 
{
  std::vector<int> result;
  
  int zerosDetected = 0;
  for (int i = 0; i < input.size(); ++i)
  {
    if (input[i] == 0)
    {
      zerosDetected++;
      continue;
    }
    
    result.push_back(input[i]);
  }
  
  while(zerosDetected > 0)
  {
    result.push_back(0);
    zerosDetected--;
  }
  
  return result;
}