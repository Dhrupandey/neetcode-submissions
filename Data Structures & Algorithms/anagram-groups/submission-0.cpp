class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // step 1 : making and storing the anagrams in map
        unordered_map<string,vector<string>> groups;
        for(int i =0; i<strs.size();i++){
            string key = strs[i];
            sort(key.begin(),key.end());
            //storing the sorted string as key and the original as its value
            groups[key].push_back(strs[i]);
        }
        // step 2: storing the made anagrams together in a vector
        vector<vector<string>> answer;
        for(auto&a:groups){
            answer.push_back(a.second);
        }
        return answer;
    }
};
