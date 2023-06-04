// Duplicate Encoder (CodeWars Exercise)

// Prompt: The goal of this exercise is to convert a string 
// to a new string where each character in the new string is "(" 
// if that character appears only once in the original string, or ")" 
// if that character appears more than once in the original string. 
// Ignore capitalization when determining if a character is a duplicate.

#include <string>
#include <unordered_map>

std::string duplicate_encoder(const std::string& word)
{
  
    std::unordered_map<char, int> map;
    std::string returnString;
    
    for(char c : word)
    {
        char s = tolower(c);
        
        if(map.find(s) != map.cend())
        {
        map[s]++;  
        }
        else
        {
        map.emplace(std::make_pair(s, 1));  
        }
    }
    
    for(char c : word)
    {
        char s = tolower(c);
        
        int times = map[s];

        if(times > 1)
        {
        returnString += ")";  
        }
        else
        {
        returnString += "(";
        }
    }
    
    return returnString;
}