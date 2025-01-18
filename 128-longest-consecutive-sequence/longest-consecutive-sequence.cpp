class Solution
{
    public:
        int longestConsecutive(vector<int> &nums)
        {

            unordered_set<int> s(nums.begin(), nums.end());
            int longSeq = 0;
            for (int num: s)
            {
                if (s.find(num - 1) == s.end())
                {
                    int currentnum = num;
                    int currentseq = 1;

                    while (s.find(currentnum + 1) != s.end())
                    {
                        currentseq += 1;
                        currentnum += 1;
                    }

                    longSeq = max(longSeq, currentseq);
                }
            }
            return longSeq;
        }
};