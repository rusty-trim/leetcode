#include <string>

using namespace std;

class Solution
{
  public:
    string mergeAlternately(string word1, string word2)
    {
        string merged = "";
        unsigned int current_index = 0;

        while (current_index < word1.size() || current_index < word2.size())
        {
            if (current_index < word1.size())
                merged += word1[current_index];

            if (current_index < word2.size())
                merged += word2[current_index];

            current_index++;
        }

        return merged;
    }
};
