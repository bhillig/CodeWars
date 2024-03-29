// 32 - RGB To Hex Conversion (CodeWars Exercise)

/*

Examples:
255, 255, 255 --> "FFFFFF"
255, 255, 300 --> "FFFFFF"
0, 0, 0       --> "000000"
148, 0, 211   --> "9400D3"

*/
#include <string>
#include <algorithm>
#include <unordered_map>

std::unordered_map<int, std::string> valToHex {
  
      {0, "0"},
      {1, "1"},
      {2, "2"},
      {3, "3"},
      {4, "4"},
      {5, "5"},
      {6, "6"},
      {7, "7"},
      {8, "8"},
      {9, "9"},
      {10, "A"},
      {11, "B"},
      {12, "C"},
      {13, "D"},
      {14, "E"},
      {15, "F"}
  
};

// Takes in a value from 0-255 and returns a 2 digit hex string
std::string int_to_hex_2D(int num)
{
    // Clamp value to range [0, 255]
    num = std::max(0, std::min(255, num));
  
    int firstDigit = num / 16;
    int secondDigit = num % 16;
  
    return valToHex[firstDigit] + valToHex[secondDigit];
}
std::string rgb_to_hex(int r, int g, int b)
{
    return int_to_hex_2D(r) + int_to_hex_2D(g) + int_to_hex_2D(b);
}