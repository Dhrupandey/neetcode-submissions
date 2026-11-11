class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for(int a :nums){
            if(!seen.insert(a).second) return true;
        }
        return false;
    }
};