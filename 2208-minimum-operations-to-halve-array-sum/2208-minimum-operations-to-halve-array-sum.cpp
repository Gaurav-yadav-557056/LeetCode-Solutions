class Solution {
public:
    int halveArray(vector<int>& nums) {
        priority_queue<float>pq;
         double sum=0.0;
        for(int i=0; i<nums.size(); i++){
            pq.push(nums[i]);
            sum+=nums[i];
        }
      double ans=0.0;
       int count=0;
       while(ans<sum/2.0){
           double top=pq.top();
           pq.pop();
           top=top/2.0;
           count++;
           ans+=top;
           pq.push(top);
       }
       return count;
    }
};