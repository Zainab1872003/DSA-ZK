class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int closetsum = 123456787;
        sort(nums.begin(),nums.end());
        for(int i = 0;i<n;i++){
            int j = i+1;
            int k = n-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(abs(sum-target)<abs(target - closetsum)){
                    closetsum = sum;
                }    
                if(sum<target){
                    j++;
                }
                else{
                k--;
                }
            }
        }
        return closetsum;
    }
};