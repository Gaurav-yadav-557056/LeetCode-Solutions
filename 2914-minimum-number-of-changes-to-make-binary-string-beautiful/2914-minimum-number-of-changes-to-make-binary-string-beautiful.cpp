// appraoch 
// firsty we are going to divide the given string in two part and calculate the how many chagnes perform to make bianry string to beautiful 

class Solution {
public:
    int minChanges(string s) {
        int count=0;
        for(int i=0; i<s.length(); i+=2){
            if(s[i]!=s[i+1])
            count++;
        }
        return count;
    }
};