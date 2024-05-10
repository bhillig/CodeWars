// 48 - Unique In Order (CodeWars Exercise)

#include <string>
#include <vector>

template <typename T> std::vector<T> uniqueInOrder(const std::vector<T>& iterable)
{
  if (iterable.empty()) return {};
  
  std::vector<T> res = {iterable[0]};
  T lastSeen = iterable[0];
  for (size_t i = 1; i < iterable.size(); ++i)
  {
    if (iterable[i] == lastSeen) continue;
    res.push_back(iterable[i]);
    lastSeen = iterable[i];
  }
  return res;
}

std::vector<char> uniqueInOrder(const std::string& iterable)
{
  return uniqueInOrder<char>(std::vector<char>(iterable.begin(), iterable.end()));
}