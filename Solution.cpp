
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
    
public:
    int jump(const vector<int>& nums) const {

        int currentPosition = 0;
        int endPositionOfCurrentJumpRange = 0;
        int minNumberOfJumpsToReachTarget = 0;

        for (int i = 0; i < nums.size() - 1; ++i) {
            currentPosition = max(i + nums[i], currentPosition);
            if (i == endPositionOfCurrentJumpRange) {
                endPositionOfCurrentJumpRange = currentPosition;
                ++minNumberOfJumpsToReachTarget;
            }
        }
        return minNumberOfJumpsToReachTarget;
    }
};
