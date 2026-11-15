
// time compexity order of n^2  
// brute froce approach 


class Solution1 {
public:
    int numOfSubarrays(vector<int>& nums) {
        vector<int> pre_sum;
        int sum = 0;
        int count = 0;

        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            pre_sum.push_back(sum);
        }

        for(int i = 0; i < pre_sum.size(); i++) {

            if(pre_sum[i] % 2 != 0)
                count++;

            for(int j = 0; j < i; j++) {
                if((pre_sum[i] - pre_sum[j]) % 2 != 0)
                    count++;
            }
        }

        return count;
    }
};

// optimize approach 
class Solution {
public:
    int numOfSubarrays(vector<int>& nums) {
        long long odd = 0;
        long long even = 1;
        long long sum = 0;
        long long count = 0;
        int mod = 1e9 + 7;

        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            if(sum % 2 != 0) {
                count += even;
                odd++;
            }
            else {
                count += odd;
                even++;
            }

            count %= mod;
        }

        return count;
    }
};