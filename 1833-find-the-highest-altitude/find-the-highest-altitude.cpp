class Solution
{
    public:
        int largestAltitude(vector<int> &gain)
        {
            int maxalt = 0, maximum = 0;
            for (int i = 0; i < gain.size(); i++)
            {
                maximum += gain[i];
                maxalt = max(maximum, maxalt);
            }
            return maxalt;
        }
};
//This solution pass all the test cases but not fullfill the user statement requirements