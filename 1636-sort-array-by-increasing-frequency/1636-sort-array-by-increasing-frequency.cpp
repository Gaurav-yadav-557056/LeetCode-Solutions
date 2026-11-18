// appraoch
// step 1 :  calcualte frequnecy and store in unordered map
// step 2 : push this freuency in the priority queue
// step 3:  sort the array and give the answer 
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {

        unordered_map<int, int> mp;

        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        for(auto it : mp) {
            pq.push({it.second, -it.first});
        }

        int j = 0;

        while(!pq.empty()) {

            int freq = pq.top().first;
            int num = -pq.top().second;

            pq.pop();

            for(int i = 0; i < freq; i++) {
                nums[j++] = num;
            }
        }

        return nums;
    }
};