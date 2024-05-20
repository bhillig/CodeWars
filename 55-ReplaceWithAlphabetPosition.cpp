// 55 - Replace With Alphabet Position (CodeWars Exercise)

/*

In this kata you are required to, given a string, replace every letter with its position in the alphabet.

If anything in the text isn't a letter, ignore it and don't return it.

"a" = 1, "b" = 2, etc.

*/

#include <string>

std::string alphabet_position(const std::string &text) 
{
  std::string res = "";
  
  for (char c : text)
  {
    c = std::tolower(c);
    if (!std::isalpha(c)) continue;
    
    res += std::to_string(c - 'a' + 1) + ' ';
  }
  
  if (!res.empty())
    res.pop_back();
  return res;
}