// 72 - Highest Scoring Word (CodeWars Exercise)

/*
Given a string of words, you need to find the highest scoring word.

Each letter of a word scores points according to its position in the alphabet: a = 1, b = 2, c = 3 etc.

For example, the score of abad is 8 (1 + 2 + 1 + 4).

You need to return the highest scoring word as a string.
*/

#include <sstream>
#include <string>

std::string highestScoringWord(const std::string &str)
{
    std::stringstream ss(str);
    std::string word;
    
    std::string highestScoringWord = "";
    int maxPoints = 0;
  
    while(std::getline(ss, word, ' '))
    {
        int points = 0;
        for (char c : word)
            points += c - 'a' + 1;
      
        if (points > maxPoints)
        {
            highestScoringWord = word;
            maxPoints = points;
        }
    }
    
    return highestScoringWord;
}