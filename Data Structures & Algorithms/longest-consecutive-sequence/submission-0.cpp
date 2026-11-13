class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> store(nums.begin(),nums.end());
        int largest= 0;

        for(int x: nums){
            if(store.count(x-1)) continue;

            int curr = x;
            int len = 1;
            while(store.count(curr+1)){
                curr++;
                len++;
            }
            largest = max(largest,len);
        }
        
        return largest;
        
    }
};
