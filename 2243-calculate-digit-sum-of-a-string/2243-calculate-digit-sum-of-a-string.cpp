// brute force using iterative method that basically do sum of three element in the given array a push in the trmprory string and move on the next three element 

class Solution {
public:
    string digitSum(string s, int k) {
        while(s.size() > k) {
       string temp = "";
            for(int i = 0; i < s.size(); i += k) {
                int sum = 0;
                for(int j = i; j < min(i + k, (int)s.size()); j++) {
                    sum += s[j] - '0';
                }
                temp += to_string(sum);
            }
            s = temp;
        }
        return s;
    }
};


// same concept using recursive method 

class Solution1 {
public:

    string solve(string s, int k) {
        // Base case
        if(s.size() <= k) {
            return s;
        }
        string temp = "";
        for(int i = 0; i < s.size(); i += k) {
            int sum = 0;
            for(int j = i; j < min(i + k, (int)s.size()); j++) {
                sum += s[j] - '0';
            }
            temp += to_string(sum);  // that t0_string function change integer to string 
        }

        // call again for the next three element 
        return solve(temp, k);
    }

    string digitSum(string s, int k) {
        return solve(s, k);
    }
};