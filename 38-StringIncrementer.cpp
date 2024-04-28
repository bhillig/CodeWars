// 38 - String Incrementer (CodeWars Exercise)

/*
Your job is to write a function which increments a string, to create a new string.

If the string already ends with a number, the number should be incremented by 1.
If the string does not end with a number. the number 1 should be appended to the new string.
*/

#include <string>

std::string incrementString(const std::string &str)
{
  
    std::string s = str;
  
    if (!std::isdigit(s[s.size()-1]))
    {
      return s + "1";  
    }
  
    int index = s.size() - 1;
    while (s[index] == '9')
    {
      s[index] = '0';
      index -= 1;
    }
  
    if (!std::isdigit(s[index]))
    {
      s.insert(index + 1, "1");  
    }
    else
    {
      s[index] = s[index] + 1;
    }
    
    return s;
}