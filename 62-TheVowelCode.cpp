// 62 - The Vowel Code (CodeWars Exercise)

/*
1.) Create a function called encode() to replace all the lowercase vowels in a given string with numbers according to the following pattern:

a -> 1
e -> 2
i -> 3
o -> 4
u -> 5

2.) Create a function called decode() to turn the numbers back into vowels according to the same pattern shown above.

1 -> a
2 -> e
3 -> i
4 -> o
5 -> u

*/

#include <string>

int vowelToNumber(char c)
{
    switch (c)
    {
        case 'a': return 1;
        case 'e': return 2;
        case 'i': return 3;
        case 'o': return 4;
        case 'u': return 5;
        default: return -1;
    }
  
    return -1;
}

char numberToVowel(int n)
{
    if (n < 1 || n > 5) return ' ';
    
    return "aeiou"[n-1];
}

std::string encode(const std::string& str) 
{
    std::string encodedStr;
    for (char c : str)
    {
        int code = vowelToNumber(c);
        if (code != -1 && islower(c))
        {
            encodedStr += std::to_string(code);
            continue;
        }
          
        encodedStr += c;
    }
    return encodedStr;
}

std::string decode(const std::string& str) 
{
    std::string decodedStr;
    for (char c : str)
    {
        if (isdigit(c))
        {
            decodedStr += numberToVowel(c - '0');
            continue;
        }
      
        decodedStr += c;
    }
    return decodedStr;
}