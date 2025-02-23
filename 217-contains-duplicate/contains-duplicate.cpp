class Solution
{
    public:
        bool containsDuplicate(vector<int> &nums)
        {
           // optimal solution using hashmap
            unordered_set<int> seen;
            for (int num: nums)
            {
                if (seen.find(num) != seen.end())
                {
                    return true;	
                }
                seen.insert(num);
            }
            return false;
        }
};

	// Bruteforce approach
/*int n=nums.size();
       for(int i=0;i < n;i++){
           for(int j=i+1;j < n;j++){
               if (nums[i]==nums[j])
               return true;
           }
       }
       return false; */