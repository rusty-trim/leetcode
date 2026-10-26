#include <cmath>
#include <vector>

using namespace std;

class Solution
{
  public:
    int findClosestNumber(vector<int> &nums)
    {
        int closest = nums[0];

        for (int num : nums)
        {
            int current_distance = abs(num);
            int closest_distance = abs(closest);

            if ((current_distance < closest_distance) || (current_distance == closest_distance && num > closest))
                closest = num;
        }

        return closest;
    }
};
