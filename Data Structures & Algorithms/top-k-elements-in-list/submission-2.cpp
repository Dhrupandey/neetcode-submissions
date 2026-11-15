class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int i = 0; i<nums.size();i++) freq[nums[i]]++;

        vector<vector<int>> bucket(nums.size()+1);
        for(auto&[val,cnt]:freq){  //
            bucket[cnt].push_back(val);

        }
        vector<int> result;

        for(int f = nums.size(); f>=1 && result.size() <k;f-- )
            for(int a : bucket[f]){
                result.push_back(a);
                if(result.size() ==k)break;
            }
        return result;
        
        
        
    }
};
