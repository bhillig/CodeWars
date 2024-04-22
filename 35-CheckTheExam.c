// 35 - Check the exam (CodeWars Exercise)

/*
The first input array is the key to the correct answers to an exam, like ["a", "a", "b", "d"]. The second 
one contains a student's submitted answers.

The two arrays are not empty and are the same length. Return the score for this array of answers, giving +4
for each correct answer, -1 for each incorrect answer, and +0 for each blank answer, represented as an 
empty string (in C the space character is used).

If the score < 0, return 0.
*/

#include <stddef.h>

int check_exam(size_t n, const char answers[n], const char student[n]) 
{

  int score = 0;

  for (size_t index = 0; index < n; ++index)
  {
    if (student[index] == answers[index])
    {
      score += 4;
    }
    else if (student[index] != ' ')
    {
      score -= 1;
    }
  }
  
  return score < 0 ? 0 : score;

}