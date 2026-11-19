class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> store(nums.begin(),nums.end());
        int largest = 0; // I set the default length 0;
        for(int x : store){
            int curr = x;
            int len = 1;
            if(store.count(x-1)) continue;
            while(store.count(curr+1)){
                len++;
                curr++;
            }
            largest = max(largest, len);

        }
        
        return largest;
        
    }
};
