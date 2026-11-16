// approach 1 we are going to sort this 



class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;

        sort(nums.begin(), nums.end());

        int maxi = 1;
        int count = 1;

        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] - nums[i-1] == 1) {
                count++;
            }
            else if(nums[i] - nums[i-1] == 0) {
                continue;
            }
            else {
                maxi = max(count, maxi);
                count = 1;
            }
        }

        maxi = max(count, maxi);

        return maxi;
    }
};



// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
        
//     }
// };



