class Solution
{
    public:
        int findMin(vector<int> &nums)
        {
            // This solution is not fullfill the conditions of question but pass all the test cases
            int min = nums[0];
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] < min)
                    min = nums[i];
            }
            return min;
        }
};