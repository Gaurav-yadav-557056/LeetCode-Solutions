// appraoch
  // step 1: calculating freuency
  // step 2 : create max heap
  // step 3: push answer int a string and return the value

class Solution {
public:
    string frequencySort(string s) {

        unordered_map<char, int> mp;
        for(int i = 0; i < s.length(); i++) {
            mp[s[i]]++;
        }
        priority_queue<pair<int, char>> pq;

        for(auto it : mp) {
            pq.push({it.second, it.first});
        }
        string ans = "";

        while(!pq.empty()) {

            int freq = pq.top().first;
            char ch = pq.top().second;

            pq.pop();

            for(int i = 0; i < freq; i++) {
                ans += ch;
            }
        }

        return ans;
    }
};