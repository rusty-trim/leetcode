#include <string>

using namespace std;

class Solution
{
  public:
    bool isSubsequence(string s, string t)
    {
        unsigned int left = 0, right = 0;

        if (t.size() < s.size())
            return false;

        if (s.size() == 0)
            return true;

        while (left < s.size() && right < t.size())
        {
            if (s[left] == t[right])
            {
                left++;
                right++;
            }
            else
                right++;
        }

        return left == s.size();
    }
};
