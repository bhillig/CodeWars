// 11 - Snail (CodeWars Exercise)

#include <vector>
#include <set>

bool isValidIndex(const std::vector<std::vector<int>> &snail_map, std::vector<std::vector<int>> &visited, int row, int column);

std::vector<int> snail(const std::vector<std::vector<int>> &snail_map) 
{
  std::vector<int> result;
  
  // Since we know it is nxn
  int n = snail_map.size();
  
  std::vector<std::vector<int>> visited( n , std::vector<int> (n, 0));
  
  int currentColumn = 0;
  int currentRow = 0;
  
  while(true)
  {
    // If the current element is valid, add it and update the sets
    if (isValidIndex(snail_map, visited, currentRow, currentColumn))
    {
      result.push_back(snail_map[currentRow][currentColumn]);
      visited[currentRow][currentColumn] = 1;
    }
    else
    {
      break;
    }
    
    // Figure out the best direction we can move in
    
    // If its right
    if (isValidIndex(snail_map, visited, currentRow, currentColumn + 1))
    {
      currentColumn += 1;
      continue;
    }
    // Else if its below
    else if (isValidIndex(snail_map, visited, currentRow + 1, currentColumn))
    {
      currentRow += 1;
      continue;
    }
    else if (isValidIndex(snail_map, visited, currentRow, currentColumn - 1))
    {
      currentColumn -= 1;
      continue;
    }
    else if (isValidIndex(snail_map, visited, currentRow - 1, currentColumn))
    {
      currentRow -= 1;
      continue;
    }
    
    break;
  }
  
  return result;
}

bool isValidIndex(const std::vector<std::vector<int>> &snail_map, std::vector<std::vector<int>> &visited, int row, int column)
{
  int n = snail_map.size();

  // First check if the row exists
  if (row >= n || row < 0) return false;
  
  // Then check if the column exists
  if (column >= n || column < 0) return false;
  
  // Finally make sure we haven't visited this row and column before
  return visited[row].at(column) == 0;
}