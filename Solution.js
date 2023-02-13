
/**
 * @param {number[]} nums
 * @return {number}
 */
var jump = function (nums) {

    let currentPosition = 0;
    let endPositionOfCurrentJumpRange = 0;
    let minNumberOfJumpsToReachTarget = 0;

    for (let i = 0; i < nums.length - 1; ++i) {
        currentPosition = Math.max(i + nums[i], currentPosition);
        if (i === endPositionOfCurrentJumpRange) {
            endPositionOfCurrentJumpRange = currentPosition;
            ++minNumberOfJumpsToReachTarget;
        }
    }
    return minNumberOfJumpsToReachTarget;
};
