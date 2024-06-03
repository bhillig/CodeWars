// 65 - Uniq (CodeWars Exercise)

/*
Implement a function which behaves like the uniq command in UNIX.
It takes as input a sequence and returns a sequence in which all duplicate elements following each other have been reduced to one instance.

Example:
["a", "a", "b", "b", "c", "a", "b", "c"]  =>  ["a", "b", "c", "a", "b", "c"]
*/

#include <string>
#include <vector>

std::vector<std::string> uniq(const std::vector<std::string> &v) 
{
    std::vector<std::string> res;
  
    std::string lastElement = " ";
    for (const std::string& str : v)
    {
        if (str == lastElement) continue;
      
        res.push_back(str);
        lastElement = str;
    }
  
    return res;
}