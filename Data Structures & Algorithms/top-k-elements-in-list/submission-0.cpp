class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        for(int i: nums)
        {
            count[i]++;
        }

        vector<vector<int>>bucket(nums.size()+1);

        for(const auto& c: count)
        {
            bucket[c.second].push_back(c.first);
        }

        vector<int>res;
        for(int i=bucket.size()-1;i>0;--i )
        {
            for(int n:bucket[i])
            {
                res.push_back(n);
                if(res.size() == k)
                return res;
            }

        }
        return res;
    }
};
