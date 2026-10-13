class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>bucket;
        for(auto i:strs)
        {
            string word = i;
            sort(word.begin(),word.end());
            bucket[word].push_back(i);
        }

        vector<vector<string>>ans;
        for(auto i:bucket){
            ans.push_back(i.second);
        }
        return ans;

    }
};