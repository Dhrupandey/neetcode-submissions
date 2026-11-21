class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>result;
        sort(nums.begin(),nums.end());// Sorted the vector;
        int n = nums.size();

        for(int i = 0; i<n;i++){
            if(nums[i]> 0) break;
            if(i> 0 && nums[i] == nums[i-1]) continue;
            int left = i+1;
            int right = n-1;

            while(left<right){
                if(nums[left] + nums[i] + nums[right] > 0){ right--;
                    continue;}
                
                if(nums[left] + nums[i] + nums[right] < 0){ left++;
                    continue;}
                // only reached when sum = 0;
                result.push_back({nums[left],nums[i],nums[right]});
                left++;
                right--;
                while(left < right && nums[left] == nums[left-1]) left++;
                while(right>left && nums[right] == nums[right+1]) right--;

            }
        }
        return result;

    }
};
