class Solution {
public:
    vector<int> helpseq(string &s)
    {
        vector<int>v(26,0);
        for(auto &c:s)
        v[c-'a']++;

        return v;

    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int> ,vector<string>>mp;
        for(auto &s : strs)
        {
            auto v= helpseq(s);
            mp[v].push_back(s);
        }
        vector<vector<string>> res;
        for(auto &[p,p1]:mp)
        res.push_back(p1);


        return res;
        
    }
};
