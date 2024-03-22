// 25 - A Wolf In Sheeps Clothing (CodeWars Exercise)

/*
Wolves have been reintroduced to Great Britain. You are a sheep farmer, and are now plagued by wolves which pretend to be sheep. Fortunately, you are good at spotting them.

Warn the sheep in front of the wolf that it is about to be eaten. Remember that you are standing at the front of the queue which is at the end of the array:

*/
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