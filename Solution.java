
public class Solution {

    public int jump(int[] nums) {

        int currentPosition = 0;
        int endPositionOfCurrentJumpRange = 0;
        int minNumberOfJumpsToReachTarget = 0;

        for (int i = 0; i < nums.length - 1; ++i) {
            currentPosition = Math.max(i + nums[i], currentPosition);
            if (i == endPositionOfCurrentJumpRange) {
                endPositionOfCurrentJumpRange = currentPosition;
                ++minNumberOfJumpsToReachTarget;
            }
        }
        return minNumberOfJumpsToReachTarget;
    }
}
