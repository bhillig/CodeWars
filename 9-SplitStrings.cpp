// 9 - SplitStrings (CodeWars Exercise)

// Complete the solution so that it splits the string into pairs of two characters. 
// If the string contains an odd number of characters then it should replace the 
// missing second character of the final pair with an underscore ('_').

// Examples:
// 'abc' =>  ['ab', 'c_']
// 'abcdef' => ['ab', 'cd', 'ef']

#include <string>
#include <vector>

std::vector<std::string> solution(const std::string &s)
{
    std::vector<std::string> pairs;
    
    // Calculate number of pairs needed
    size_t numberOfPairs = s.size() / 2;
  
    // If the string is odd we will need an extra pair
    bool even = !(s.size() % 2);
    if (!even)
    {
      numberOfPairs++;
    }
  
    // For every pair
    for(size_t i = 0; i < numberOfPairs; ++i)
    {
      // Add a pair to pairs
      size_t firstIndex = i * 2;
      size_t secondIndex = i * 2 + 1;
      
      std::string pair(1, s[firstIndex]);
      
      // If the second index is in bounds
      if (secondIndex < s.size())
      {
        pair += s[secondIndex];
      }
      else
      {
        pair += "_";
      }
      
      pairs.push_back(pair);
    }
  
    return pairs;
}