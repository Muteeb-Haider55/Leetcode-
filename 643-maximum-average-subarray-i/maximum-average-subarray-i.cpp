class Solution
{
    public:
        double findMaxAverage(vector<int> &nums, int k)
        {
            double currsum = 0;
            int n = nums.size();
            for (int i = 0; i < k; i++)
            {
                currsum += nums[i];
            }
            double avg, max_avg = currsum / k;
            for (int i = k; i < n; i++)
            {
                currsum += nums[i];
                currsum -= nums[i - k];
                avg = currsum / k;
                max_avg = max(avg, max_avg);
            }

            return (max_avg);
        }
};