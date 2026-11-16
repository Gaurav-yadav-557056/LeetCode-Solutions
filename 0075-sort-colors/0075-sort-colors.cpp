//  we solve this question using two pointer since array contain only three type element in the array so we only push 0 at starting and push 2 at end 
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int length=nums.size();
        int start=0,end=length-1,i=0;
        while(i<=end){
         if(nums[i]==0){
           swap(nums[start] , nums[i]);
            start++;
            i++;
         }
         else if(nums[i]==2){
           swap(nums[end] , nums[i]);
            end--;
         }
         else{
         i++;
         }
        }
    }
};