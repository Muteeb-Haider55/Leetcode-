class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       for (int i=0;i<nums.size();i++){
        nums[i]*=nums[i];
       } 
       std :: sort(nums.begin(),nums.end());
       return nums;
    }
};
//Another approach is to sort the array manully using while loop move left and right pointers  