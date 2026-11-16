class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;
        for(string &a: strs){
            encoded += to_string(a.size())+"#"+a;
        }
        return encoded;
    }
    
    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;
        while (i < s.size()){
            int j = s.find('#',i);
            int len = stoi(s.substr(i,j-i));
            result.push_back(s.substr(j+1,len));
            i = j+1+len;
        }
        return result;

    }
};
