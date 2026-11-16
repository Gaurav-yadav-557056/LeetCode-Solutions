// approach 1 we are going to sort this 



class Solution1 {
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


// solve using set that reduce the time complexity 
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> st;

        for(int i = 0; i < nums.size(); i++) {
            st.insert(nums[i]);
        }
        int maxi = 0;
        for(auto it = st.begin(); it != st.end(); it++) {
            int num = *it;
            if(st.find(num - 1) == st.end()) {  // this if consdition check that the current element is the last element means smallest element or not 
                int count = 1;
                while(st.find(num + 1) != st.end()) { // check elenment pressent in the set or not 
                    num++;
                    count++;
                }
                maxi = max(maxi, count);   
            }
        }

        return maxi;
    }
};