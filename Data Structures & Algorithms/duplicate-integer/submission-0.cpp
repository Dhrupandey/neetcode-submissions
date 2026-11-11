class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> freq;
        for(int a:nums){
            if(freq.count(a)) return true;
            freq.insert(a);
        }
        return false;
    }
};