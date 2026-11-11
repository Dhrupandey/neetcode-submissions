class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> anagrams;
        for(int i = 0; i< strs.size();i++){
            string temp = strs[i];
            sort(temp.begin(),temp.end());
            anagrams[temp].push_back(strs[i]);
            
        }
        vector<vector<string>>ans;
        for(auto&a : anagrams){
            ans.push_back(a.second);
        }
        return ans;
    }
};
