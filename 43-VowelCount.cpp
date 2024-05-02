// 43 - Vowel Count (CodeWars Exercise)

// Return the number (count) of vowels in the given string.

#include <string>
#include <unordered_set>

int getCount(const string& inputStr)
{
    int num_vowels = 0;
    std::unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
  
    for (char c : inputStr)
        if (vowels.find(c) != vowels.end()) ++num_vowels;
    
    return num_vowels;
}