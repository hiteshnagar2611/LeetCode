class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int digit=nums[i];
            int count=0;
            while(nums[i]>0){
                count++;
                nums[i]=nums[i]/10;
            }
            if(count>0 && count%2==0){
                ans++;
            }
            
        }
        return ans;
    }
};
