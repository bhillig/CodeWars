// 42 - The Fest of Many Beasts (CodeWars Exercise)

#include <string>

bool feast(std::string beast, std::string dish)
{
    if (beast.empty() || dish.empty()) return false;
  
    return beast[0] == dish[0] && beast[beast.size()-1] == dish[dish.size()-1];
}