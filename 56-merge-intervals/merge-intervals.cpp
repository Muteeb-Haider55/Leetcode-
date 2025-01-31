class Solution
{
    public:
        vector<vector<int>> merge(vector<vector<int>> &intervals)
        {
            vector<vector<int>> result;

            // Step 1: Sort intervals by their start times
            sort(intervals.begin(), intervals.end());

            // Step 2: Iterate through the intervals
            for (const auto &interval : intervals)
            {
                // If result is empty or the current interval doesn't overlap with the last one
                if (result.empty() || result.back()[1] < interval[0])
                {
                    result.push_back(interval); // Add a new interval
                }
                else
                {
                    // Merge the intervals
                    result.back()[1] = max(result.back()[1], interval[1]);
                }
            }

            return result;
        }
};
