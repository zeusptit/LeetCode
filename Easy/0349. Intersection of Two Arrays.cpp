class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        map<int,int> intersec;
        for(int x : nums1)intersec[x] = 1;
        for(int x : nums2)
            if(intersec[x] == 1)
                intersec[x] = 2;
        for(auto it : intersec)
            if(it.second == 2)
                v.push_back(it.first);
        return v;
    }
};