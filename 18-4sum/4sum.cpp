
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
                vector<vector<int>>ans;
                sort(nums.begin(),nums.end());


        for(int i = 0; i<n-3; i++){
        if(i>0 && nums[i]==nums[i-1]){
            continue;
        }
        for(int j = i+1; j<n-2;j++){
            if(j>i+1 && nums[j]==nums[j-1]){
                continue;
            }
            int left = j+1;
            int right = n-1;
           
            //two pointer
            while(left<right){
                long long sum = 1LL*nums[i] + nums[j] + nums[left] + nums[right];

                if(sum<target){
                    left++;
                } 
               else if(sum>target){
                    right--;
                }
                else{
                   ans.push_back({nums[i],nums[j],nums[left],nums[right]});

                   // check for duplicacy
                   while(left<right && nums[left]==nums[left+1]) left++;
                   while(left<right && nums[right]==nums[right-1]) right--;  
                   right--;
                   left++;            
                   }
            }
        }
        }
        return ans;
    }
};