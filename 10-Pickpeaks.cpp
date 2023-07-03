// 10 - Pickpeaks (CodeWars Exercise)

// A peak is classified as having a value that is bigger than its left and right elements
// Ex: [1,3,2] -> Here 3 is a peak as it is bigger than both 1 and 2, we would push 1 to pos and 3 to peaks

#include <vector>

struct PeakData 
{
  std::vector<int> pos, peaks;
};

PeakData pick_peaks(const std::vector<int> &v) 
{
    PeakData result;
  
    // Iterate over all elements except the first and last elements
    for(std::size_t i = 1; i < v.size() - 1; ++i)
    {
        // If we aren't greater than the element before we can leave
        if(v[i] <= v[i-1]) continue;
        
        // If we are greater than the element after us
        if (v[i] > v[i+1])
        {
            // Add the peak
            result.pos.push_back(i);
            result.peaks.push_back(v[i]);
        }
        // Otherwise check to see if there is a plateau
        else
        {
            int ogIndex = i;
            while(v[ogIndex] == v[i+1])
            {
                ++i;
                if (i+1 >= v.size()) break;
                
                if (v[ogIndex] > v[i+1])
                {
                result.pos.push_back(ogIndex);
                result.peaks.push_back(v[ogIndex]);
                }
            }
        }
    }
  
  return result;
}