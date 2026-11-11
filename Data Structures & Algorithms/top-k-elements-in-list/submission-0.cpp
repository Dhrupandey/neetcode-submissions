class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int a: nums) freq[a]++;
        // making bucket sort 
        vector<vector<int> > bucket(nums.size()+1);
        for(auto &[val,cnt]:freq){
            bucket[cnt].push_back(val);
        }
        // preparint a vector with top k frequency elements
        vector<int> result;
        for(int f=nums.size();f>=1 && result.size()<k;f--)
            for(int a: bucket[f] ){
                result.push_back(a);
                if(result.size() == k)break;
            }
            return result;

        

    }
};
