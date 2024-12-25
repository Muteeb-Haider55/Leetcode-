class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> elements;
            elements.reserve(2 * n);

            for (int i = 0; i < n; i++)
            {
                elements.push_back(nums[i]);
                elements.push_back(nums[i + n]);
            }
            return elements;
    }
};

// vector <int> result (nums.size());
// int x=0;
// int y=n;
// for(int i=0;i<nums.size();i++){
//     if(i%2==0){
//         result[i]=nums[x];
//         x++;
//     }
//     else{
//         result[i]=nums[y];
//         y++;
//     }
// }
// return result;
       










