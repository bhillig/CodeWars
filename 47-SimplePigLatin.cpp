// 47 - Simple Pig Latin (CodeWars Exercise)

// Move the first letter of each word to the end of it, then add "ay" to the end of the word. 
// Leave punctuation marks untouched.

#include <string>

// Helper function
bool isPunctuation(char c)
{
	return c == '.' || c == '?' || c == '!' || c == ';' || c == ',';
}

std::string pig_it(const std::string& str)
{
  	std::stringstream stream(str);
  
  	std::string token;
  	std::string res = "";
  	while (getline(stream, token, ' '))
  	{
    	std::string pig;
    	if (isPunctuation(token[0]))
    	{
      		pig = token;  
    	}
    	else
    	{
      		pig = std::string(token.begin(), token.begin() + 1) + "ay";
    	}

    	res += std::string(token.begin() + 1, token.end()) + pig + " ";
  	}
  
	// Remove trailing whitespace
  	res = std::string(res.begin(), res.end() - 1);
  
  	return res;
}

