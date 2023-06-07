// Convert string to camel case (CodeWars Exercise)

// Complete the method/function so that it converts dash/underscore 
// delimited words into camel casing. The first word within the output 
// should be capitalized only if the original word was capitalized (known 
// as Upper Camel Case, also often referred to as Pascal case). The next
// words should be always capitalized.

#include <string>

std::string to_camel_case(std::string text) 
{
  std::string result;
  for(size_t i = 0; i < text.size(); ++i)
  {
    // If delimter discovered
    if(text[i] == '-' || text[i] == '_')
    {
        // Make the next character capital
        ++i;
        if(i >= text.size() || !isalpha(text[i])) continue;
      
        result += toupper(text[i]);
    }  
    else
    {
        result += text[i];
    }
  }
  return result;
}