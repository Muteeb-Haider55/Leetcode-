class Solution
{
    public:
        int maxSubArray(vector<int> &nums)
        {
            int currsum = 0;
            int maxSum = nums[0];

            for (int num: nums)
            {
                currsum = max(num, currsum + num);
                maxSum = max(currsum, maxSum);
            }
            return maxSum;
        }
};