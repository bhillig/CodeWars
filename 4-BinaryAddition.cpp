// Binary Addition - (CodeWars Exercise)

// Prompt: Implement a function that adds two numbers together and 
// returns their sum in binary. The conversion can be done before,
// or after the addition.

// The binary number returned should be a string.

#include <cstdint>
#include <string>


std::string add_binary(uint64_t a, uint64_t b) 
{
    int n = a + b;
    std::string result;
    do
    {
      result = std::to_string(n % 2) + result;
      n = n / 2;
    }
    while(n > 0);

    return result;
}