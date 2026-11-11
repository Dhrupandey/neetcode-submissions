class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> seen;//storing the number in nums as key and its index is value
        for(int i = 0; i<nums.size();i++){
            int need = target - nums[i];// let the numbers be x and y so x+y = target hence x = target - y
            if(seen.count(need)) return{seen[need],i};//checking if the needed number is already stored in seen we can return its index with nums[i]'s index 
            seen[nums[i]] =i;// if the number is new and not needed we store it in seen to keep looking
        }
        return{};//if x+y!= target return empty array.
    }
};
