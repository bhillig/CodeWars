// 25 - A Wolf In Sheeps Clothing (CodeWars Exercise)

#include <vector>
#include <string>

std::string warn_the_sheep(const std::vector<std::string>& queue)
{
    int wolfIndex = -1;
    int lastIndex = queue.size() - 1;
  
    for (int index = 0; index < queue.size(); ++index)
    {
      if (queue[index] == "wolf")
      {
        wolfIndex = index;
      }
    }
  
  if (wolfIndex == lastIndex)
  {
    return std::string("Pls go away and stop eating my sheep");
  }
  else
  {
    int sheepNumber = queue.size() - wolfIndex - 1;
    std::string text = std::to_string(sheepNumber);
    
    return std::string("Oi! Sheep number " + text + "! You are about to be eaten by a wolf!");
  }
}